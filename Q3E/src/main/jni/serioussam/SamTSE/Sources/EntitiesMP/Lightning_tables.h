/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CLightning

CEntityProperty CLightning_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000025f<<8)+1, _offsetof(CLightning, m_penTarget), "Target", 'T', C_BLUE  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000025f<<8)+2, _offsetof(CLightning, m_penwsc), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x0000025f<<8)+3, _offsetof(CLightning, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025f<<8)+4, _offsetof(CLightning, m_tmLightningStart), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x0000025f<<8)+5, _offsetof(CLightning, m_soThunder), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000025f<<8)+6, _offsetof(CLightning, m_bBackground), "Background", 'B', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000025f<<8)+7, _offsetof(CLightning, m_penLight), "Light", 'L', C_CYAN  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x0000025f<<8)+8, _offsetof(CLightning, m_iLightAnim), "Light Animation", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000025f<<8)+9, _offsetof(CLightning, m_iSoundPlaying), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025f<<8)+10, _offsetof(CLightning, m_fLightningPower), "Lightning power", 'P', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025f<<8)+11, _offsetof(CLightning, m_fSoundDelay), "Sound delay", 'D', 0x7F0000FFUL, 0),
};
#define CLightning_propertiesct ARRAYCOUNT(CLightning_properties)

CEntityComponent CLightning_components[] = {
#define MODEL_TELEPORT ((0x0000025f<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT, "EFNM" "Models\\Editor\\Teleport.mdl"),
#define TEXTURE_TELEPORT ((0x0000025f<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT, "EFNM" "Models\\Editor\\BoundingBox.tex"),
#define SOUND_THUNDER1 ((0x0000025f<<8)+3)
 CEntityComponent(ECT_SOUND, SOUND_THUNDER1, "EFNM" "Sounds\\Environment\\Thunders\\Thunder1.wav"),
#define SOUND_THUNDER2 ((0x0000025f<<8)+4)
 CEntityComponent(ECT_SOUND, SOUND_THUNDER2, "EFNM" "Sounds\\Environment\\Thunders\\Thunder2.wav"),
#define SOUND_THUNDER3 ((0x0000025f<<8)+5)
 CEntityComponent(ECT_SOUND, SOUND_THUNDER3, "EFNM" "Sounds\\Environment\\Thunders\\Thunder3.wav"),
};
#define CLightning_componentsct ARRAYCOUNT(CLightning_components)

CEventHandlerEntry CLightning_handlers[] = {
 {0x025f0000, -1, CEntity::pEventHandler(&CLightning::
#line 119 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Lightning.es"
LightningStike),DEBUGSTRING("CLightning::LightningStike")},
 {0x025f0001, -1, CEntity::pEventHandler(&CLightning::H0x025f0001_LightningStike_01), DEBUGSTRING("CLightning::H0x025f0001_LightningStike_01")},
 {0x025f0002, -1, CEntity::pEventHandler(&CLightning::H0x025f0002_LightningStike_02), DEBUGSTRING("CLightning::H0x025f0002_LightningStike_02")},
 {0x025f0003, -1, CEntity::pEventHandler(&CLightning::H0x025f0003_LightningStike_03), DEBUGSTRING("CLightning::H0x025f0003_LightningStike_03")},
 {0x025f0004, -1, CEntity::pEventHandler(&CLightning::H0x025f0004_LightningStike_04), DEBUGSTRING("CLightning::H0x025f0004_LightningStike_04")},
 {0x025f0005, -1, CEntity::pEventHandler(&CLightning::H0x025f0005_LightningStike_05), DEBUGSTRING("CLightning::H0x025f0005_LightningStike_05")},
 {0x025f0006, -1, CEntity::pEventHandler(&CLightning::H0x025f0006_LightningStike_06), DEBUGSTRING("CLightning::H0x025f0006_LightningStike_06")},
 {0x025f0007, -1, CEntity::pEventHandler(&CLightning::H0x025f0007_LightningStike_07), DEBUGSTRING("CLightning::H0x025f0007_LightningStike_07")},
 {0x025f0008, -1, CEntity::pEventHandler(&CLightning::H0x025f0008_LightningStike_08), DEBUGSTRING("CLightning::H0x025f0008_LightningStike_08")},
 {1, -1, CEntity::pEventHandler(&CLightning::
#line 183 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Lightning.es"
Main),DEBUGSTRING("CLightning::Main")},
 {0x025f0009, -1, CEntity::pEventHandler(&CLightning::H0x025f0009_Main_01), DEBUGSTRING("CLightning::H0x025f0009_Main_01")},
 {0x025f000a, -1, CEntity::pEventHandler(&CLightning::H0x025f000a_Main_02), DEBUGSTRING("CLightning::H0x025f000a_Main_02")},
 {0x025f000b, -1, CEntity::pEventHandler(&CLightning::H0x025f000b_Main_03), DEBUGSTRING("CLightning::H0x025f000b_Main_03")},
 {0x025f000c, -1, CEntity::pEventHandler(&CLightning::H0x025f000c_Main_04), DEBUGSTRING("CLightning::H0x025f000c_Main_04")},
 {0x025f000d, -1, CEntity::pEventHandler(&CLightning::H0x025f000d_Main_05), DEBUGSTRING("CLightning::H0x025f000d_Main_05")},
 {0x025f000e, -1, CEntity::pEventHandler(&CLightning::H0x025f000e_Main_06), DEBUGSTRING("CLightning::H0x025f000e_Main_06")},
};
#define CLightning_handlersct ARRAYCOUNT(CLightning_handlers)

CEntity *CLightning_New(void) { return new CLightning; };
void CLightning_OnInitClass(void) {};
void CLightning_OnEndClass(void) {};
void CLightning_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CLightning_OnWorldEnd(CWorld *pwo) {};
void CLightning_OnWorldInit(CWorld *pwo) {};
void CLightning_OnWorldTick(CWorld *pwo) {};
void CLightning_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CLightning, CMovableModelEntity, "Lightning", "Thumbnails\\Lightning.tbn", 0x0000025f);
DECLARE_CTFILENAME(_fnmCLightning_tbn, "Thumbnails\\Lightning.tbn");
