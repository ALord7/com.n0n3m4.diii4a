/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

EP_ENUMBEG(ElementalType)
  EP_ENUMVALUE(ELT_AIR, "obsolete"),
  EP_ENUMVALUE(ELT_ICE, "obsolete"),
  EP_ENUMVALUE(ELT_LAVA, "Lava"),
  EP_ENUMVALUE(ELT_STONE, "obsolete"),
  EP_ENUMVALUE(ELT_WATER, "obsolete"),
EP_ENUMEND(ElementalType);

EP_ENUMBEG(ElementalCharacter)
  EP_ENUMVALUE(ELC_SMALL, "Small"),
  EP_ENUMVALUE(ELC_BIG, "Big"),
  EP_ENUMVALUE(ELC_LARGE, "Large"),
EP_ENUMEND(ElementalCharacter);

EP_ENUMBEG(ElementalState)
  EP_ENUMVALUE(ELS_NORMAL, "Normal"),
  EP_ENUMVALUE(ELS_BOX, "Box"),
  EP_ENUMVALUE(ELS_PLANE, "Plane"),
EP_ENUMEND(ElementalState);

#define ENTITYCLASS CElemental

CEntityProperty CElemental_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &ElementalType_enum, (0x00000142<<8)+1, _offsetof(CElemental, m_EetType), "Type", 'Y', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ElementalCharacter_enum, (0x00000142<<8)+2, _offsetof(CElemental, m_EecChar), "Character", 'C', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ElementalState_enum, (0x00000142<<8)+3, _offsetof(CElemental, m_EesStartState), "State", 'S', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000142<<8)+4, _offsetof(CElemental, m_bSpawnWhenHarmed), "Damage spawn", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000142<<8)+5, _offsetof(CElemental, m_bSpawnOnBlowUp), "Blowup spawn", 'B', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ElementalState_enum, (0x00000142<<8)+6, _offsetof(CElemental, m_EesCurrentState), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000142<<8)+7, _offsetof(CElemental, m_bSpawned), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000142<<8)+8, _offsetof(CElemental, m_bMovable), "Movable", 'V', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x00000142<<8)+9, _offsetof(CElemental, m_fLookRange), "Look range", 'O', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000142<<8)+10, _offsetof(CElemental, m_iFireCount), "Fire count", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000142<<8)+11, _offsetof(CElemental, m_fWaitTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000142<<8)+12, _offsetof(CElemental, m_iCounter), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000142<<8)+13, _offsetof(CElemental, m_fDensity), "Density", 'D', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000142<<8)+20, _offsetof(CElemental, m_penPosition1), "Position 1", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000142<<8)+21, _offsetof(CElemental, m_penPosition2), "Position 2", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000142<<8)+22, _offsetof(CElemental, m_penPosition3), "Position 3", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000142<<8)+23, _offsetof(CElemental, m_penPosition4), "Position 4", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000142<<8)+24, _offsetof(CElemental, m_penPosition5), "Position 5", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000142<<8)+25, _offsetof(CElemental, m_penPosition6), "Position 6", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000142<<8)+30, _offsetof(CElemental, m_soBackground), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000142<<8)+31, _offsetof(CElemental, m_ctSpawned), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000142<<8)+32, _offsetof(CElemental, m_fSpawnDamage), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000142<<8)+33, _offsetof(CElemental, m_bSpawnEnabled), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000142<<8)+34, _offsetof(CElemental, m_soFireL), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000142<<8)+35, _offsetof(CElemental, m_soFireR), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000142<<8)+36, _offsetof(CElemental, m_bCountAsKill), "", 0, 0, 0),
};
#define CElemental_propertiesct ARRAYCOUNT(CElemental_properties)

