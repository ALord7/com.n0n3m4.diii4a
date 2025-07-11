/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 19 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"

#include "EntitiesMP/StdH/StdH.h"
#include "ModelsMP/Enemies/AirElemental/ShockWaveBase.h"
#include "ModelsMP/Enemies/AirElemental/ShockWave.h"

#include <EntitiesMP/AirShockwave.h>
#include <EntitiesMP/AirShockwave_tables.h>
CEntityEvent *EAirShockwave::MakeCopy(void) { CEntityEvent *peeCopy = new EAirShockwave(*this); return peeCopy;}
EAirShockwave::EAirShockwave() : CEntityEvent(EVENTCODE_EAirShockwave) {;
 ClearToDefault(penLauncher);
 ClearToDefault(fHeight);
 ClearToDefault(fEndWidth);
 ClearToDefault(fDuration);
};
#line 35 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"

// shockwave
#define ECF_SHOCKAWAVE ( \
  ((ECBI_BRUSH|ECBI_MODEL|ECBI_CORPSE|ECBI_ITEM|ECBI_PROJECTILE_MAGIC|ECBI_PROJECTILE_SOLID)<<ECB_TEST) |\
  ((ECBI_BRUSH|ECBI_MODEL|ECBI_CORPSE|ECBI_ITEM|ECBI_PROJECTILE_MAGIC|ECBI_PROJECTILE_SOLID)<<ECB_PASS) |\
  ((ECBI_MODEL)<<ECB_IS))
#define EPF_SHOCKAWAVE ( \
  EPF_ONBLOCK_STOP|EPF_ORIENTEDBYGRAVITY|EPF_ABSOLUTETRANSLATE)

#define SHOCKWAVE_HEIGHT  5.0f
#define SHOCKWAVE_WIDTH   0.1f
  

void CAirShockwave::SetDefaultProperties(void) {
  m_penLauncher = NULL;
  m_fHeight = 0.0f;
  m_fEndWidth = 0.0f;
  m_tmBegin = 0.0f;
  m_tmEnd = 0.0f;
  m_fDuration = 0.0f;
  m_bGrowing = FALSE ;
  m_tmLastGrow = 0.0f;
  m_fFadeStartTime = 0.0f;
  m_fFadeStartPercent = 0.6f;
  m_fStretchY = 0.0f;
  m_fBeginStretchXZ = 0.0f;
  m_fEndStretchXZ = 0.0f;
  m_boxMaxSize = FLOATaabbox3D(FLOAT3D (0 , 0 , 0) , FLOAT3D (1 , 1 , 1));
  m_bFadeOut = FALSE ;
  CMovableModelEntity::SetDefaultProperties();
}
  
