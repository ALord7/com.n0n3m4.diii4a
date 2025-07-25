/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

EP_ENUMBEG(ViewType)
  EP_ENUMVALUE(VT_PLAYERDEATH, ""),
  EP_ENUMVALUE(VT_PLAYERREBIRTH, ""),
  EP_ENUMVALUE(VT_CAMERA, ""),
  EP_ENUMVALUE(VT_3RDPERSONVIEW, ""),
EP_ENUMEND(ViewType);

#define ENTITYCLASS CPlayerView

CEntityProperty CPlayerView_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000193<<8)+1, _offsetof(CPlayerView, m_penOwner), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000193<<8)+2, _offsetof(CPlayerView, m_iViewType), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000193<<8)+3, _offsetof(CPlayerView, m_fDistance), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000193<<8)+4, _offsetof(CPlayerView, m_vZLast), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000193<<8)+5, _offsetof(CPlayerView, m_vTargetLast), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000193<<8)+6, _offsetof(CPlayerView, m_bFixed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000193<<8)+255, _offsetof(CPlayerView, m_penPrediction), "", 0, 0, 0),
};
#define CPlayerView_propertiesct ARRAYCOUNT(CPlayerView_properties)

CEntityComponent CPlayerView_components[] = {
#define MODEL_MARKER ((0x00000193<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x00000193<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CPlayerView_componentsct ARRAYCOUNT(CPlayerView_components)

CEventHandlerEntry CPlayerView_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CPlayerView::
#line 262 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PlayerView.es"
Main),DEBUGSTRING("CPlayerView::Main")},
 {0x01930001, -1, CEntity::pEventHandler(&CPlayerView::H0x01930001_Main_01), DEBUGSTRING("CPlayerView::H0x01930001_Main_01")},
 {0x01930002, -1, CEntity::pEventHandler(&CPlayerView::H0x01930002_Main_02), DEBUGSTRING("CPlayerView::H0x01930002_Main_02")},
};
#define CPlayerView_handlersct ARRAYCOUNT(CPlayerView_handlers)

CEntity *CPlayerView_New(void) { return new CPlayerView; };
void CPlayerView_OnInitClass(void) {};
void CPlayerView_OnEndClass(void) {};
void CPlayerView_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerView_OnWorldEnd(CWorld *pwo) {};
void CPlayerView_OnWorldInit(CWorld *pwo) {};
void CPlayerView_OnWorldTick(CWorld *pwo) {};
void CPlayerView_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerView, CMovableEntity, "Player View", "", 0x00000193);
DECLARE_CTFILENAME(_fnmCPlayerView_tbn, "");
