/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 17 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"

#include "EntitiesMP/StdH/StdH.h"
#include "Models/Items/ItemHolder/ItemHolder.h"

#include <EntitiesMP/PowerUpItem.h>
#include <EntitiesMP/PowerUpItem_tables.h>
CEntityEvent *EPowerUp::MakeCopy(void) { CEntityEvent *peeCopy = new EPowerUp(*this); return peeCopy;}
EPowerUp::EPowerUp() : CEntityEvent(EVENTCODE_EPowerUp) {;
 ClearToDefault(puitType);
};
void CPowerUpItem::SetDefaultProperties(void) {
  m_puitType = PUIT_INVULNER ;
  CItem::SetDefaultProperties();
}
  
#line 90 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
void CPowerUpItem::Precache(void) 
#line 91 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
{
#line 92 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType ){
#line 93 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : 
#line 94 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : 
#line 95 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : 
#line 96 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : 
#line 97 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
PrecacheSound  (SOUND_PICKUP );break ;
#line 98 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : PrecacheSound  (SOUND_BOMB );break ;
#line 99 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 100 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
  
#line 103 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
BOOL CPowerUpItem::FillEntityStatistics(EntityStats * pes) 
#line 104 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
{
#line 105 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_strName  = "PowerUp";
#line 106 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_ctCount  = 1;
#line 107 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_ctAmmount  = 1;
#line 108 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_fValue  = 0;
#line 109 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_iScore  = 0;
#line 111 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType ){
#line 112 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : pes  -> es_strName  += " invisibility";break ;
#line 113 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : pes  -> es_strName  += " invulnerability";break ;
#line 114 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : pes  -> es_strName  += " serious damage";break ;
#line 115 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : pes  -> es_strName  += " serious speed";break ;
#line 116 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : pes  -> es_strName  = "Serious Bomb!";
#line 117 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 118 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
return TRUE ;
#line 119 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
  
#line 122 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
void CPowerUpItem::RenderParticles(void) 
#line 123 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
{
#line 125 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(GetRenderType  () != CEntity  :: RT_MODEL  || GetSP  () -> sp_gmGameMode  > CSessionProperties  :: GM_COOPERATIVE  
#line 126 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
|| ! ShowItemParticles  ()){
#line 127 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
return ;
#line 128 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 129 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType ){
#line 130 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : 
#line 131 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Particles_Stardust  (this  , 2.0f * 0.75f , 1.00f * 0.75f , PT_STAR08  , 320);
#line 132 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 133 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : 
#line 134 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Particles_Stardust  (this  , 2.0f * 0.75f , 1.00f * 0.75f , PT_STAR08  , 192);
#line 135 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 136 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : 
#line 137 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Particles_Stardust  (this  , 1.0f * 0.75f , 0.75f * 0.75f , PT_STAR08  , 128);
#line 138 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 139 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : 
#line 140 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Particles_Stardust  (this  , 1.0f * 0.75f , 0.75f * 0.75f , PT_STAR08  , 128);
#line 141 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 142 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : 
#line 143 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Particles_Atomic  (this  , 2.0f * 0.75f , 2.0f * 0.95f , PT_STAR05  , 12);
#line 144 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 145 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 146 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
  
#line 149 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
void CPowerUpItem::SetProperties(void) 
#line 150 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
{
#line 151 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType )
#line 152 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
{
#line 153 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : 
#line 154 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 155 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 156 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 40.0f;
#line 157 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("Invisibility");
#line 158 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_INVISIB  , TEXTURE_REFLECTION_METAL  , 0 , TEXTURE_SPECULAR_STRONG  , 0);
#line 159 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 160 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 0.75f , 1.0f * 0.75f , 1.0f * 0.75f));
#line 161 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 162 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : 
#line 163 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 164 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 165 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 60.0f;
#line 166 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("Invulnerability");
#line 167 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_INVULNER  , TEXTURE_REFLECTION_GOLD  , TEXTURE_REFLECTION_METAL  , TEXTURE_SPECULAR_MEDIUM  , 0);
#line 168 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 169 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 0.75f , 1.0f * 0.75f , 1.0f * 0.75f));
#line 170 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 171 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : 
#line 172 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 173 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 174 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 40.0f;
#line 175 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("SeriousDamage");
#line 176 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_DAMAGE  , TEXTURE_DAMAGE  , 0 , TEXTURE_SPECULAR_STRONG  , 0);
#line 177 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 178 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 0.75f , 1.0f * 0.75f , 1.0f * 0.75f));
#line 179 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 180 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : 
#line 181 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 182 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 183 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 40.0f;
#line 184 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("SeriousSpeed");
#line 185 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_SPEED  , TEXTURE_SPEED  , 0 , 0 , 0);
#line 186 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 187 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 0.75f , 1.0f * 0.75f , 1.0f * 0.75f));
#line 188 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 189 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : 
#line 190 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 191 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 192 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 40.0f;
#line 193 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("Serious Bomb!");
#line 194 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_BOMB  , TEXTURE_BOMB  , 0 , 0 , 0);
#line 195 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 196 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 3.0f , 1.0f * 3.0f , 1.0f * 3.0f));
#line 197 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 198 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 199 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
BOOL CPowerUpItem::
#line 204 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
ItemCollected(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CPowerUpItem_ItemCollected
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EPass, "CPowerUpItem::ItemCollected expects 'EPass' as input!");  const EPass &epass = (const EPass &)__eeInput;
#line 206 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
ASSERT  (epass  . penOther  != NULL );
#line 209 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(m_puitType  == PUIT_BOMB ){
#line 210 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(IsOfClass  (epass  . penOther  , "Player")){
#line 211 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(((CPlayer  &) * epass  . penOther ) . m_iSeriousBombCount  >= 3){
#line 212 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Return(STATE_CURRENT,EVoid());
#line 212 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
return TRUE;
#line 213 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 214 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 215 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 217 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(! (m_bPickupOnce  || m_bRespawn )){
#line 219 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
BOOL bWasPicked  = MarkPickedBy  (epass  . penOther );
#line 220 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(bWasPicked ){
#line 222 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Return(STATE_CURRENT,EVoid());
#line 222 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
return TRUE;
#line 223 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 224 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 227 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
EPowerUp  ePowerUp ;
#line 228 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
ePowerUp  . puitType  = m_puitType ;
#line 230 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(epass  . penOther  -> ReceiveItem  (ePowerUp )){
#line 232 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(_pNetwork  -> IsPlayerLocal  (epass  . penOther ))
#line 233 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
{
#line 234 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType )
#line 235 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
{
#line 236 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : IFeel_PlayEffect  ("PU_Invulnerability");break ;
#line 237 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : IFeel_PlayEffect  ("PU_Invulnerability");break ;
#line 238 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : IFeel_PlayEffect  ("PU_Invulnerability");break ;
#line 239 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : IFeel_PlayEffect  ("PU_FastShoes");break ;
#line 240 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : IFeel_PlayEffect  ("PU_SeriousBomb");break ;
#line 241 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 242 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 245 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_soPick  . Set3DParameters  (50.0f , 1.0f , 2.0f , 1.0f);
#line 246 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if(m_puitType  == PUIT_BOMB ){
#line 247 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
PlaySound  (m_soPick  , SOUND_BOMB  , SOF_3D );
#line 248 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_fPickSoundLen  = GetSoundLength  (SOUND_BOMB );
#line 249 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}else if(TRUE ){
#line 250 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
PlaySound  (m_soPick  , SOUND_PICKUP  , SOF_3D );
#line 251 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
m_fPickSoundLen  = GetSoundLength  (SOUND_PICKUP );
#line 252 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 253 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
if((m_bPickupOnce  || m_bRespawn )){Jump(STATE_CURRENT, STATE_CItem_ItemReceived, FALSE, EVoid());return TRUE;}
#line 254 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
}
#line 255 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Return(STATE_CURRENT,EVoid());
#line 255 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CPowerUpItem::
#line 259 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CPowerUpItem_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CPowerUpItem::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 261 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Initialize  ();
#line 262 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
SetProperties  ();
#line 263 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/PowerUpItem.es"
Jump(STATE_CURRENT, STATE_CItem_ItemLoop, FALSE, EVoid());return TRUE; ASSERT(FALSE); return TRUE;};