CEntityComponent CElemental_components[] = {
#define CLASS_BASE ((0x00000142<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_TWISTER ((0x00000142<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_TWISTER, "EFNM" "Classes\\Twister.ecl"),
#define CLASS_WATER ((0x00000142<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_WATER, "EFNM" "Classes\\Water.ecl"),
#define CLASS_PROJECTILE ((0x00000142<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BLOOD_SPRAY ((0x00000142<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000142<<8)+5)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_LAVA ((0x00000142<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_LAVA, "EFNM" "Models\\Enemies\\ElementalLava\\ElementalLava.mdl"),
#define MODEL_LAVA_BODY_FLARE ((0x00000142<<8)+31)
 CEntityComponent(ECT_MODEL, MODEL_LAVA_BODY_FLARE, "EFNM" "Models\\Enemies\\ElementalLava\\BodyFlare.mdl"),
#define MODEL_LAVA_HAND_FLARE ((0x00000142<<8)+32)
 CEntityComponent(ECT_MODEL, MODEL_LAVA_HAND_FLARE, "EFNM" "Models\\Enemies\\ElementalLava\\HandFlare.mdl"),
#define TEXTURE_LAVA ((0x00000142<<8)+33)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LAVA, "EFNM" "Models\\Enemies\\ElementalLava\\Lava04Fx.tex"),
#define TEXTURE_LAVA_DETAIL ((0x00000142<<8)+34)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LAVA_DETAIL, "EFNM" "Models\\Enemies\\ElementalLava\\Detail.tex"),
#define TEXTURE_LAVA_FLARE ((0x00000142<<8)+35)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LAVA_FLARE, "EFNM" "Models\\Enemies\\ElementalLava\\Flare.tex"),
#define SOUND_LAVA_IDLE ((0x00000142<<8)+250)
 CEntityComponent(ECT_SOUND, SOUND_LAVA_IDLE, "EFNM" "Models\\Enemies\\ElementalLava\\Sounds\\Idle.wav"),
#define SOUND_LAVA_WOUND ((0x00000142<<8)+252)
 CEntityComponent(ECT_SOUND, SOUND_LAVA_WOUND, "EFNM" "Models\\Enemies\\ElementalLava\\Sounds\\Wound.wav"),
#define SOUND_LAVA_FIRE ((0x00000142<<8)+253)
 CEntityComponent(ECT_SOUND, SOUND_LAVA_FIRE, "EFNM" "Models\\Enemies\\ElementalLava\\Sounds\\Fire.wav"),
#define SOUND_LAVA_KICK ((0x00000142<<8)+254)
 CEntityComponent(ECT_SOUND, SOUND_LAVA_KICK, "EFNM" "Models\\Enemies\\ElementalLava\\Sounds\\Kick.wav"),
#define SOUND_LAVA_DEATH ((0x00000142<<8)+255)
 CEntityComponent(ECT_SOUND, SOUND_LAVA_DEATH, "EFNM" "Models\\Enemies\\ElementalLava\\Sounds\\Death.wav"),
#define SOUND_LAVA_LAVABURN ((0x00000142<<8)+220)
 CEntityComponent(ECT_SOUND, SOUND_LAVA_LAVABURN, "EFNM" "Models\\Enemies\\ElementalLava\\Sounds\\LavaBurn.wav"),
#define SOUND_LAVA_ANGER ((0x00000142<<8)+221)
 CEntityComponent(ECT_SOUND, SOUND_LAVA_ANGER, "EFNM" "Models\\Enemies\\ElementalLava\\Sounds\\Anger.wav"),
#define SOUND_LAVA_GROW ((0x00000142<<8)+222)
 CEntityComponent(ECT_SOUND, SOUND_LAVA_GROW, "EFNM" "ModelsMP\\Enemies\\ElementalLava\\Sounds\\Grow.wav"),
};
#define CElemental_componentsct ARRAYCOUNT(CElemental_components)

