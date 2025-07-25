/*
filesystem.c - game filesystem based on DP fs
Copyright (C) 2003-2006 Mathieu Olivier
Copyright (C) 2000-2007 DarkPlaces contributors
Copyright (C) 2007 Uncle Mike
Copyright (C) 2015-2023 Xash3D FWGS contributors

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#if XASH_SDL == 2
#include <SDL.h> // SDL_GetBasePath
#elif XASH_SDL == 3
#include <SDL3/SDL.h>
#endif

#include <errno.h>
#include "common.h"
#include "library.h"
#include "platform/platform.h"

CVAR_DEFINE_AUTO( fs_mount_hd, "0", FCVAR_ARCHIVE|FCVAR_PRIVILEGED|FCVAR_LATCH, "mount high definition content folder" );
CVAR_DEFINE_AUTO( fs_mount_lv, "0", FCVAR_ARCHIVE|FCVAR_PRIVILEGED|FCVAR_LATCH, "mount low violence models content folder" );
CVAR_DEFINE_AUTO( fs_mount_addon, "0", FCVAR_ARCHIVE|FCVAR_PRIVILEGED|FCVAR_LATCH, "mount addon content folder" );
CVAR_DEFINE_AUTO( fs_mount_l10n, "0", FCVAR_ARCHIVE|FCVAR_PRIVILEGED|FCVAR_LATCH, "mount localization content folder" );
CVAR_DEFINE_AUTO( ui_language, "english", FCVAR_ARCHIVE|FCVAR_PRIVILEGED|FCVAR_LATCH, "selected game language" );

fs_api_t g_fsapi;
fs_globals_t *FI;

static pfnCreateInterface_t fs_pfnCreateInterface;
static HINSTANCE fs_hInstance;

search_t *FS_Search( const char *pattern, int caseinsensitive, int gamedironly )
{
	return g_fsapi.Search( pattern, caseinsensitive, gamedironly );
}

int FS_Close( file_t *file )
{
	return g_fsapi.Close( file );
}

file_t *FS_Open( const char *filepath, const char *mode, qboolean gamedironly )
{
	return g_fsapi.Open( filepath, mode, gamedironly );
}

byte *FS_LoadFile( const char *path, fs_offset_t *filesizeptr, qboolean gamedironly )
{
	return g_fsapi.LoadFile( path, filesizeptr, gamedironly );
}

byte *FS_LoadDirectFile( const char *path, fs_offset_t *filesizeptr )
{
	return g_fsapi.LoadDirectFile( path, filesizeptr );
}

static void COM_StripDirectorySlash( char *pname )
{
	size_t len;

	len = Q_strlen( pname );
	if( len > 0 && pname[len - 1] == '/' )
		pname[len - 1] = 0;
}

void *FS_GetNativeObject( const char *obj )
{
	if( fs_pfnCreateInterface )
		return fs_pfnCreateInterface( obj, NULL );

	return NULL;
}

void FS_Rescan_f( void )
{
	uint32_t flags = 0;

	// FIXME: VFS shouldn't care about this, allow engine to mount gamedirs
	if( fs_mount_lv.value ) SetBits( flags, FS_MOUNT_LV );
	if( fs_mount_hd.value ) SetBits( flags, FS_MOUNT_HD );
	if( fs_mount_addon.value ) SetBits( flags, FS_MOUNT_ADDON );
	if( fs_mount_l10n.value ) SetBits( flags, FS_MOUNT_L10N );

	g_fsapi.Rescan( flags, ui_language.string );

	ClearBits( fs_mount_lv.flags, FCVAR_CHANGED );
	ClearBits( fs_mount_hd.flags, FCVAR_CHANGED );
	ClearBits( fs_mount_addon.flags, FCVAR_CHANGED );
	ClearBits( fs_mount_l10n.flags, FCVAR_CHANGED );
	ClearBits( ui_language.flags, FCVAR_CHANGED );
}

static void FS_ClearPaths_f( void )
{
	FS_ClearSearchPath();
}

static void FS_Path_f_( void )
{
	FS_Path_f();
}

static void FS_MakeGameInfo_f( void )
{
	g_fsapi.MakeGameInfo();
}

static const fs_interface_t fs_memfuncs =
{
	Con_Printf,
	Con_DPrintf,
	Con_Reportf,
	Sys_Error,

	_Mem_AllocPool,
	_Mem_FreePool,
	_Mem_Alloc,
	_Mem_Realloc,
	_Mem_Free,

	Sys_GetNativeObject,
};

static void FS_UnloadProgs( void )
{
	if( fs_hInstance )
	{
		COM_FreeLibrary( fs_hInstance );
		fs_hInstance = 0;
	}
}

#ifdef XASH_INTERNAL_GAMELIBS
#ifdef _DIII4Axxx //karin: add xash3d_ prefix on library(TODO: can't rename this, because CS16-client using it)
#define FILESYSTEM_STDIO_DLL "xash3d_filesystem_stdio"
#else
#define FILESYSTEM_STDIO_DLL "filesystem_stdio"
#endif
#else
#define FILESYSTEM_STDIO_DLL "filesystem_stdio." OS_LIB_EXT
#endif

static qboolean FS_LoadProgs( void )
{
	const char *name = FILESYSTEM_STDIO_DLL;
	FSAPI GetFSAPI;

	fs_hInstance = COM_LoadLibrary( name, false, true );

	if( !fs_hInstance )
	{
		Sys_Error( "%s: can't load filesystem library %s: %s\n", __func__, name, COM_GetLibraryError() );
		return false;
	}

	if( !( GetFSAPI = (FSAPI)COM_GetProcAddress( fs_hInstance, GET_FS_API )))
	{
		FS_UnloadProgs();
		Sys_Error( "%s: can't find GetFSAPI entry point in %s\n", __func__, name );
		return false;
	}

	if( GetFSAPI( FS_API_VERSION, &g_fsapi, &FI, &fs_memfuncs ) != FS_API_VERSION )
	{
		FS_UnloadProgs();
		Sys_Error( "%s: can't initialize filesystem API: wrong version\n", __func__ );
		return false;
	}

	if( !( fs_pfnCreateInterface = (pfnCreateInterface_t)COM_GetProcAddress( fs_hInstance, "CreateInterface" )))
	{
		FS_UnloadProgs();
		Sys_Error( "%s: can't find CreateInterface entry point in %s\n", __func__, name );
		return false;
	}

	Con_DPrintf( "%s: filesystem_stdio successfully loaded\n", __func__ );
	return true;
}

static qboolean FS_DetermineRootDirectory( char *out, size_t size )
{
#ifdef _DIII4A //karin: using cwd as user data directory
	extern const char * Sys_GameDataDefaultPath();
	Q_snprintf(out, size, "%s", Sys_GameDataDefaultPath());
	return true;
#endif
	const char *path = getenv( "XASH3D_BASEDIR" );

	if( COM_CheckString( path ))
	{
		Q_strncpy( out, path, size );
		return true;
	}

#if XASH_EMSCRIPTEN
	Q_strncpy( out, "/rwdir", size );
	return true;
#elif TARGET_OS_IOS
	Q_strncpy( out, IOS_GetDocsDir(), size );
	return true;
#elif XASH_ANDROID && XASH_SDL
	path = SDL_AndroidGetExternalStoragePath();
	if( path != NULL )
	{
		Q_strncpy( out, path, size );
		return true;
	}
	Sys_Error( "couldn't determine Android external storage path: %s", SDL_GetError( ));
	return false;
#elif XASH_PSVITA
	if( PSVita_GetBasePath( out, size ))
		return true;
	Sys_Error( "couldn't find %s data directory", XASH_ENGINE_NAME );
	return false;
#elif ( XASH_SDL >= 2 ) && !XASH_NSWITCH // GetBasePath not impl'd in switch-sdl2
	path = SDL_GetBasePath();

#if XASH_APPLE
	if( path != NULL && Q_stristr( path, ".app" ))
	{
		SDL_free((void *)path );
		path = SDL_GetPrefPath( NULL, XASH_ENGINE_NAME );
	}
#endif

	if( path != NULL )
	{
		Q_strncpy( out, path, size );
		SDL_free((void *)path );
		return true;
	}

#if XASH_POSIX || XASH_WIN32
	if( getcwd( out, size ))
		return true;
	Sys_Error( "couldn't determine current directory: %s, getcwd: %s", SDL_GetError(), strerror( errno ));
#else // !( XASH_POSIX || XASH_WIN32 )
	Sys_Error( "couldn't determine current directory: %s", SDL_GetError( ));
#endif // !( XASH_POSIX || XASH_WIN32 )
	return false;
#else // generic case
	if( getcwd( out, size ))
		return true;

	Sys_Error( "couldn't determine current directory: %s", strerror( errno ));
	return false;
#endif // generic case
}

static qboolean FS_DetermineReadOnlyRootDirectory( char *out, size_t size )
{
#ifdef _DIII4A //karin: using /Android/data as game data directory
	extern const char * Sys_ApplicationHomePath();
    extern const char * Sys_GameDataDefaultPath();
    const char *a = Sys_ApplicationHomePath();
    const char *b = Sys_GameDataDefaultPath();
    if(!Q_stricmp(a, b)) // it cause error if same
        return false;
	Q_snprintf(out, size, "%s", a);
	return true;
#endif
	const char *env_rodir = getenv( "XASH3D_RODIR" );

	if( _Sys_GetParmFromCmdLine( "-rodir", out, size ))
		return true;

	if( COM_CheckString( env_rodir ))
	{
		Q_strncpy( out, env_rodir, size );
		return true;
	}

#if XASH_EMSCRIPTEN
	Q_strncpy( out, "/rodir", size );
	return true;
#endif

	return false;
}

void FS_CheckConfig( void )
{
	if( fs_mount_lv.value || fs_mount_hd.value || fs_mount_addon.value || fs_mount_l10n.value )
		FS_Rescan_f();
}

/*
================
FS_Init
================
*/
void FS_Init( const char *basedir )
{
	string gamedir;
	char rodir[MAX_OSPATH], rootdir[MAX_OSPATH];
	rodir[0] = rootdir[0] = 0;

	if( !FS_DetermineRootDirectory( rootdir, sizeof( rootdir )) || !COM_CheckStringEmpty( rootdir ))
	{
		Sys_Error( "couldn't determine current directory (empty string)" );
		return;
	}
	COM_FixSlashes( rootdir );
	COM_StripDirectorySlash( rootdir );

	FS_DetermineReadOnlyRootDirectory( rodir, sizeof( rodir ));
	COM_FixSlashes( rodir );
	COM_StripDirectorySlash( rodir );

	if( !Sys_GetParmFromCmdLine( "-game", gamedir ))
	{
		char *env = getenv( "XASH3D_GAME" );
		if( env )
			Q_strncpy( gamedir, env, sizeof( gamedir ));
		else
			Q_strncpy( gamedir, basedir, sizeof( gamedir )); // gamedir == basedir
	}

	FS_LoadProgs();

	// TODO: this function will cause engine to stop in case of fail
	// when it will have an option to return string error, restore Sys_Error
	// FIXME: why do we call this function before InitStdio?
	// because InitStdio immediately scans all available game directories
	// and this better be reworked at some point
	g_fsapi.SetCurrentDirectory( rootdir );

	if( !g_fsapi.InitStdio( true, rootdir, basedir, gamedir, rodir ))
	{
		Sys_Error( "Can't init filesystem_stdio!\n" );
		return;
	}

	Cmd_AddRestrictedCommand( "fs_rescan", FS_Rescan_f, "rescan filesystem search pathes" );
	Cmd_AddRestrictedCommand( "fs_path", FS_Path_f_, "show filesystem search pathes" );
	Cmd_AddRestrictedCommand( "fs_clearpaths", FS_ClearPaths_f, "clear filesystem search pathes" );
	Cmd_AddRestrictedCommand( "fs_make_gameinfo", FS_MakeGameInfo_f, "create gameinfo.txt for current running game" );

	Cvar_RegisterVariable( &fs_mount_hd );
	Cvar_RegisterVariable( &fs_mount_lv );
	Cvar_RegisterVariable( &fs_mount_addon );
	Cvar_RegisterVariable( &fs_mount_l10n );

	if( !Sys_GetParmFromCmdLine( "-dll", host.gamedll ))
		host.gamedll[0] = 0;

	if( !Sys_GetParmFromCmdLine( "-clientlib", host.clientlib ))
		host.clientlib[0] = 0;

	if( !Sys_GetParmFromCmdLine( "-menulib", host.menulib ))
		host.menulib[0] = 0;
}

/*
================
FS_Shutdown
================
*/
void FS_Shutdown( void )
{
	if( g_fsapi.ShutdownStdio )
		g_fsapi.ShutdownStdio();

	FS_UnloadProgs();
}
