/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CAnimationChanger

CEntityProperty CAnimationChanger_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000da<<8)+1, _offsetof(CAnimationChanger, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000da<<8)+2, _offsetof(CAnimationChanger, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000da<<8)+3, _offsetof(CAnimationChanger, m_penTarget), "Target", 'T', C_GREEN  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x000000da<<8)+4, _offsetof(CAnimationChanger, m_iModelAnim), "Model Animation", 'M', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000da<<8)+5, _offsetof(CAnimationChanger, m_bModelLoop), "Model Looping", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x000000da<<8)+6, _offsetof(CAnimationChanger, m_iTextureAnim), "Texture Animation", 'X', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000da<<8)+7, _offsetof(CAnimationChanger, m_bTextureLoop), "Texture Looping", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x000000da<<8)+8, _offsetof(CAnimationChanger, m_iLightAnim), "Diffuse Light Animation", 'L', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000da<<8)+9, _offsetof(CAnimationChanger, m_bLightLoop), "Diffuse Light Looping", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x000000da<<8)+10, _offsetof(CAnimationChanger, m_iAmbientLightAnim), "Ambient Light Animation", 'B', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000da<<8)+11, _offsetof(CAnimationChanger, m_bAmbientLightLoop), "Ambient Light Looping", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x000000da<<8)+12, _offsetof(CAnimationChanger, m_colAmbient), "Ambient Light Color", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x000000da<<8)+13, _offsetof(CAnimationChanger, m_colDiffuse), "Diffuse Light Color", 'C', 0x7F0000FFUL, 0),
};
#define CAnimationChanger_propertiesct ARRAYCOUNT(CAnimationChanger_properties)

CEntityComponent CAnimationChanger_components[] = {
#define MODEL_CHANGER ((0x000000da<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_CHANGER, "EFNM" "Models\\Editor\\AnimationChanger.mdl"),
#define TEXTURE_CHANGER ((0x000000da<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CHANGER, "EFNM" "Models\\Editor\\AnimationChanger.tex"),
};
#define CAnimationChanger_componentsct ARRAYCOUNT(CAnimationChanger_components)

CEventHandlerEntry CAnimationChanger_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CAnimationChanger::
#line 118 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AnimationChanger.es"
Main),DEBUGSTRING("CAnimationChanger::Main")},
 {0x00da0001, -1, CEntity::pEventHandler(&CAnimationChanger::H0x00da0001_Main_01), DEBUGSTRING("CAnimationChanger::H0x00da0001_Main_01")},
 {0x00da0002, -1, CEntity::pEventHandler(&CAnimationChanger::H0x00da0002_Main_02), DEBUGSTRING("CAnimationChanger::H0x00da0002_Main_02")},
};
#define CAnimationChanger_handlersct ARRAYCOUNT(CAnimationChanger_handlers)

CEntity *CAnimationChanger_New(void) { return new CAnimationChanger; };
void CAnimationChanger_OnInitClass(void) {};
void CAnimationChanger_OnEndClass(void) {};
void CAnimationChanger_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAnimationChanger_OnWorldEnd(CWorld *pwo) {};
void CAnimationChanger_OnWorldInit(CWorld *pwo) {};
void CAnimationChanger_OnWorldTick(CWorld *pwo) {};
void CAnimationChanger_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAnimationChanger, CRationalEntity, "AnimationChanger", "Thumbnails\\AnimationChanger.tbn", 0x000000da);
DECLARE_CTFILENAME(_fnmCAnimationChanger_tbn, "Thumbnails\\AnimationChanger.tbn");
