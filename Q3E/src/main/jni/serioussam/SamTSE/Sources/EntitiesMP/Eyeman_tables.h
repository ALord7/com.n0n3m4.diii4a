/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

EP_ENUMBEG(EyemanChar)
  EP_ENUMVALUE(EYC_SOLDIER, "Soldier"),
  EP_ENUMVALUE(EYC_SERGEANT, "Sergeant"),
EP_ENUMEND(EyemanChar);

EP_ENUMBEG(EyemanEnv)
  EP_ENUMVALUE(EYE_NORMAL, "Normal"),
  EP_ENUMVALUE(EYE_LAVA, "Lava"),
EP_ENUMEND(EyemanEnv);

#define ENTITYCLASS CEyeman

CEntityProperty CEyeman_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &EyemanChar_enum, (0x00000143<<8)+1, _offsetof(CEyeman, m_EecChar), "Character", 'C', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000143<<8)+2, _offsetof(CEyeman, m_bInvisible), "Invisible", 'I', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EyemanEnv_enum, (0x00000143<<8)+3, _offsetof(CEyeman, m_eeEnv), "Environment", 'E', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000143<<8)+4, _offsetof(CEyeman, m_bMumbleSoundPlaying), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000143<<8)+5, _offsetof(CEyeman, m_soMumble), "", 0, 0, 0),
};
#define CEyeman_propertiesct ARRAYCOUNT(CEyeman_properties)

CEntityComponent CEyeman_components[] = {
#define CLASS_BASE ((0x00000143<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyFly.ecl"),
#define MODEL_EYEMAN ((0x00000143<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_EYEMAN, "EFNM" "Models\\Enemies\\Eyeman\\Eyeman.mdl"),
#define TEXTURE_EYEMAN_SOLDIER ((0x00000143<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_EYEMAN_SOLDIER, "EFNM" "Models\\Enemies\\Eyeman\\Eyeman4.tex"),
#define TEXTURE_EYEMAN_SERGEANT ((0x00000143<<8)+3)
 CEntityComponent(ECT_TEXTURE, TEXTURE_EYEMAN_SERGEANT, "EFNM" "Models\\Enemies\\Eyeman\\Eyeman5.tex"),
#define TEXTURE_EYEMAN_LAVA ((0x00000143<<8)+5)
 CEntityComponent(ECT_TEXTURE, TEXTURE_EYEMAN_LAVA, "EFNM" "Models\\Enemies\\Eyeman\\Eyeman6.tex"),
#define CLASS_BASIC_EFFECT ((0x00000143<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define SOUND_IDLE ((0x00000143<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Eyeman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000143<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Eyeman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000143<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Eyeman\\Sounds\\Wound.wav"),
#define SOUND_BITE ((0x00000143<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_BITE, "EFNM" "Models\\Enemies\\Eyeman\\Sounds\\Bite.wav"),
#define SOUND_PUNCH ((0x00000143<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_PUNCH, "EFNM" "Models\\Enemies\\Eyeman\\Sounds\\Punch.wav"),
#define SOUND_DEATH ((0x00000143<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Eyeman\\Sounds\\Death.wav"),
#define SOUND_MUMBLE ((0x00000143<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_MUMBLE, "EFNM" "Models\\Enemies\\Eyeman\\Sounds\\Mumble.wav"),
};
#define CEyeman_componentsct ARRAYCOUNT(CEyeman_components)

CEventHandlerEntry CEyeman_handlers[] = {
 {0x01430000, STATE_CEnemyFly_FlyHit, CEntity::pEventHandler(&CEyeman::
#line 388 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Eyeman.es"
FlyHit),DEBUGSTRING("CEyeman::FlyHit")},
 {0x01430001, -1, CEntity::pEventHandler(&CEyeman::H0x01430001_FlyHit_01), DEBUGSTRING("CEyeman::H0x01430001_FlyHit_01")},
 {0x01430002, -1, CEntity::pEventHandler(&CEyeman::H0x01430002_FlyHit_02), DEBUGSTRING("CEyeman::H0x01430002_FlyHit_02")},
 {0x01430003, -1, CEntity::pEventHandler(&CEyeman::H0x01430003_FlyHit_03), DEBUGSTRING("CEyeman::H0x01430003_FlyHit_03")},
 {0x01430004, -1, CEntity::pEventHandler(&CEyeman::H0x01430004_FlyHit_04), DEBUGSTRING("CEyeman::H0x01430004_FlyHit_04")},
 {0x01430005, STATE_CEnemyFly_GroundHit, CEntity::pEventHandler(&CEyeman::
#line 421 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Eyeman.es"
GroundHit),DEBUGSTRING("CEyeman::GroundHit")},
 {0x01430006, -1, CEntity::pEventHandler(&CEyeman::H0x01430006_GroundHit_01), DEBUGSTRING("CEyeman::H0x01430006_GroundHit_01")},
 {0x01430007, -1, CEntity::pEventHandler(&CEyeman::H0x01430007_GroundHit_02), DEBUGSTRING("CEyeman::H0x01430007_GroundHit_02")},
 {0x01430008, -1, CEntity::pEventHandler(&CEyeman::H0x01430008_GroundHit_03), DEBUGSTRING("CEyeman::H0x01430008_GroundHit_03")},
 {0x01430009, -1, CEntity::pEventHandler(&CEyeman::H0x01430009_GroundHit_04), DEBUGSTRING("CEyeman::H0x01430009_GroundHit_04")},
 {0x0143000a, -1, CEntity::pEventHandler(&CEyeman::H0x0143000a_GroundHit_05), DEBUGSTRING("CEyeman::H0x0143000a_GroundHit_05")},
 {0x0143000b, -1, CEntity::pEventHandler(&CEyeman::H0x0143000b_GroundHit_06), DEBUGSTRING("CEyeman::H0x0143000b_GroundHit_06")},
 {1, -1, CEntity::pEventHandler(&CEyeman::
#line 454 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Eyeman.es"
Main),DEBUGSTRING("CEyeman::Main")},
};
#define CEyeman_handlersct ARRAYCOUNT(CEyeman_handlers)

CEntity *CEyeman_New(void) { return new CEyeman; };
void CEyeman_OnInitClass(void) {};
void CEyeman_OnEndClass(void) {};
void CEyeman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEyeman_OnWorldEnd(CWorld *pwo) {};
void CEyeman_OnWorldInit(CWorld *pwo) {};
void CEyeman_OnWorldTick(CWorld *pwo) {};
void CEyeman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEyeman, CEnemyFly, "Eyeman", "Thumbnails\\Eyeman.tbn", 0x00000143);
DECLARE_CTFILENAME(_fnmCEyeman_tbn, "Thumbnails\\Eyeman.tbn");
