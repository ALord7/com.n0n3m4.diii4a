cmake_minimum_required(VERSION 3.9)
project (source-engine)

set(binary_name ${SOURCE_ENGINE_PREFIX}engine)

set(source_src 
		socketcreator.cpp
		clientframe.cpp
		decal_clip.cpp
		demofile.cpp
		DevShotGenerator.cpp
		OcclusionSystem.cpp
		tmessage.cpp
		baseclient.cpp
		baseclientstate.cpp
		cbenchmark.cpp
		console.cpp
		render_pch.cpp
		decals.cpp
		disp.cpp
		disp_interface.cpp
		disp_mapload.cpp
		gl_draw.cpp
		gl_rsurf.cpp
		gl_shader.cpp
		l_studio.cpp
		matsys_interface.cpp
		modelloader.cpp
		Overlay.cpp
		r_decal.cpp
		r_linefile.cpp
		server_pch.cpp
		sv_ipratelimit.cpp
		sv_rcon.cpp
		sv_steamauth.cpp
		sv_uploaddata.cpp
		sv_uploadgamestats.cpp
		vengineserver_impl.cpp
		sv_main.cpp
		sv_client.cpp
		sv_ents_write.cpp
		sv_filter.cpp
		sv_framesnapshot.cpp
		sv_log.cpp
		sv_packedentities.cpp
		sv_plugin.cpp
		sv_precache.cpp
		sv_redirect.cpp
		sv_remoteaccess.cpp
		baseautocompletefilelist.cpp
		baseserver.cpp
		bitbuf_errorhandler.cpp
		../public/blockingudpsocket.cpp
		../public/bsptreedata.cpp
		../public/builddisp.cpp
		changeframelist.cpp
		checksum_engine.cpp
		ccs.cpp
		clockdriftmgr.cpp
		cl_check_process.cpp	
		cmd.cpp
		cmodel.cpp
		cmodel_bsp.cpp
		cmodel_disp.cpp
		../public/collisionutils.cpp
		common.cpp
		../public/crtmemdebug.cpp
		cvar.cpp
		../public/disp_common.cpp
		disp_defs.cpp
		disp_helpers.cpp
		../public/disp_powerinfo.cpp
		../public/dispcoll_common.cpp
		DownloadListGenerator.cpp
		dt.cpp
		dt_common_eng.cpp
		dt_encode.cpp
		dt_instrumentation.cpp
		dt_instrumentation_server.cpp
		dt_localtransfer.cpp
		../public/dt_recv.cpp
		dt_recv_decoder.cpp
		dt_recv_eng.cpp
		../public/dt_send.cpp
		dt_send_eng.cpp
		dt_stack.cpp
		dt_test.cpp
		../public/dt_utlvector_common.cpp
		../public/dt_utlvector_recv.cpp
		../public/dt_utlvector_send.cpp
		enginesingleuserfilter.cpp
		enginestats.cpp
		enginethreads.cpp
		enginetrace.cpp
		filesystem_engine.cpp
		../public/filesystem_helpers.cpp
		../public/filesystem_init.cpp
		filetransfermgr.cpp
		GameEventManager.cpp
		GameEventManagerOld.cpp
		gametrace_engine.cpp
		hltvclient.cpp
		hltvclientstate.cpp
		hltvdemo.cpp 
		hltvserver.cpp
		hltvtest.cpp
		host.cpp
		host_cmd.cpp
		host_listmaps.cpp
		host_phonehome.cpp
		host_state.cpp
		initmathlib.cpp
		../common/language.cpp
		LocalNetworkBackdoor.cpp
		../public/lumpfiles.cpp
		MapReslistGenerator.cpp
		materialproxyfactory.cpp
		mem_fgets.cpp
		mod_vis.cpp
		ModelInfo.cpp
		net_chan.cpp
		net_synctags.cpp
		net_ws.cpp
		net_ws_queued_packet_sender.cpp
		../common/netmessages.cpp
		../common/steamid.cpp
		networkstringtable.cpp
		NetworkStringTableItem.cpp
		networkstringtableserver.cpp
		../public/networkvar.cpp
		packed_entity.cpp
		pure_server.cpp
		pr_edict.cpp
		precache.cpp
		quakedef.cpp
		randomstream.cpp
		../common/randoverride.cpp
		../public/registry.cpp
		engine_replay_int.cpp
		replay_internal.cpp
		replaydemo.cpp
		replayserver.cpp
		../public/sentence.cpp
		sound_shared.cpp
		spatialpartition.cpp
		staticpropmgr.cpp
		../public/studio.cpp
		sys_dll.cpp
		sys_dll2.cpp
		sys_engine.cpp
		testscriptmgr.cpp
		traceinit.cpp
		../public/vallocator.cpp
		voiceserver_impl.cpp
		vprof_engine.cpp
		vprof_record.cpp
		world.cpp
		../public/XZip.cpp
		../public/XUnzip.cpp
		zone.cpp
		cheatcodes.cpp
		../public/editor_sendcommand.cpp
		keys.cpp
		networkstringtableclient.cpp
		../public/scratchpad3d.cpp
		servermsghandler.cpp
		../common/SourceAppInfo.cpp
		snd_io.cpp
		EngineSoundServer.cpp
		audio/voice_wavefile.cpp
		audio/vox.cpp
		masterserver.cpp

		#audio/snd_dev_xaudio.cpp[$X360]
		#audio/snd_wave_mixer_xma.cpp	[$X360]

		#audio/snd_dev_openal.cpp # [$OSXALL]
		#audio/snd_dev_mac_audioqueue.cpp#	[$OSXALL]
		#audio/voice_record_mac_audioqueue.cpp	#[$OSXALL]
)
set(source_src
	${source_src}
			audio/voice_record_sdl.cpp #[$OSXALL||$LINUXALL]
			audio/snd_dev_sdl.cpp
		audio/snd_posix.cpp
sys_stubwind.cpp
)
set(source_src
	${source_src}
			client_pch.cpp
			cl_rcon.cpp
			r_efx.cpp
			view.cpp
			rpt_engine.cpp
			cl_steamauth.cpp
			cdll_engine_int.cpp
			cl_main.cpp
			cl_demo.cpp
			cl_demoaction.cpp
			cl_demoaction_types.cpp
			cl_demoactioneditors.cpp
			cl_demoactionmanager.cpp
			cl_demoeditorpanel.cpp
			cl_demosmootherpanel.cpp
			cl_demouipanel.cpp
			cl_foguipanel.cpp
			cl_txviewpanel.cpp
			cl_entityreport.cpp
			cl_ents_parse.cpp
			cl_localnetworkbackdoor.cpp
			cl_parse_event.cpp
			cl_pluginhelpers.cpp
			cl_pred.cpp
			cl_texturelistpanel.cpp
			client.cpp
			colorcorrectionpanel.cpp
			buildcubemaps.cpp
			debug_leafvis.cpp
			debugoverlay.cpp
			LoadScreenUpdate.cpp
			enginetool.cpp
			gl_drawlights.cpp
			gl_lightmap.cpp
			gl_matsysiface.cpp
			gl_rlight.cpp
			gl_rmain.cpp
			gl_rmisc.cpp
			gl_screen.cpp
			gl_warp.cpp
			r_areaportal.cpp
			shadowmgr.cpp
			cl_bounded_cvars.cpp
			downloadthread.cpp
			matchmakinghost.cpp
			matchmakingqos.cpp
			matchmakingclient.cpp
			matchmakingshared.cpp
			matchmakingmigrate.cpp
			replaydemoplayer.cpp
			Session.cpp
			sys_mainwind.cpp
			bugreporter.cpp
			download.cpp
			host_saverestore.cpp
			lightcache.cpp
			saverestore_filesystem.cpp
			sys_getmodes.cpp
			vgui_askconnectpanel.cpp
			xboxsystem.cpp
#			audio/audio_pch.cpp
			EngineSoundClient.cpp
			engsoundservice.cpp
			audio/MPAFile.cpp #[!$X360]
			audio/MPAHeader.cpp #[!$X360]
			audio/circularbuffer.cpp
			audio/snd_dev_common.cpp
			audio/snd_dma.cpp
			audio/snd_dsp.cpp
			audio/snd_mix.cpp
			audio/snd_sentence_mixer.cpp
			audio/snd_wave_data.cpp
			audio/snd_wave_mixer.cpp
			audio/snd_wave_mixer_adpcm.cpp
			audio/snd_wave_source.cpp
			audio/snd_wave_temp.cpp
			audio/snd_win.cpp
			audio/voice_gain.cpp	
			audio/snd_mp3_source.cpp
			audio/snd_wave_mixer_mp3.cpp
			audio/VBRHeader.cpp #[!$X360]
			audio/voice.cpp #[!$X360]
			audio/voice_sound_engine_interface.cpp #[!$X360]
			../public/vgui_controls/vgui_controls.cpp
			../common/vgui/vgui_basebudgetpanel.cpp
			../common/vgui/vgui_budgetbargraphpanel.cpp
			../common/vgui/vgui_budgethistorypanel.cpp
			../common/vgui/vgui_budgetpanelshared.cpp
			perfuipanel.cpp
			vgui_basepanel.cpp
			vgui_baseui_interface.cpp
			vgui_budgetpanel.cpp
			vgui_DebugSystemPanel.cpp
			vgui_drawtreepanel.cpp
			vgui_helpers.cpp
			vgui_texturebudgetpanel.cpp
			vgui_vprofgraphpanel.cpp
			vgui_vprofpanel.cpp
			toolframework.cpp
)
set(source_src
	${source_src}
				audio/voice_mixer_controls_openal.cpp #[$OSXALL||$LINUXALL]
				audio/voice_record_openal.cpp #[$OSXALL||$LINUXALL]
)

