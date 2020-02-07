/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */
#ifndef _Controller_H_
#define _Controller_H_

#include "kcg_types.h"
#include "Push_Table.h"
#include "Mean_10_Table.h"
#include "Vote_Alog.h"

/* ========================  input structure  ====================== */
typedef struct {
  Data /* Sensor_Temperature/ */ Sensor_Temperature;
  Data /* Sensor_pH/ */ Sensor_pH;
  Data /* Sensor_Redox/ */ Sensor_Redox;
  position /* Sensor_GPS/ */ Sensor_GPS;
  kcg_float64 /* Time/ */ Time;
  kcg_bool /* Stop/ */ Stop;
  kcg_float64 /* Frequency/ */ Frequency;
} inC_Controller;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Statation_data /* Send_Data/ */ Send_Data;
  kcg_bool /* alarm/ */ alarm;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  Ten_Values_Table /* store/ */ store;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Controller;

/* ===========  node initialization and cycle functions  =========== */
/* Controller/ */
extern void Controller(inC_Controller *inC, outC_Controller *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Controller_reset(outC_Controller *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Controller_init(outC_Controller *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Controller_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Controller.h
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

