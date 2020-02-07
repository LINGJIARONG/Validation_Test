/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */
#ifndef _Vote_Alog_H_
#define _Vote_Alog_H_

#include "kcg_types.h"
#include "LATCHALL12_MTC.h"
#include "Calculated_value.h"
#include "GenericInputChanged_MTC_Utils_float64.h"
#include "LATCHALL01_MTC.h"
#include "Check_interval_pH.h"
#include "Check_interval_Temperature.h"
#include "Check_interval_Redox.h"
#include "LATCHALL04_MTC.h"
#include "LATCHALL02_MTC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* _L18/, pH/ */ pH;
  kcg_float64 /* Temperature/, _L34/ */ Temperature;
  kcg_float64 /* Redox/, _L45/ */ Redox;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @13/MTC_ALL1/ */ MTC_ALL1_Vote_Alog_PATHS1_MTC_OBS_1;
  Result_MTC /* @14/MTC_ALL1/ */ MTC_ALL1_Vote_Alog_PATHS2_MTC_OBS_1;
  Result_MTC /* @15/MTC_ALL1/ */ MTC_ALL1_Vote_Alog_PATHS3_MTC_OBS_1;
  Result_MTC /* @16/MTC_ALL1/ */ MTC_ALL1_Vote_Alog_PATHS4_MTC_OBS_1;
  Result_MTC /* @17/MTC_ALL1/ */ MTC_ALL1_Vote_Alog_PATHS5_MTC_OBS_1;
  Result_MTC /* @18/MTC_ALL1/ */ MTC_ALL1_Vote_Alog_PATHS6_MTC_OBS_1;
  Result_MTC /* @12/MTC_ALL1/ */ MTC_ALL1_Check_interval_Redox_1_MTC_OBS_3_float64;
  Result_MTC /* @11/MTC_ALL1/ */ _1_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_2_float64;
  Result_MTC /* @10/MTC_ALL1/ */ _2_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_1_float64;
  Result_MTC /* @9/MTC_ALL1/ */ MTC_ALL1_Calculated_value_1110_MTC_OBS_3_float64_float64_float64_float64;
  Result_MTC /* @8/MTC_ALL1/ */ MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_3_float64;
  Result_MTC /* @7/MTC_ALL1/ */ _3_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_2_float64;
  Result_MTC /* @6/MTC_ALL1/ */ _4_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_1_float64;
  Result_MTC /* @5/MTC_ALL1/ */ _5_MTC_ALL1_Calculated_value_1110_MTC_OBS_2_float64_float64_float64_float64;
  Result_MTC /* @4/MTC_ALL1/ */ MTC_ALL1_Check_interval_pH_1_MTC_OBS_3_float64;
  Result_MTC /* @3/MTC_ALL1/ */ _6_MTC_ALL1_Check_interval_pH_1_MTC_OBS_2_float64;
  Result_MTC /* @2/MTC_ALL1/ */ _7_MTC_ALL1_Check_interval_pH_1_MTC_OBS_1_float64;
  Result_MTC /* @1/MTC_ALL1/ */ _8_MTC_ALL1_Calculated_value_1110_MTC_OBS_1_float64_float64_float64_float64;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Calculated_value /* _L18=(Calculated_value#1)/ */ Context_Calculated_value_1;
  outC_Calculated_value /* _L34=(Calculated_value#2)/ */ Context_Calculated_value_2;
  outC_Calculated_value /* _L45=(Calculated_value#3)/ */ Context_Calculated_value_3;
  outC_LATCHALL04_MTC /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */ Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @1/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */ Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @1/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */ Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @1/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @2/MTC_ALL1=(MTC::LATCHALL02#1)/ */ Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @2/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _9_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @3/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _10_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_2;
  outC_GenericInputChanged_MTC_Utils_float64 /* @3/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _11_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @4/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _12_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_3;
  outC_GenericInputChanged_MTC_Utils_float64 /* @4/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _13_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_3;
  outC_LATCHALL04_MTC /* @5/MTC_ALL1=(MTC::LATCHALL04#1)/ */ _14_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_2;
  outC_GenericInputChanged_MTC_Utils_float64 /* @5/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */ _15_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_2;
  outC_GenericInputChanged_MTC_Utils_float64 /* @5/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */ _16_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_2;
  outC_GenericInputChanged_MTC_Utils_float64 /* @5/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _17_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @6/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _18_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @6/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _19_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @7/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _20_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_2;
  outC_GenericInputChanged_MTC_Utils_float64 /* @7/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _21_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @8/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _22_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_3;
  outC_GenericInputChanged_MTC_Utils_float64 /* @8/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _23_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_3;
  outC_LATCHALL04_MTC /* @9/MTC_ALL1=(MTC::LATCHALL04#1)/ */ _24_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_3;
  outC_GenericInputChanged_MTC_Utils_float64 /* @9/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */ _25_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_3;
  outC_GenericInputChanged_MTC_Utils_float64 /* @9/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */ _26_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_3;
  outC_GenericInputChanged_MTC_Utils_float64 /* @9/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _27_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_3;
  outC_LATCHALL02_MTC /* @10/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _28_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @10/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _29_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @11/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _30_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_2;
  outC_GenericInputChanged_MTC_Utils_float64 /* @11/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _31_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _32_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_3;
  outC_GenericInputChanged_MTC_Utils_float64 /* @12/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _33_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_3;
  outC_LATCHALL12_MTC /* @18/MTC_ALL1=(MTC::LATCHALL12#1)/ */ Context_LATCHALL12_MTC_1_Vote_Alog_PATHS6_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @17/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_Vote_Alog_PATHS5_MTC_OBS_1;
  outC_Check_interval_Redox /* _L5=(Check_interval_Redox#1)/ */ Context_Check_interval_Redox_1;
  outC_Check_interval_Redox /* _L37=(Check_interval_Redox#2)/ */ Context_Check_interval_Redox_2;
  outC_Check_interval_Redox /* _L38=(Check_interval_Redox#3)/ */ Context_Check_interval_Redox_3;
  outC_LATCHALL12_MTC /* @16/MTC_ALL1=(MTC::LATCHALL12#1)/ */ _34_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS4_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @15/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _35_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS3_MTC_OBS_1;
  outC_Check_interval_Temperature /* _L6=(Check_interval_Temperature#1)/ */ Context_Check_interval_Temperature_1;
  outC_Check_interval_Temperature /* _L26=(Check_interval_Temperature#2)/ */ _36_Context_Check_interval_Temperature_2;
  outC_Check_interval_Temperature /* _L27=(Check_interval_Temperature#3)/ */ _37_Context_Check_interval_Temperature_3;
  outC_LATCHALL12_MTC /* @14/MTC_ALL1=(MTC::LATCHALL12#1)/ */ _38_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS2_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _39_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS1_MTC_OBS_1;
  outC_Check_interval_pH /* _L4=(Check_interval_pH#1)/ */ Context_Check_interval_pH_1;
  outC_Check_interval_pH /* _L10=(Check_interval_pH#2)/ */ Context_Check_interval_pH_2;
  outC_Check_interval_pH /* _L11=(Check_interval_pH#3)/ */ Context_Check_interval_pH_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every40;
  kcg_bool every41;
  kcg_bool every42;
  kcg_bool every43;
  kcg_bool every44;
  kcg_bool every45;
  kcg_bool every46;
  kcg_bool every47;
  kcg_bool every48;
  kcg_bool every49;
  kcg_bool every50;
} outC_Vote_Alog;

