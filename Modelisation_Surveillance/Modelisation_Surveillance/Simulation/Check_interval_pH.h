/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */
#ifndef _Check_interval_pH_H_
#define _Check_interval_pH_H_

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
  kcg_bool /* _L2/ */ _L2;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_Check_interval_pH;

/* ===========  node initialization and cycle functions  =========== */
/* Check_interval_pH/ */
extern void Check_interval_pH(
  /* pH/ */
  kcg_float64 pH,
  outC_Check_interval_pH *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Check_interval_pH_reset(outC_Check_interval_pH *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Check_interval_pH_init(outC_Check_interval_pH *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Check_interval_pH_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_interval_pH.h
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

