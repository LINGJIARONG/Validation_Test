/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */
#ifndef _Push_Table_H_
#define _Push_Table_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Ten_Values_Table /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Ten_Values_Table /* _L1/ */ _L1;
  Data /* _L13/ */ _L13;
  Ten_Values_Table /* _L15/ */ _L15;
  array_float64_3_9 /* _L18/ */ _L18;
  array_float64_3_1 /* _L19/ */ _L19;
} outC_Push_Table;

/* ===========  node initialization and cycle functions  =========== */
/* Push_Table/ */
extern void Push_Table(
  /* Input1/ */
  Ten_Values_Table *Input1,
  /* newData/ */
  Data *newData,
  outC_Push_Table *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Push_Table_reset(outC_Push_Table *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Push_Table_init(outC_Push_Table *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Push_Table_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Push_Table.h
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

