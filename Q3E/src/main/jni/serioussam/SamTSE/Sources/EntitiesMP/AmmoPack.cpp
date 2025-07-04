/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 17 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"

#include "EntitiesMP/StdH/StdH.h"
#include "Models/Items/ItemHolder/ItemHolder.h"

#include <EntitiesMP/AmmoPack.h>
#include <EntitiesMP/AmmoPack_tables.h>
CEntityEvent *EAmmoPackItem::MakeCopy(void) { CEntityEvent *peeCopy = new EAmmoPackItem(*this); return peeCopy;}
EAmmoPackItem::EAmmoPackItem() : CEntityEvent(EVENTCODE_EAmmoPackItem) {;
 ClearToDefault(iShells);
 ClearToDefault(iBullets);
 ClearToDefault(iRockets);
 ClearToDefault(iGrenades);
 ClearToDefault(iNapalm);
 ClearToDefault(iElectricity);
 ClearToDefault(iIronBalls);
 ClearToDefault(iSniperBullets);
};
void CAmmoPack::SetDefaultProperties(void) {
  m_aptPackType = APT_CUSTOM ;
  m_iShells = MAX_SHELLS ;
  m_iBullets = MAX_BULLETS ;
  m_iRockets = MAX_ROCKETS ;
  m_iGrenades = MAX_GRENADES ;
  m_iNapalm = MAX_NAPALM ;
  m_iElectricity = MAX_ELECTRICITY ;
  m_iIronBalls = MAX_IRONBALLS ;
  m_iSniperBullets = MAX_SNIPERBULLETS ;
  CItem::SetDefaultProperties();
}
  
