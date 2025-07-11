/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_EnemyMarker_INCLUDED
#define _EntitiesMP_EnemyMarker_INCLUDED 1
#include <EntitiesMP/Marker.h>
extern "C" DECL_DLL CDLLEntityClass CEnemyMarker_DLLClass;
class CEnemyMarker : public CMarker {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fWaitTime;
  RANGE m_fMarkerRange;
  RANGE m_fPatrolAreaInner;
  RANGE m_fPatrolAreaOuter;
  FLOAT m_fPatrolTime;
  enum BoolEType m_betRunToMarker;
  enum BoolEType m_betFly;
  enum BoolEType m_betBlind;
  enum BoolEType m_betDeaf;
  BOOL m_bStartTactics;
   
#line 47 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/EnemyMarker.es"
BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   
#line 53 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/EnemyMarker.es"
BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
   
#line 59 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/EnemyMarker.es"
BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
#define  STATE_CEnemyMarker_Main 1
  BOOL 
#line 70 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/EnemyMarker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_EnemyMarker_INCLUDED