#line 84 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
CModelObject * CAirShockwave::ShockwaveModel(void) {
#line 85 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
CAttachmentModelObject  & amo0  = * GetModelObject  () -> GetAttachmentModel  (SHOCKWAVEBASE_ATTACHMENT_SHOCKWAVE );
#line 86 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
return & (amo0  . amo_moModelObject );
#line 87 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
  
#line 90 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
BOOL CAirShockwave::AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient) {
#line 92 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
if(m_bGrowing ){
#line 93 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT3D vSize ;
#line 94 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT fLifeTime  = _pTimer  -> GetLerpedCurrentTick  () - m_tmBegin ;
#line 95 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
vSize  (1) = (fLifeTime  / m_fDuration ) * (m_fEndStretchXZ  - m_fBeginStretchXZ ) + m_fBeginStretchXZ ;
#line 96 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
vSize  (2) = m_fStretchY ;
#line 97 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
vSize  (3) = vSize  (1);
#line 99 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
ShockwaveModel  () -> StretchModel  (vSize );
#line 102 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
if((fLifeTime  / m_fDuration ) > m_fFadeStartPercent  && ! m_bFadeOut ){
#line 103 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_bFadeOut  = TRUE ;
#line 104 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_fFadeStartTime  = _pTimer  -> GetLerpedCurrentTick  ();
#line 105 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
#line 108 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_tmLastGrow  = _pTimer  -> GetLerpedCurrentTick  ();
#line 109 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
#line 112 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
if(m_bFadeOut ){
#line 113 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT fTimeRemain  = m_tmEnd  - _pTimer  -> GetLerpedCurrentTick  ();
#line 114 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT fFadeTime  = (1 - m_fFadeStartPercent ) * m_fDuration ;
#line 115 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
if(fTimeRemain  < 0.0f){fTimeRemain  = 0.0f;}
#line 116 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
COLOR colAlpha  = ShockwaveModel  () -> mo_colBlendColor ;
#line 117 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
colAlpha  = (colAlpha  & 0xffffff00) + (COLOR (fTimeRemain  / fFadeTime  * 0xff) & 0xff);
#line 118 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
ShockwaveModel  () -> mo_colBlendColor  = colAlpha ;
#line 119 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
#line 120 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
return CMovableModelEntity  :: AdjustShadingParameters  (vLightDirection  , colLight  , colAmbient );
#line 121 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
  
#line 125 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
void CAirShockwave::LaunchEntity(CEntity * pen) {
#line 127 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
if(IsOfClass  (pen  , "AirElemental") || IsOfClass  (pen  , "Twister") 
#line 128 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
|| IsDerivedFromClass  (pen  , "Item") || IsOfClass  (pen  , "AirShockwave")){
#line 129 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
return ;
#line 130 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
#line 131 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
if(pen  -> GetPhysicsFlags  () & EPF_MOVABLE ){
#line 132 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT3D vSpeed ;
#line 133 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
vSpeed  = pen  -> GetPlacement  () . pl_PositionVector  - GetPlacement  () . pl_PositionVector ;
#line 134 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
if(vSpeed  (2) < vSpeed  . Length  () * 0.5f){vSpeed  (2) = vSpeed  . Length  () * 0.5f;}
#line 135 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
vSpeed  . Normalize  ();
#line 136 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
vSpeed  = vSpeed  * 50.0f;
#line 137 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
((CMovableEntity  &) * pen ) . GiveImpulseTranslationAbsolute  (vSpeed );
#line 138 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
#line 139 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
  
#line 141 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
void CAirShockwave::TestForCollisionAndLaunchEntity() {
#line 143 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
static CStaticStackArray  < CEntity  * > apenNearEntities ;
#line 144 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT fLifeTime  = _pTimer  -> CurrentTick  () - m_tmBegin ;
#line 145 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT fCurrentRadius  = Lerp  (SHOCKWAVE_WIDTH  , m_fEndWidth  , fLifeTime  / m_fDuration ) / 2.0f;
#line 147 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOATaabbox3D m_boxCurrent  = m_boxMaxSize ;
#line 148 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_boxCurrent  += GetPlacement  () . pl_PositionVector ;
#line 151 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT fBeltWidth  = m_fEndWidth  * _pTimer  -> TickQuantum  * 2.0f / m_fDuration ;
#line 153 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
GetWorld  () -> FindEntitiesNearBox  (m_boxCurrent  , apenNearEntities );
#line 154 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
for(INDEX i  = 0;i  < apenNearEntities  . Count  ();i  ++)
#line 155 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
{
#line 156 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT fDistance  = DistanceTo  (this  , apenNearEntities  [ i  ]);
#line 157 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOATaabbox3D m_boxEntity ;
#line 158 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
apenNearEntities  [ i  ] -> GetBoundingBox  (m_boxEntity );
#line 159 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
if(fDistance  < (fCurrentRadius  + fBeltWidth  / 2.0f) && fDistance  > (fCurrentRadius  - fBeltWidth  / 2.0f) && 
#line 160 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_boxEntity  . HasContactWith  (m_boxCurrent )){
#line 161 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
LaunchEntity  (apenNearEntities  [ i  ]);
#line 162 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
#line 163 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
#line 165 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
CMovableModelEntity  :: PreMoving  ();
#line 166 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}
BOOL CAirShockwave::
#line 171 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CAirShockwave_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EAirShockwave, "CAirShockwave::Main expects 'EAirShockwave' as input!");  const EAirShockwave &eas = (const EAirShockwave &)__eeInput;
#line 173 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
ASSERT  (eas  . penLauncher  != NULL );
#line 174 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
ASSERT  (eas  . fHeight  > 0.0f);
#line 175 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
ASSERT  (eas  . fEndWidth  > 0.1f);
#line 176 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
ASSERT  (eas  . fDuration  > 0.0f);
#line 177 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_penLauncher  = eas  . penLauncher ;
#line 178 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_fHeight  = eas  . fHeight ;
#line 179 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_fEndWidth  = eas  . fEndWidth ;
#line 180 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_fDuration  = eas  . fDuration ;
#line 183 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_fStretchY  = m_fHeight  / SHOCKWAVE_HEIGHT ;
#line 184 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_fBeginStretchXZ  = 1.0f;
#line 185 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_fEndStretchXZ  = m_fEndWidth  / SHOCKWAVE_WIDTH ;
#line 187 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT3D v1  = FLOAT3D (- m_fEndWidth  / 2.0f , 0.0f , - m_fEndWidth  / 2.0f);
#line 188 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
FLOAT3D v2  = FLOAT3D (+ m_fEndWidth  / 2.0f , m_fHeight  , + m_fEndWidth  / 2.0f);
#line 189 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_boxMaxSize  = FLOATaabbox3D (v1  , v2 );
#line 192 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
InitAsModel  ();
#line 193 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
SetPhysicsFlags  (EPF_SHOCKAWAVE );
#line 194 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
SetCollisionFlags  (ECF_SHOCKAWAVE );
#line 195 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
SetFlags  (GetFlags  () | ENF_SEETHROUGH );
#line 198 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
SetModel  (MODEL_INVISIBLE );
#line 199 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
AddAttachmentToModel  (this  , * GetModelObject  () , SHOCKWAVEBASE_ATTACHMENT_SHOCKWAVE  , MODEL_SHOCKWAVE  , TEXTURE_SHOCKWAVE  , 0 , 0 , 0);
#line 200 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
GetModelObject  () -> StretchModel  (FLOAT3D (1.0f , 1.0f , 1.0f));
#line 201 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
ModelChangeNotify  ();
#line 202 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
ShockwaveModel  () -> StretchModel  (FLOAT3D (m_fBeginStretchXZ  , m_fStretchY  , m_fBeginStretchXZ ));
#line 204 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
SetTimerAfter(_pTimer  -> TickQuantum );
Jump(STATE_CURRENT, 0x015d0001, FALSE, EBegin());return TRUE;}BOOL CAirShockwave::H0x015d0001_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x015d0001
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x015d0002, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CAirShockwave::H0x015d0002_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x015d0002
;
#line 206 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_tmBegin  = _pTimer  -> CurrentTick  ();
#line 207 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_tmEnd  = m_tmBegin  + m_fDuration ;
#line 208 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_tmLastGrow  = _pTimer  -> CurrentTick  ();
#line 209 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
m_bGrowing  = TRUE ;
#line 211 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
Jump(STATE_CURRENT,0x015d0005, FALSE, EInternal());return TRUE;}BOOL CAirShockwave::H0x015d0005_Main_05(const CEntityEvent &__eeInput)
#line 212 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
{
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x015d0005
if(!(_pTimer  -> CurrentTick  () < m_tmEnd )){ Jump(STATE_CURRENT,0x015d0006, FALSE, EInternal());return TRUE;}
#line 213 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
SetTimerAfter(_pTimer  -> TickQuantum );
Jump(STATE_CURRENT, 0x015d0003, FALSE, EBegin());return TRUE;}BOOL CAirShockwave::H0x015d0003_Main_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x015d0003
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x015d0004, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CAirShockwave::H0x015d0004_Main_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x015d0004
;
#line 214 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
TestForCollisionAndLaunchEntity  ();Jump(STATE_CURRENT,0x015d0005, FALSE, EInternal());return TRUE;
#line 215 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
}BOOL CAirShockwave::H0x015d0006_Main_06(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x015d0006

#line 217 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
Destroy  ();
#line 218 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
Return(STATE_CURRENT,EVoid());
#line 218 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AirShockwave.es"
return TRUE; ASSERT(FALSE); return TRUE;};