#line 79 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
void CAmmoPack::Precache(void) {
#line 80 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
PrecacheSound  (SOUND_PICK );
#line 81 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
  
#line 84 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
void CAmmoPack::RenderParticles(void) 
#line 85 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
{
#line 87 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(GetRenderType  () != CEntity  :: RT_MODEL  || GetSP  () -> sp_gmGameMode  > CSessionProperties  :: GM_COOPERATIVE  
#line 88 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
|| ! ShowItemParticles  ())
#line 89 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
{
#line 90 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
return ;
#line 91 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
#line 93 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
Particles_Spiral  (this  , 3.0f * 0.5f , 2.5f * 0.5f , PT_STAR04  , 10);
#line 94 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
  
#line 97 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
BOOL CAmmoPack::FillEntityStatistics(EntityStats * pes) 
#line 98 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
{
#line 99 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
pes  -> es_ctCount  = 1;
#line 100 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
pes  -> es_ctAmmount  = 1;
#line 106 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
pes  -> es_strName  . PrintF  ("Back pack: %d Shells, %d Bullets, %d Rockets, %d Grenades, %d Napalm, %d Electricity, %d Iron balls, %d Sniper bullets" , 
#line 107 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iShells  , m_iBullets  , m_iRockets  , m_iGrenades  , m_iNapalm  , m_iElectricity  , m_iIronBalls  , m_iSniperBullets );
#line 110 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
pes  -> es_fValue  = 
#line 111 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iShells  * AV_SHELLS  + 
#line 112 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iBullets  * AV_BULLETS  + 
#line 113 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iRockets  * AV_ROCKETS  + 
#line 114 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iGrenades  * AV_GRENADES  + 
#line 115 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iNapalm  * AV_NAPALM  + 
#line 116 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iElectricity  * AV_ELECTRICITY  + 
#line 117 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iIronBalls  * AV_IRONBALLS  + 
#line 118 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iSniperBullets  * AV_SNIPERBULLETS 
#line 119 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
;
#line 121 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
pes  -> es_iScore  = 0;
#line 122 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
return TRUE ;
#line 123 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
  
#line 126 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
void CAmmoPack::SetProperties(void) 
#line 127 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
{
#line 128 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
switch(m_aptPackType )
#line 129 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
{
#line 130 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
case APT_SERIOUS : 
#line 131 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_strDescription  = "Serious:";
#line 133 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
AddItem  (MODEL_SERIOUSPACK  , TEXTURE_SERIOUSPACK  , 0 , 0 , 0);
#line 134 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.75f , 0) , FLOAT3D (2 , 2 , 1.3f));
#line 135 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
StretchItem  (FLOAT3D (0.5f , 0.5f , 0.5f));
#line 136 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
break ;
#line 137 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
case APT_CUSTOM : 
#line 138 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_strDescription  = "Custom:";
#line 140 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
AddItem  (MODEL_BACKPACK  , TEXTURE_BACKPACK  , 0 , 0 , 0);
#line 141 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.75f , 0) , FLOAT3D (2 , 2 , 1.3f));
#line 142 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
StretchItem  (FLOAT3D (0.5f , 0.5f , 0.5f));
#line 143 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
break ;
#line 144 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
default  : ASSERTALWAYS  ("Uknown ammo");
#line 145 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
#line 147 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_fValue  = 1.0f;
#line 148 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 30.0f;
#line 149 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(m_iShells  != 0){m_strDescription  . PrintF  ("%s: Shells (%d)" , (const char  *) m_strDescription  , m_iShells );}
#line 150 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(m_iBullets  != 0){m_strDescription  . PrintF  ("%s: Bullets (%d)" , (const char  *) m_strDescription  , m_iBullets );}
#line 151 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(m_iRockets  != 0){m_strDescription  . PrintF  ("%s: Rockets (%d)" , (const char  *) m_strDescription  , m_iRockets );}
#line 152 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(m_iGrenades  != 0){m_strDescription  . PrintF  ("%s: Grenades (%d)" , (const char  *) m_strDescription  , m_iGrenades );}
#line 153 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(m_iNapalm  != 0){m_strDescription  . PrintF  ("%s: Napalm (%d)" , (const char  *) m_strDescription  , m_iNapalm );}
#line 154 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(m_iElectricity  != 0){m_strDescription  . PrintF  ("%s: Electricity (%d)" , (const char  *) m_strDescription  , m_iElectricity );}
#line 155 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(m_iIronBalls  != 0){m_strDescription  . PrintF  ("%s: Iron balls (%d)" , (const char  *) m_strDescription  , m_iIronBalls );}
#line 157 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(m_iSniperBullets  != 0){m_strDescription  . PrintF  ("%s: Sniper bullets (%d)" , (const char  *) m_strDescription  , m_iSniperBullets );}
#line 158 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
  
#line 160 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
void CAmmoPack::AdjustDifficulty(void) 
#line 161 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
{
#line 164 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(GetSP  () -> sp_bInfiniteAmmo  && m_penTarget  == NULL ){
#line 165 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
Destroy  ();
#line 166 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
#line 167 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
BOOL CAmmoPack::
#line 170 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
ItemCollected(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CAmmoPack_ItemCollected
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EPass, "CAmmoPack::ItemCollected expects 'EPass' as input!");  const EPass &epass = (const EPass &)__eeInput;
#line 172 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
ASSERT  (epass  . penOther  != NULL );
#line 175 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(GetSP  () -> sp_bAmmoStays  && ! (m_bPickupOnce  || m_bRespawn )){
#line 177 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
BOOL bWasPicked  = MarkPickedBy  (epass  . penOther );
#line 178 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(bWasPicked ){
#line 180 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
Return(STATE_CURRENT,EVoid());
#line 180 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
return TRUE;
#line 181 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
#line 182 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
#line 185 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
EAmmoPackItem  eAmmo ;
#line 186 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
eAmmo  . iShells  = m_iShells ;
#line 187 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
eAmmo  . iBullets  = m_iBullets ;
#line 188 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
eAmmo  . iRockets  = m_iRockets ;
#line 189 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
eAmmo  . iGrenades  = m_iGrenades ;
#line 190 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
eAmmo  . iNapalm  = m_iNapalm ;
#line 191 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
eAmmo  . iElectricity  = m_iElectricity ;
#line 192 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
eAmmo  . iIronBalls  = m_iIronBalls ;
#line 194 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
eAmmo  . iSniperBullets  = m_iSniperBullets ;
#line 196 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(epass  . penOther  -> ReceiveItem  (eAmmo )){
#line 198 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_soPick  . Set3DParameters  (50.0f , 1.0f , 1.0f , 1.0f);
#line 199 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
PlaySound  (m_soPick  , SOUND_PICK  , SOF_3D );
#line 200 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_fPickSoundLen  = GetSoundLength  (SOUND_PICK );
#line 201 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
if(! GetSP  () -> sp_bAmmoStays  || (m_bPickupOnce  || m_bRespawn )){
#line 202 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
Jump(STATE_CURRENT, STATE_CItem_ItemReceived, FALSE, EVoid());return TRUE;
#line 203 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
#line 204 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
}
#line 205 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
Return(STATE_CURRENT,EVoid());
#line 205 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CAmmoPack::
#line 208 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CAmmoPack_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CAmmoPack::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 209 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iShells  = Clamp  (m_iShells  , INDEX (0) , MAX_SHELLS );
#line 210 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iBullets  = Clamp  (m_iBullets  , INDEX (0) , MAX_BULLETS );
#line 211 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iRockets  = Clamp  (m_iRockets  , INDEX (0) , MAX_ROCKETS );
#line 212 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iGrenades  = Clamp  (m_iGrenades  , INDEX (0) , MAX_GRENADES );
#line 213 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iNapalm  = Clamp  (m_iNapalm  , INDEX (0) , MAX_NAPALM );
#line 214 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iElectricity  = Clamp  (m_iElectricity  , INDEX (0) , MAX_ELECTRICITY );
#line 215 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iIronBalls  = Clamp  (m_iIronBalls  , INDEX (0) , MAX_IRONBALLS );
#line 217 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
m_iSniperBullets  = Clamp  (m_iSniperBullets  , INDEX (0) , MAX_SNIPERBULLETS );
#line 219 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
Initialize  ();
#line 220 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
StartModelAnim  (ITEMHOLDER_ANIM_MEDIUMOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 221 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_MEDIUM );
#line 222 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
SetProperties  ();
#line 224 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/AmmoPack.es"
Jump(STATE_CURRENT, STATE_CItem_ItemLoop, FALSE, EVoid());return TRUE; ASSERT(FALSE); return TRUE;};