/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */
#ifndef _Vote_Alog_H_
#define _Vote_Alog_H_

#include "kcg_types.h"
#include "Calculated_value.h"
#include "Check_interval_pH.h"
#include "Check_interval_Temperature.h"
#include "Check_interval_Redox.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* pH/ */ pH;
  kcg_float64 /* Temperature/ */ Temperature;
  kcg_float64 /* Redox/ */ Redox;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Calculated_value /* _L18=(Calculated_value#1)/ */ Context_Calculated_value_1;
  outC_Check_interval_pH /* _L11=(Check_interval_pH#3)/ */ Context_Check_interval_pH_3;
  outC_Check_interval_pH /* _L10=(Check_interval_pH#2)/ */ Context_Check_interval_pH_2;
  outC_Check_interval_pH /* _L4=(Check_interval_pH#1)/ */ Context_Check_interval_pH_1;
  outC_Calculated_value /* _L34=(Calculated_value#2)/ */ Context_Calculated_value_2;
  outC_Check_interval_Temperature /* _L27=(Check_interval_Temperature#3)/ */ Context_Check_interval_Temperature_3;
  outC_Check_interval_Temperature /* _L26=(Check_interval_Temperature#2)/ */ _1_Context_Check_interval_Temperature_2;
  outC_Check_interval_Temperature /* _L6=(Check_interval_Temperature#1)/ */ _2_Context_Check_interval_Temperature_1;
  outC_Calculated_value /* _L45=(Calculated_value#3)/ */ Context_Calculated_value_3;
  outC_Check_interval_Redox /* _L38=(Check_interval_Redox#3)/ */ Context_Check_interval_Redox_3;
  outC_Check_interval_Redox /* _L37=(Check_interval_Redox#2)/ */ Context_Check_interval_Redox_2;
  outC_Check_interval_Redox /* _L5=(Check_interval_Redox#1)/ */ Context_Check_interval_Redox_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Data /* _L1/ */ _L1;
  Data /* _L2/ */ _L2;
  Data /* _L3/ */ _L3;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L14/ */ _L14;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L4/ */ _L4;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L22/ */ _L22;
  kcg_float64 /* _L21/ */ _L21;
  kcg_float64 /* _L20/ */ _L20;
  kcg_float64 /* _L25/ */ _L25;
  kcg_float64 /* _L24/ */ _L24;
  kcg_float64 /* _L23/ */ _L23;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_float64 /* _L28/ */ _L28;
  kcg_float64 /* _L29/ */ _L29;
  kcg_float64 /* _L30/ */ _L30;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L33/ */ _L33;
  kcg_float64 /* _L34/ */ _L34;
  kcg_float64 /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_float64 /* _L39/ */ _L39;
  kcg_float64 /* _L40/ */ _L40;
  kcg_float64 /* _L41/ */ _L41;
  kcg_float64 /* _L42/ */ _L42;
  kcg_float64 /* _L43/ */ _L43;
  kcg_float64 /* _L44/ */ _L44;
  kcg_float64 /* _L45/ */ _L45;
  kcg_float64 /* _L46/ */ _L46;
} outC_Vote_Alog;

/* ===========  node initialization and cycle functions  =========== */
/* Vote_Alog/ */
extern void Vote_Alog(
  /* pH_Data/ */
  Data *pH_Data,
  /* Temperature_Data/ */
  Data *Temperature_Data,
  /* Redox_Data/ */
  Data *Redox_Data,
  outC_Vote_Alog *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Vote_Alog_reset(outC_Vote_Alog *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Vote_Alog_init(outC_Vote_Alog *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Vote_Alog_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Vote_Alog.h
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

