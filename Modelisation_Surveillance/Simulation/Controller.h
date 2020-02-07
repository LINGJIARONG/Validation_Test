/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-06T16:38:07
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
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  Ten_Values_Table /* store/ */ store;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Vote_Alog /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */ Context_Vote_Alog_1;
  outC_Push_Table /* SM1:Calculate:IfBlock1:else:_L15=(Push_Table#1)/ */ Context_Push_Table_1;
  outC_Vote_Alog /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */ Context_Vote_Alog_7;
  outC_Mean_10_Table /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */ Context_Mean_10_Table_1;
  outC_Vote_Alog /* SM1:Calculate:_L4=(Vote_Alog#3)/ */ Context_Vote_Alog_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:Calculate:IfBlock1: */ IfBlock1_clock_Calculate_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/A_Output/ */ A_Output_Abs_1_float64;
  kcg_float64 /* @1/A_Input/ */ A_Input_Abs_1_float64;
  kcg_float64 /* @1/_L8/ */ _L8_Abs_1_float64;
  kcg_float64 /* @1/_L5/ */ _L5_Abs_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_Abs_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Abs_1_float64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_float64;
  kcg_float64 /* @2/A_Output/ */ A_Output_Abs_2_float64;
  kcg_float64 /* @2/A_Input/ */ A_Input_Abs_2_float64;
  kcg_float64 /* @2/_L8/ */ _L8_Abs_2_float64;
  kcg_float64 /* @2/_L5/ */ _L5_Abs_2_float64;
  kcg_float64 /* @2/_L3/ */ _L3_Abs_2_float64;
  kcg_float64 /* @2/_L2/ */ _L2_Abs_2_float64;
  kcg_bool /* @2/_L1/ */ _L1_Abs_2_float64;
  kcg_float64 /* @3/A_Output/ */ A_Output_Abs_3_float64;
  kcg_float64 /* @3/A_Input/ */ A_Input_Abs_3_float64;
  kcg_float64 /* @3/_L8/ */ _L8_Abs_3_float64;
  kcg_float64 /* @3/_L5/ */ _L5_Abs_3_float64;
  kcg_float64 /* @3/_L3/ */ _L3_Abs_3_float64;
  kcg_float64 /* @3/_L2/ */ _L2_Abs_3_float64;
  kcg_bool /* @3/_L1/ */ _L1_Abs_3_float64;
  kcg_bool /* SM1:Normal_Station:_L15/ */ _L15_Normal_Station_SM1;
  kcg_float64 /* SM1:Normal_Station:_L12/ */ _L12_Normal_Station_SM1;
  kcg_bool /* SM1:Normal_Station:_L11/ */ _L11_Normal_Station_SM1;
  kcg_bool /* SM1:Normal_Station:_L10/ */ _L10_Normal_Station_SM1;
  kcg_bool /* SM1:Normal_Station:_L9/ */ _L9_Normal_Station_SM1;
  kcg_bool /* SM1:Normal_Station:_L8/ */ _L8_Normal_Station_SM1;
  kcg_float64 /* SM1:Normal_Station:_L5/ */ _L5_Normal_Station_SM1;
  kcg_float64 /* SM1:Normal_Station:_L6/ */ _L6_Normal_Station_SM1;
  kcg_float64 /* SM1:Normal_Station:_L7/ */ _L7_Normal_Station_SM1;
  Data /* SM1:Normal_Station:_L3/ */ _L3_Normal_Station_SM1;
  Data /* SM1:Normal_Station:_L2/ */ _L2_Normal_Station_SM1;
  Data /* SM1:Normal_Station:_L1/ */ _L1_Normal_Station_SM1;
  kcg_bool /* SM1:Normal_Station:notif/ */ notif_Normal_Station_SM1;
  kcg_float64 /* SM1:Calculate:_L43/ */ _L43_Calculate_SM1;
  Ten_Values_Table /* SM1:Calculate:_L42/ */ _L42_Calculate_SM1;
  kcg_bool /* SM1:Calculate:_L30/ */ _L30_Calculate_SM1;
  kcg_bool /* SM1:Calculate:_L29/ */ _L29_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L28/ */ _L28_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L27/ */ _L27_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L26/ */ _L26_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L25/ */ _L25_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L24/ */ _L24_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L23/ */ _L23_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L22/ */ _L22_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L21/ */ _L21_Calculate_SM1;
  kcg_bool /* SM1:Calculate:_L20/ */ _L20_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L19/ */ _L19_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L18/ */ _L18_Calculate_SM1;
  kcg_bool /* SM1:Calculate:_L17/ */ _L17_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L16/ */ _L16_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L15/ */ _L15_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L12/ */ _L12_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L13/ */ _L13_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L14/ */ _L14_Calculate_SM1;
  Data /* SM1:Calculate:_L1/ */ _L1_Calculate_SM1;
  Statation_data /* SM1:Calculate:_L2/ */ _L2_Calculate_SM1;
  Data /* SM1:Calculate:_L3/ */ _L3_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L6/ */ _L6_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L5/ */ _L5_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L4/ */ _L4_Calculate_SM1;
  position /* SM1:Calculate:_L7/ */ _L7_Calculate_SM1;
  Data /* SM1:Calculate:_L8/ */ _L8_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:_L9/ */ _L9_Calculate_SM1;
  Data /* SM1:Calculate:IfBlock1:else:_L5/ */ _L5_else_IfBlock1_Calculate_SM1;
  Data /* SM1:Calculate:IfBlock1:else:_L6/ */ _L6_else_IfBlock1_Calculate_SM1;
  Data /* SM1:Calculate:IfBlock1:else:_L7/ */ _L7_else_IfBlock1_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:IfBlock1:else:_L11/ */ _L11_else_IfBlock1_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:IfBlock1:else:_L12/ */ _L12_else_IfBlock1_Calculate_SM1;
  kcg_float64 /* SM1:Calculate:IfBlock1:else:_L13/ */ _L13_else_IfBlock1_Calculate_SM1;
  Ten_Values_Table /* SM1:Calculate:IfBlock1:else:_L15/ */ _L15_else_IfBlock1_Calculate_SM1;
  Data /* SM1:Calculate:IfBlock1:else:_L19/ */ _L19_else_IfBlock1_Calculate_SM1;
  array_float64_1 /* SM1:Calculate:IfBlock1:else:_L20/ */ _L20_else_IfBlock1_Calculate_SM1;
  array_float64_1 /* SM1:Calculate:IfBlock1:else:_L21/ */ _L21_else_IfBlock1_Calculate_SM1;
  array_float64_1 /* SM1:Calculate:IfBlock1:else:_L23/ */ _L23_else_IfBlock1_Calculate_SM1;
  Ten_Values_Table /* SM1:Calculate:IfBlock1:else:_L29/ */ _L29_else_IfBlock1_Calculate_SM1;
  kcg_float64 /* SM1:Pollution:_L2/ */ _L2_Pollution_SM1;
  kcg_bool /* SM1:Pollution:_L1/ */ _L1_Pollution_SM1;
  kcg_float64 /* SM1:Timer:_L13/ */ _L13_Timer_SM1;
  kcg_float64 /* SM1:Timer:_L12/ */ _L12_Timer_SM1;
  kcg_bool /* SM1:Timer:_L11/ */ _L11_Timer_SM1;
  kcg_float64 /* SM1:Timer:_L10/ */ _L10_Timer_SM1;
  kcg_float64 /* SM1:Timer:_L8/ */ _L8_Timer_SM1;
  kcg_float64 /* SM1:Timer:_L7/ */ _L7_Timer_SM1;
  kcg_float64 /* SM1:Timer:_L2/ */ _L2_Timer_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_float64 /* Store_Time/ */ Store_Time;
  kcg_bool /* timeout/ */ timeout;
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

/*
  Expanded instances for: Controller/
  @1: (math::Abs#1)
  @2: (math::Abs#2)
  @3: (math::Abs#3)
*/

#endif /* _Controller_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Controller.h
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

