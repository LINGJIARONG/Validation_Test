/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */
#ifndef _Check_interval_Temperature_H_
#define _Check_interval_Temperature_H_

#include "kcg_types.h"
#include "LATCHALL04_MTC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output1/, _L4/ */ Output1;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @1/MTC_ALL1/ */ MTC_ALL1_Check_interval_Temperature_PATHS1_MTC_OBS_1;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL04_MTC /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */ Context_LATCHALL04_MTC_1_Check_interval_Temperature_PATHS1_MTC_OBS_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Check_interval_Temperature;

/* ===========  node initialization and cycle functions  =========== */
/* Check_interval_Temperature/ */
extern void Check_interval_Temperature(
  /* _L1/, temperature/ */
  kcg_float64 temperature,
  /* MTC_AC_1/, MTC_AC_Outputs/ */
  kcg_bool MTC_AC_Outputs,
  /* @1/MTC_INSTRU/, MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Check_interval_Temperature *outC);

extern void Check_interval_Temperature_reset(
  outC_Check_interval_Temperature *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Check_interval_Temperature_init(
  outC_Check_interval_Temperature *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Check_interval_Temperature/
  @1: (MTCEx::MTC_Observers::Check_interval_Temperature_PATHS1_MTC_OBS#1)
*/

#endif /* _Check_interval_Temperature_H_ */
/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Check_interval_Temperature.h
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

