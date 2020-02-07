/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */
#ifndef _Check_interval_Temperature_H_
#define _Check_interval_Temperature_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
} outC_Check_interval_Temperature;

/* ===========  node initialization and cycle functions  =========== */
/* Check_interval_Temperature/ */
extern void Check_interval_Temperature(
  /* temperature/ */
  kcg_float64 temperature,
  outC_Check_interval_Temperature *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Check_interval_Temperature_reset(
  outC_Check_interval_Temperature *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Check_interval_Temperature_init(
  outC_Check_interval_Temperature *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Check_interval_Temperature_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_interval_Temperature.h
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