set(source_inc 
		.
		../public
		../public/tier0
		../public/tier1
		../common
		audio
		../public/engine/audio/
		audio/
)

set(source_def "__USEA3D;_ADD_EAX_;ENGINE_DLL;VERSION_SAFE_STEAM_API_INTERFACES;USE_BREAKPAD_HANDLER;USE_CONVARS;VOICE_OVER_IP")

set(source_lib
	${SOURCE_ENGINE_PREFIX}tier0 
	${SOURCE_ENGINE_PREFIX}vgui_controls 
	${SOURCE_ENGINE_PREFIX}dmxloader 
	${SOURCE_ENGINE_PREFIX}tier1 
	${SOURCE_ENGINE_PREFIX}tier2 
	${SOURCE_ENGINE_PREFIX}tier3 
	${SOURCE_ENGINE_PREFIX}bitmap 
	${SOURCE_ENGINE_PREFIX}vstdlib 
	${SOURCE_ENGINE_PREFIX}appframework 
	${SOURCE_ENGINE_PREFIX}datamodel 
	${SOURCE_ENGINE_PREFIX}vtf 
	${SOURCE_ENGINE_PREFIX}mathlib 
	${SOURCE_ENGINE_PREFIX}steam_api 
	${SOURCE_ENGINE_PREFIX}matsys_controls 
	bz2 
	SDL2
	${SOURCE_ENGINE_PREFIX}jpeg 
	${SOURCE_ENGINE_PREFIX}zlibstatic 
	${SOURCE_ENGINE_PREFIX}curl
	ssl
	crypto
)

if(BUILD_SOURCE_HL2)
set(source_def "${source_def};_SV_CL_HL2")
endif()
if(BUILD_SOURCE_CSTRIKE)
set(source_def "${source_def};_SV_CL_CSTRIKE")
endif()
if(BUILD_SOURCE_PORTAL)
set(source_def "${source_def};_SV_CL_PORTAL")
endif()
if(BUILD_SOURCE_DOD)
set(source_def "${source_def};_SV_CL_DOD")
endif()
if(BUILD_SOURCE_HL2MP)
set(source_def "${source_def};_SV_CL_HL2MP")
endif()
if(BUILD_SOURCE_EPISODIC)
set(source_def "${source_def};_SV_CL_EPISODIC")
endif()
if(BUILD_SOURCE_HL1)
set(source_def "${source_def};_SV_CL_HL1")
endif()
if(BUILD_SOURCE_HL1MP)
set(source_def "${source_def};_SV_CL_HL1MP")
endif()

add_library (${binary_name} SHARED ${source_src})
target_include_directories(${binary_name} PRIVATE ${source_inc})
set_target_properties(${binary_name} PROPERTIES COMPILE_DEFINITIONS "${source_def}")
target_link_libraries(${binary_name} PRIVATE ${source_lib})


