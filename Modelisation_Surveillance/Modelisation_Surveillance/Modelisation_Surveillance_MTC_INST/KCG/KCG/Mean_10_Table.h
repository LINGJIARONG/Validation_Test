/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */
#ifndef _Mean_10_Table_H_
#define _Mean_10_Table_H_

#include "kcg_types.h"
#include "LATCHALL01_MTC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Temperature/, _L45/ */ Temperature;
  kcg_float64 /* _L47/, pH/ */ pH;
  kcg_float64 /* Redox/, _L49/ */ Redox;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @1/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS1_MTC_OBS_1;
  Result_MTC /* @2/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS2_MTC_OBS_1;
  Result_MTC /* @3/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS3_MTC_OBS_1;
  Result_MTC /* @4/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS4_MTC_OBS_1;
  Result_MTC /* @5/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS5_MTC_OBS_1;
  Result_MTC /* @6/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS6_MTC_OBS_1;
  Result_MTC /* @7/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS7_MTC_OBS_1;
  Result_MTC /* @8/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS8_MTC_OBS_1;
  Result_MTC /* @9/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS9_MTC_OBS_1;
  Result_MTC /* @10/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS10_MTC_OBS_1;
  Result_MTC /* @11/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_PATHS11_MTC_OBS_1;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL01_MTC /* @11/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS11_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _1_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS10_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @9/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _2_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS9_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _3_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS8_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _4_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS7_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _5_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS6_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _6_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS5_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _7_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS4_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _8_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS3_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _9_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS2_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @1/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _10_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS1_MTC_OBS_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Mean_10_Table;

/* ===========  node initialization and cycle functions  =========== */
/* Mean_10_Table/ */
extern void Mean_10_Table(
  /* Input1/, _L1/ */
  Ten_Values_Table *Input1,
  /* @10/MTC_CC_10_A/,
     @11/MTC_CC_11_A/,
     @2/MTC_CC_2_A/,
     @3/MTC_CC_3_A/,
     @4/MTC_CC_4_A/,
     @5/MTC_CC_5_A/,
     @6/MTC_CC_6_A/,
     @7/MTC_CC_7_A/,
     @8/MTC_CC_8_A/,
     @9/MTC_CC_9_A/,
     MTC_AC_1/,
     MTC_AC_10/,
     MTC_AC_11/,
     MTC_AC_13/,
     MTC_AC_14/,
     MTC_AC_2/,
     MTC_AC_3/,
     MTC_AC_4/,
     MTC_AC_5/,
     MTC_AC_6/,
     MTC_AC_7/,
     MTC_AC_8/,
     MTC_AC_9/,
     MTC_AC_Outputs/,
     MTC_CC_10_A/,
     MTC_CC_11_A/,
     MTC_CC_2_A/,
     MTC_CC_3_A/,
     MTC_CC_4_A/,
     MTC_CC_5_A/,
     MTC_CC_6_A/,
     MTC_CC_7_A/,
     MTC_CC_8_A/,
     MTC_CC_9_A/ */
  kcg_bool MTC_AC_Outputs,
  /* @1/MTC_INSTRU/,
     @10/MTC_INSTRU/,
     @11/MTC_INSTRU/,
     @2/MTC_INSTRU/,
     @3/MTC_INSTRU/,
     @4/MTC_INSTRU/,
     @5/MTC_INSTRU/,
     @6/MTC_INSTRU/,
     @7/MTC_INSTRU/,
     @8/MTC_INSTRU/,
     @9/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Mean_10_Table *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Mean_10_Table_reset(outC_Mean_10_Table *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Mean_10_Table_init(outC_Mean_10_Table *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Mean_10_Table/
  @1: (MTCEx::MTC_Observers::Mean_10_Table_PATHS1_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Mean_10_Table_PATHS2_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::Mean_10_Table_PATHS3_MTC_OBS#1)
  @4: (MTCEx::MTC_Observers::Mean_10_Table_PATHS4_MTC_OBS#1)
  @5: (MTCEx::MTC_Observers::Mean_10_Table_PATHS5_MTC_OBS#1)
  @6: (MTCEx::MTC_Observers::Mean_10_Table_PATHS6_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::Mean_10_Table_PATHS7_MTC_OBS#1)
  @8: (MTCEx::MTC_Observers::Mean_10_Table_PATHS8_MTC_OBS#1)
  @9: (MTCEx::MTC_Observers::Mean_10_Table_PATHS9_MTC_OBS#1)
  @10: (MTCEx::MTC_Observers::Mean_10_Table_PATHS10_MTC_OBS#1)
  @11: (MTCEx::MTC_Observers::Mean_10_Table_PATHS11_MTC_OBS#1)
*/

#endif /* _Mean_10_Table_H_ */
/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Mean_10_Table.h
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

