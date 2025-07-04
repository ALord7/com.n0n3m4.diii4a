/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_TacticsChanger_INCLUDED
#define _EntitiesMP_TacticsChanger_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CTacticsChanger_DLLClass;
class CTacticsChanger : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  enum TacticType m_tctType;
  FLOAT m_fParam1;
  FLOAT m_fParam2;
  FLOAT m_fParam3;
  FLOAT m_fParam4;
  FLOAT m_fParam5;
  CEntityPointer m_penTacticsHolder;
   
#line 47 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/TacticsChanger.es"
const CTString & GetDescription(void)const;
#define  STATE_CTacticsChanger_Main 1
  BOOL 
#line 52 "/data/data/com.termux/files/home/doom3/SeriousSamClassic-1.10.7/SamTSE/Sources/EntitiesMP/TacticsChanger.es"
Main(const CEntityEvent &__eeInput);
  BOOL H0x00ec0000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00ec0001_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00ec0002_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00ec0003_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x00ec0004_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x00ec0005_Main_06(const CEntityEvent &__eeInput);
  BOOL H0x00ec0006_Main_07(const CEntityEvent &__eeInput);
  BOOL H0x00ec0007_Main_08(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_TacticsChanger_INCLUDED