/* ===========  node initialization and cycle functions  =========== */
/* Vote_Alog/ */
extern void Vote_Alog(
  /* _L1/, pH_Data/ */
  Data *pH_Data,
  /* Temperature_Data/, _L2/ */
  Data *Temperature_Data,
  /* Redox_Data/, _L3/ */
  Data *Redox_Data,
  /* MTC_AC_1/,
     MTC_AC_11/,
     MTC_AC_16/,
     MTC_AC_19/,
     MTC_AC_2/,
     MTC_AC_20/,
     MTC_AC_24/,
     MTC_AC_29/,
     MTC_AC_34/,
     MTC_AC_37/,
     MTC_AC_38/,
     MTC_AC_42/,
     MTC_AC_47/,
     MTC_AC_52/,
     MTC_AC_6/,
     MTC_AC_Outputs/ */
  kcg_bool MTC_AC_Outputs,
  /* @13/MTC_INSTRU/,
     @14/MTC_INSTRU/,
     @15/MTC_INSTRU/,
     @16/MTC_INSTRU/,
     @17/MTC_INSTRU/,
     @18/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Vote_Alog *outC);

extern void Vote_Alog_reset(outC_Vote_Alog *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Vote_Alog_init(outC_Vote_Alog *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Vote_Alog/
  @1: (MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS#2)
  @4: (MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS#3)
  @5: (MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS#2)
  @6: (MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS#2)
  @8: (MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS#3)
  @9: (MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS#3)
  @10: (MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS#1)
  @11: (MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS#2)
  @12: (MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS#3)
  @13: (MTCEx::MTC_Observers::Vote_Alog_PATHS1_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::Vote_Alog_PATHS2_MTC_OBS#1)
  @15: (MTCEx::MTC_Observers::Vote_Alog_PATHS3_MTC_OBS#1)
  @16: (MTCEx::MTC_Observers::Vote_Alog_PATHS4_MTC_OBS#1)
  @17: (MTCEx::MTC_Observers::Vote_Alog_PATHS5_MTC_OBS#1)
  @18: (MTCEx::MTC_Observers::Vote_Alog_PATHS6_MTC_OBS#1)
*/

#endif /* _Vote_Alog_H_ */
/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Vote_Alog.h
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

