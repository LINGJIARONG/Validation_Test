/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */
#ifndef _Mean_10_Table_H_
#define _Mean_10_Table_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Temperature/ */ Temperature;
  kcg_float64 /* pH/ */ pH;
  kcg_float64 /* Redox/ */ Redox;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Ten_Values_Table /* _L1/ */ _L1;
  Data /* _L11/ */ _L11;
  Data /* _L10/ */ _L10;
  Data /* _L9/ */ _L9;
  Data /* _L8/ */ _L8;
  Data /* _L7/ */ _L7;
  Data /* _L6/ */ _L6;
  Data /* _L5/ */ _L5;
  Data /* _L4/ */ _L4;
  Data /* _L3/ */ _L3;
  Data /* _L2/ */ _L2;
  kcg_float64 /* _L14/ */ _L14;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L12/ */ _L12;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L20/ */ _L20;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L23/ */ _L23;
  kcg_float64 /* _L22/ */ _L22;
  kcg_float64 /* _L21/ */ _L21;
  kcg_float64 /* _L26/ */ _L26;
  kcg_float64 /* _L25/ */ _L25;
  kcg_float64 /* _L24/ */ _L24;
  kcg_float64 /* _L29/ */ _L29;
  kcg_float64 /* _L28/ */ _L28;
  kcg_float64 /* _L27/ */ _L27;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L30/ */ _L30;
  kcg_float64 /* _L35/ */ _L35;
  kcg_float64 /* _L34/ */ _L34;
  kcg_float64 /* _L33/ */ _L33;
  kcg_float64 /* _L38/ */ _L38;
  kcg_float64 /* _L37/ */ _L37;
  kcg_float64 /* _L36/ */ _L36;
  kcg_float64 /* _L41/ */ _L41;
  kcg_float64 /* _L40/ */ _L40;
  kcg_float64 /* _L39/ */ _L39;
  kcg_float64 /* _L42/ */ _L42;
  kcg_float64 /* _L43/ */ _L43;
  kcg_float64 /* _L44/ */ _L44;
  kcg_float64 /* _L45/ */ _L45;
  kcg_float64 /* _L46/ */ _L46;
  kcg_float64 /* _L47/ */ _L47;
  kcg_float64 /* _L48/ */ _L48;
  kcg_float64 /* _L49/ */ _L49;
  kcg_float64 /* _L50/ */ _L50;
} outC_Mean_10_Table;

/* ===========  node initialization and cycle functions  =========== */
/* Mean_10_Table/ */
extern void Mean_10_Table(
  /* Input1/ */
  Ten_Values_Table *Input1,
  outC_Mean_10_Table *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Mean_10_Table_reset(outC_Mean_10_Table *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Mean_10_Table_init(outC_Mean_10_Table *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Mean_10_Table_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Mean_10_Table.h
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