CEventHandlerEntry CElemental_handlers[] = {
 {0x01420000, -1, CEntity::pEventHandler(&CElemental::
#line 955 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
FallOnFloor),DEBUGSTRING("CElemental::FallOnFloor")},
 {0x01420001, -1, CEntity::pEventHandler(&CElemental::H0x01420001_FallOnFloor_01), DEBUGSTRING("CElemental::H0x01420001_FallOnFloor_01")},
 {0x01420002, -1, CEntity::pEventHandler(&CElemental::H0x01420002_FallOnFloor_02), DEBUGSTRING("CElemental::H0x01420002_FallOnFloor_02")},
 {0x01420003, -1, CEntity::pEventHandler(&CElemental::
#line 1021 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
LavamanFire),DEBUGSTRING("CElemental::LavamanFire")},
 {0x01420004, -1, CEntity::pEventHandler(&CElemental::H0x01420004_LavamanFire_01), DEBUGSTRING("CElemental::H0x01420004_LavamanFire_01")},
 {0x01420005, -1, CEntity::pEventHandler(&CElemental::H0x01420005_LavamanFire_02), DEBUGSTRING("CElemental::H0x01420005_LavamanFire_02")},
 {0x01420006, -1, CEntity::pEventHandler(&CElemental::H0x01420006_LavamanFire_03), DEBUGSTRING("CElemental::H0x01420006_LavamanFire_03")},
 {0x01420007, -1, CEntity::pEventHandler(&CElemental::H0x01420007_LavamanFire_04), DEBUGSTRING("CElemental::H0x01420007_LavamanFire_04")},
 {0x01420008, -1, CEntity::pEventHandler(&CElemental::H0x01420008_LavamanFire_05), DEBUGSTRING("CElemental::H0x01420008_LavamanFire_05")},
 {0x01420009, -1, CEntity::pEventHandler(&CElemental::H0x01420009_LavamanFire_06), DEBUGSTRING("CElemental::H0x01420009_LavamanFire_06")},
 {0x0142000a, -1, CEntity::pEventHandler(&CElemental::H0x0142000a_LavamanFire_07), DEBUGSTRING("CElemental::H0x0142000a_LavamanFire_07")},
 {0x0142000b, -1, CEntity::pEventHandler(&CElemental::H0x0142000b_LavamanFire_08), DEBUGSTRING("CElemental::H0x0142000b_LavamanFire_08")},
 {0x0142000c, -1, CEntity::pEventHandler(&CElemental::H0x0142000c_LavamanFire_09), DEBUGSTRING("CElemental::H0x0142000c_LavamanFire_09")},
 {0x0142000d, -1, CEntity::pEventHandler(&CElemental::H0x0142000d_LavamanFire_10), DEBUGSTRING("CElemental::H0x0142000d_LavamanFire_10")},
 {0x0142000e, -1, CEntity::pEventHandler(&CElemental::H0x0142000e_LavamanFire_11), DEBUGSTRING("CElemental::H0x0142000e_LavamanFire_11")},
 {0x0142000f, -1, CEntity::pEventHandler(&CElemental::H0x0142000f_LavamanFire_12), DEBUGSTRING("CElemental::H0x0142000f_LavamanFire_12")},
 {0x01420010, -1, CEntity::pEventHandler(&CElemental::H0x01420010_LavamanFire_13), DEBUGSTRING("CElemental::H0x01420010_LavamanFire_13")},
 {0x01420011, -1, CEntity::pEventHandler(&CElemental::H0x01420011_LavamanFire_14), DEBUGSTRING("CElemental::H0x01420011_LavamanFire_14")},
 {0x01420012, -1, CEntity::pEventHandler(&CElemental::H0x01420012_LavamanFire_15), DEBUGSTRING("CElemental::H0x01420012_LavamanFire_15")},
 {0x01420013, -1, CEntity::pEventHandler(&CElemental::H0x01420013_LavamanFire_16), DEBUGSTRING("CElemental::H0x01420013_LavamanFire_16")},
 {0x01420014, -1, CEntity::pEventHandler(&CElemental::H0x01420014_LavamanFire_17), DEBUGSTRING("CElemental::H0x01420014_LavamanFire_17")},
 {0x01420015, -1, CEntity::pEventHandler(&CElemental::H0x01420015_LavamanFire_18), DEBUGSTRING("CElemental::H0x01420015_LavamanFire_18")},
 {0x01420016, -1, CEntity::pEventHandler(&CElemental::H0x01420016_LavamanFire_19), DEBUGSTRING("CElemental::H0x01420016_LavamanFire_19")},
 {0x01420017, -1, CEntity::pEventHandler(&CElemental::
#line 1101 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
LavamanStones),DEBUGSTRING("CElemental::LavamanStones")},
 {0x01420018, -1, CEntity::pEventHandler(&CElemental::H0x01420018_LavamanStones_01), DEBUGSTRING("CElemental::H0x01420018_LavamanStones_01")},
 {0x01420019, -1, CEntity::pEventHandler(&CElemental::H0x01420019_LavamanStones_02), DEBUGSTRING("CElemental::H0x01420019_LavamanStones_02")},
 {0x0142001a, -1, CEntity::pEventHandler(&CElemental::H0x0142001a_LavamanStones_03), DEBUGSTRING("CElemental::H0x0142001a_LavamanStones_03")},
 {0x0142001b, -1, CEntity::pEventHandler(&CElemental::H0x0142001b_LavamanStones_04), DEBUGSTRING("CElemental::H0x0142001b_LavamanStones_04")},
 {0x0142001c, -1, CEntity::pEventHandler(&CElemental::H0x0142001c_LavamanStones_05), DEBUGSTRING("CElemental::H0x0142001c_LavamanStones_05")},
 {0x0142001d, -1, CEntity::pEventHandler(&CElemental::H0x0142001d_LavamanStones_06), DEBUGSTRING("CElemental::H0x0142001d_LavamanStones_06")},
 {0x0142001e, -1, CEntity::pEventHandler(&CElemental::
#line 1121 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
LavamanHit),DEBUGSTRING("CElemental::LavamanHit")},
 {0x0142001f, -1, CEntity::pEventHandler(&CElemental::H0x0142001f_LavamanHit_01), DEBUGSTRING("CElemental::H0x0142001f_LavamanHit_01")},
 {0x01420020, -1, CEntity::pEventHandler(&CElemental::H0x01420020_LavamanHit_02), DEBUGSTRING("CElemental::H0x01420020_LavamanHit_02")},
 {0x01420021, -1, CEntity::pEventHandler(&CElemental::H0x01420021_LavamanHit_03), DEBUGSTRING("CElemental::H0x01420021_LavamanHit_03")},
 {0x01420022, -1, CEntity::pEventHandler(&CElemental::H0x01420022_LavamanHit_04), DEBUGSTRING("CElemental::H0x01420022_LavamanHit_04")},
 {0x01420023, STATE_CEnemyBase_BeWounded, CEntity::pEventHandler(&CElemental::
#line 1224 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
BeWounded),DEBUGSTRING("CElemental::BeWounded")},
 {0x01420024, -1, CEntity::pEventHandler(&CElemental::
#line 1237 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
BoxToNormal),DEBUGSTRING("CElemental::BoxToNormal")},
 {0x01420025, -1, CEntity::pEventHandler(&CElemental::H0x01420025_BoxToNormal_01), DEBUGSTRING("CElemental::H0x01420025_BoxToNormal_01")},
 {0x01420026, -1, CEntity::pEventHandler(&CElemental::H0x01420026_BoxToNormal_02), DEBUGSTRING("CElemental::H0x01420026_BoxToNormal_02")},
 {0x01420027, -1, CEntity::pEventHandler(&CElemental::
#line 1260 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
PlaneToNormal),DEBUGSTRING("CElemental::PlaneToNormal")},
 {0x01420028, -1, CEntity::pEventHandler(&CElemental::H0x01420028_PlaneToNormal_01), DEBUGSTRING("CElemental::H0x01420028_PlaneToNormal_01")},
 {0x01420029, -1, CEntity::pEventHandler(&CElemental::H0x01420029_PlaneToNormal_02), DEBUGSTRING("CElemental::H0x01420029_PlaneToNormal_02")},
 {0x0142002a, STATE_CEnemyBase_InitializeAttack, CEntity::pEventHandler(&CElemental::
#line 1282 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
InitializeAttack),DEBUGSTRING("CElemental::InitializeAttack")},
 {0x0142002b, -1, CEntity::pEventHandler(&CElemental::H0x0142002b_InitializeAttack_01), DEBUGSTRING("CElemental::H0x0142002b_InitializeAttack_01")},
 {0x0142002c, -1, CEntity::pEventHandler(&CElemental::H0x0142002c_InitializeAttack_02), DEBUGSTRING("CElemental::H0x0142002c_InitializeAttack_02")},
 {0x0142002d, -1, CEntity::pEventHandler(&CElemental::H0x0142002d_InitializeAttack_03), DEBUGSTRING("CElemental::H0x0142002d_InitializeAttack_03")},
 {0x0142002e, -1, CEntity::pEventHandler(&CElemental::H0x0142002e_InitializeAttack_04), DEBUGSTRING("CElemental::H0x0142002e_InitializeAttack_04")},
 {0x0142002f, -1, CEntity::pEventHandler(&CElemental::H0x0142002f_InitializeAttack_05), DEBUGSTRING("CElemental::H0x0142002f_InitializeAttack_05")},
 {0x01420030, -1, CEntity::pEventHandler(&CElemental::H0x01420030_InitializeAttack_06), DEBUGSTRING("CElemental::H0x01420030_InitializeAttack_06")},
 {0x01420031, -1, CEntity::pEventHandler(&CElemental::H0x01420031_InitializeAttack_07), DEBUGSTRING("CElemental::H0x01420031_InitializeAttack_07")},
 {0x01420032, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CElemental::
#line 1296 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
Fire),DEBUGSTRING("CElemental::Fire")},
 {0x01420033, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CElemental::
#line 1308 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
Hit),DEBUGSTRING("CElemental::Hit")},
 {0x01420034, STATE_CEnemyBase_Death, CEntity::pEventHandler(&CElemental::
#line 1323 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
Death),DEBUGSTRING("CElemental::Death")},
 {0x01420035, -1, CEntity::pEventHandler(&CElemental::H0x01420035_Death_01), DEBUGSTRING("CElemental::H0x01420035_Death_01")},
 {0x01420036, -1, CEntity::pEventHandler(&CElemental::H0x01420036_Death_02), DEBUGSTRING("CElemental::H0x01420036_Death_02")},
 {0x01420037, -1, CEntity::pEventHandler(&CElemental::H0x01420037_Death_03), DEBUGSTRING("CElemental::H0x01420037_Death_03")},
 {0x01420038, -1, CEntity::pEventHandler(&CElemental::H0x01420038_Death_04), DEBUGSTRING("CElemental::H0x01420038_Death_04")},
 {0x01420039, -1, CEntity::pEventHandler(&CElemental::H0x01420039_Death_05), DEBUGSTRING("CElemental::H0x01420039_Death_05")},
 {0x0142003a, -1, CEntity::pEventHandler(&CElemental::
#line 1341 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
BossAppear),DEBUGSTRING("CElemental::BossAppear")},
 {0x0142003b, -1, CEntity::pEventHandler(&CElemental::H0x0142003b_BossAppear_01), DEBUGSTRING("CElemental::H0x0142003b_BossAppear_01")},
 {0x0142003c, -1, CEntity::pEventHandler(&CElemental::H0x0142003c_BossAppear_02), DEBUGSTRING("CElemental::H0x0142003c_BossAppear_02")},
 {0x0142003d, -1, CEntity::pEventHandler(&CElemental::H0x0142003d_BossAppear_03), DEBUGSTRING("CElemental::H0x0142003d_BossAppear_03")},
 {0x0142003e, -1, CEntity::pEventHandler(&CElemental::H0x0142003e_BossAppear_04), DEBUGSTRING("CElemental::H0x0142003e_BossAppear_04")},
 {0x0142003f, -1, CEntity::pEventHandler(&CElemental::H0x0142003f_BossAppear_05), DEBUGSTRING("CElemental::H0x0142003f_BossAppear_05")},
 {0x01420040, -1, CEntity::pEventHandler(&CElemental::H0x01420040_BossAppear_06), DEBUGSTRING("CElemental::H0x01420040_BossAppear_06")},
 {0x01420041, -1, CEntity::pEventHandler(&CElemental::H0x01420041_BossAppear_07), DEBUGSTRING("CElemental::H0x01420041_BossAppear_07")},
 {0x01420042, -1, CEntity::pEventHandler(&CElemental::H0x01420042_BossAppear_08), DEBUGSTRING("CElemental::H0x01420042_BossAppear_08")},
 {0x01420043, -1, CEntity::pEventHandler(&CElemental::H0x01420043_BossAppear_09), DEBUGSTRING("CElemental::H0x01420043_BossAppear_09")},
 {0x01420044, -1, CEntity::pEventHandler(&CElemental::H0x01420044_BossAppear_10), DEBUGSTRING("CElemental::H0x01420044_BossAppear_10")},
 {0x01420045, -1, CEntity::pEventHandler(&CElemental::H0x01420045_BossAppear_11), DEBUGSTRING("CElemental::H0x01420045_BossAppear_11")},
 {0x01420046, -1, CEntity::pEventHandler(&CElemental::H0x01420046_BossAppear_12), DEBUGSTRING("CElemental::H0x01420046_BossAppear_12")},
 {0x01420047, STATE_CEnemyBase_PreMainLoop, CEntity::pEventHandler(&CElemental::
#line 1366 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
PreMainLoop),DEBUGSTRING("CElemental::PreMainLoop")},
 {0x01420048, -1, CEntity::pEventHandler(&CElemental::H0x01420048_PreMainLoop_01), DEBUGSTRING("CElemental::H0x01420048_PreMainLoop_01")},
 {0x01420049, -1, CEntity::pEventHandler(&CElemental::H0x01420049_PreMainLoop_02), DEBUGSTRING("CElemental::H0x01420049_PreMainLoop_02")},
 {0x0142004a, -1, CEntity::pEventHandler(&CElemental::H0x0142004a_PreMainLoop_03), DEBUGSTRING("CElemental::H0x0142004a_PreMainLoop_03")},
 {0x0142004b, -1, CEntity::pEventHandler(&CElemental::H0x0142004b_PreMainLoop_04), DEBUGSTRING("CElemental::H0x0142004b_PreMainLoop_04")},
 {0x0142004c, -1, CEntity::pEventHandler(&CElemental::H0x0142004c_PreMainLoop_05), DEBUGSTRING("CElemental::H0x0142004c_PreMainLoop_05")},
 {0x0142004d, -1, CEntity::pEventHandler(&CElemental::H0x0142004d_PreMainLoop_06), DEBUGSTRING("CElemental::H0x0142004d_PreMainLoop_06")},
 {1, -1, CEntity::pEventHandler(&CElemental::
#line 1391 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/Elemental.es"
Main),DEBUGSTRING("CElemental::Main")},
};
#define CElemental_handlersct ARRAYCOUNT(CElemental_handlers)

CEntity *CElemental_New(void) { return new CElemental; };
void CElemental_OnInitClass(void) {};
void CElemental_OnEndClass(void) {};
void CElemental_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CElemental_OnWorldEnd(CWorld *pwo) {};
void CElemental_OnWorldInit(CWorld *pwo) {};
void CElemental_OnWorldTick(CWorld *pwo) {};
void CElemental_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CElemental, CEnemyBase, "Elemental", "Thumbnails\\Elemental.tbn", 0x00000142);
DECLARE_CTFILENAME(_fnmCElemental_tbn, "Thumbnails\\Elemental.tbn");
