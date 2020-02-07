/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */
#ifndef _Controller_H_
#define _Controller_H_

#include "kcg_types.h"
#include "Push_Table.h"
#include "_3_GenericInputChanged_MTC_Utils_float64310.h"
#include "Mean_10_Table.h"
#include "_2_GenericInputChanged_MTC_Utils_float643.h"
#include "Vote_Alog.h"
#include "LATCHALL07_MTC.h"
#include "LATCHALL03_MTC.h"
#include "LATCHALL06_MTC.h"
#include "LATCHALL01_MTC.h"
#include "LATCHALL04_MTC.h"
#include "LATCHALL02_MTC.h"

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
  Statation_data /* MTC_Send_Data/, Send_Data/ */ Send_Data;
  kcg_bool /* alarm/ */ alarm;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @54/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_1;
  Result_MTC /* @53/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS9_MTC_OBS_1;
  Result_MTC /* @52/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS10_MTC_OBS_1;
  Result_MTC /* @51/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS11_MTC_OBS_1;
  Result_MTC /* @50/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_1;
  Result_MTC /* @49/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_2;
  Result_MTC /* @48/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1;
  Result_MTC /* @46/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1;
  Result_MTC /* @44/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_2;
  Result_MTC /* @43/MTC_ALL1/ */ MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1;
  Result_MTC /* @41/MTC_ALL1/ */ _1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2;
  Result_MTC /* @39/MTC_ALL1/ */ _2_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3;
  Result_MTC /* @37/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1;
  Result_MTC /* @35/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_2;
  Result_MTC /* @34/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_1;
  Result_MTC /* @33/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_3;
  Result_MTC /* @32/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS13_MTC_OBS_1;
  Result_MTC /* @31/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS14_MTC_OBS_1;
  Result_MTC /* @30/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_3;
  Result_MTC /* @29/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_4;
  Result_MTC /* @28/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1;
  Result_MTC /* @26/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2;
  Result_MTC /* @24/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_4;
  Result_MTC /* @23/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS15_MTC_OBS_1;
  Result_MTC /* @22/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS16_MTC_OBS_1;
  Result_MTC /* @21/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_5;
  Result_MTC /* @20/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_6;
  Result_MTC /* @19/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1;
  Result_MTC /* @17/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2;
  Result_MTC /* @15/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_5;
  Result_MTC /* @14/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS17_MTC_OBS_1;
  Result_MTC /* @13/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_7;
  Result_MTC /* @12/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1;
  Result_MTC /* @10/MTC_ALL1/ */ MTC_ALL1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1;
  Result_MTC /* @8/MTC_ALL1/ */ MTC_ALL1_math_Abs_MTC_OBS_3;
  Result_MTC /* @7/MTC_ALL1/ */ MTC_ALL1_math_Abs_MTC_OBS_2;
  Result_MTC /* @6/MTC_ALL1/ */ MTC_ALL1_math_Abs_MTC_OBS_1;
  Result_MTC /* @5/MTC_ALL1/ */ MTC_ALL1_Mean_10_Table_1_MTC_OBS_1_float64310;
  Result_MTC /* @4/MTC_ALL1/ */ MTC_ALL1_Vote_Alog_111_MTC_OBS_3_float643_float643_float643;
  Result_MTC /* @3/MTC_ALL1/ */ MTC_ALL1_Push_Table_11_MTC_OBS_1_float643_float64310;
  Result_MTC /* @2/MTC_ALL1/ */ _3_MTC_ALL1_Vote_Alog_111_MTC_OBS_7_float643_float643_float643;
  Result_MTC /* @1/MTC_ALL1/ */ _4_MTC_ALL1_Vote_Alog_111_MTC_OBS_1_float643_float643_float643;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  Ten_Values_Table /* store/ */ store;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL04_MTC /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */ Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_1;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @1/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */ Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_1;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @1/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */ Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_1;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @1/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_1;
  outC_LATCHALL04_MTC /* @2/MTC_ALL1=(MTC::LATCHALL04#1)/ */ _5_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_7;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @2/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */ _6_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_7;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @2/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */ _7_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_7;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @2/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _8_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_7;
  outC_LATCHALL03_MTC /* @3/MTC_ALL1=(MTC::LATCHALL03#1)/ */ Context_LATCHALL03_MTC_1_Push_Table_11_MTC_OBS_1;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @3/MTC_newData_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */ Context_GenericInputChanged_2_Push_Table_11_MTC_OBS_1;
  outC_Vote_Alog /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */ Context_Vote_Alog_7;
  outC__3_GenericInputChanged_MTC_Utils_float64310 /* @3/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ Context_GenericInputChanged_1_Push_Table_11_MTC_OBS_1;
  outC_LATCHALL04_MTC /* @4/MTC_ALL1=(MTC::LATCHALL04#1)/ */ _9_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_3;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @4/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */ _10_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_3;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @4/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */ _11_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_3;
  outC__2_GenericInputChanged_MTC_Utils_float643 /* @4/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ _12_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_3;
  outC_LATCHALL02_MTC /* @5/MTC_ALL1=(MTC::LATCHALL02#1)/ */ Context_LATCHALL02_MTC_1_Mean_10_Table_1_MTC_OBS_1;
  outC__3_GenericInputChanged_MTC_Utils_float64310 /* @5/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ Context_GenericInputChanged_1_Mean_10_Table_1_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3;
  outC_LATCHALL02_MTC /* @10/MTC_ALL1=(MTC::LATCHALL02#1)/ */ Context_LATCHALL02_MTC_1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1;
  outC_LATCHALL02_MTC /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _15_Context_LATCHALL02_MTC_1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1;
  outC_LATCHALL01_MTC /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_7;
  outC_LATCHALL03_MTC /* @14/MTC_ALL1=(MTC::LATCHALL03#1)/ */ Context_LATCHALL03_MTC_1_Controller_PATHS17_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @15/MTC_ALL1=(MTC::LATCHALL02#1)/ */ Context_LATCHALL02_MTC_1_STATE_MTC_OBS_5;
  outC_LATCHALL04_MTC /* @17/MTC_ALL1=(MTC::LATCHALL04#1)/ */ Context_LATCHALL04_MTC_1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2;
  outC_LATCHALL02_MTC /* @19/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _16_Context_LATCHALL02_MTC_1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1;
  outC_LATCHALL01_MTC /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _17_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_6;
  outC_LATCHALL01_MTC /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _18_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_5;
  outC_LATCHALL03_MTC /* @22/MTC_ALL1=(MTC::LATCHALL03#1)/ */ _19_Context_LATCHALL03_MTC_1_Controller_PATHS16_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_Controller_PATHS15_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @24/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _20_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_4;
  outC_LATCHALL02_MTC /* @26/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _21_Context_LATCHALL02_MTC_1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2;
  outC_LATCHALL02_MTC /* @28/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _22_Context_LATCHALL02_MTC_1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1;
  outC_LATCHALL01_MTC /* @29/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _23_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_4;
  outC_LATCHALL01_MTC /* @30/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _24_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @31/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _25_Context_LATCHALL01_MTC_1_Controller_PATHS14_MTC_OBS_1;
  outC_LATCHALL06_MTC /* @32/MTC_ALL1=(MTC::LATCHALL06#1)/ */ Context_LATCHALL06_MTC_1_Controller_PATHS13_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @33/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _26_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @34/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @35/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @37/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _28_Context_LATCHALL02_MTC_1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1;
  outC_LATCHALL04_MTC /* @39/MTC_ALL1=(MTC::LATCHALL04#1)/ */ Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3;
  outC_LATCHALL04_MTC /* @41/MTC_ALL1=(MTC::LATCHALL04#1)/ */ _29_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2;
  outC_LATCHALL04_MTC /* @43/MTC_ALL1=(MTC::LATCHALL04#1)/ */ _30_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1;
  outC_LATCHALL02_MTC /* @44/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _31_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @46/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _32_Context_LATCHALL02_MTC_1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1;
  outC_LATCHALL02_MTC /* @48/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _33_Context_LATCHALL02_MTC_1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1;
  outC_LATCHALL01_MTC /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _34_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _35_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_1;
  outC_LATCHALL07_MTC /* @51/MTC_ALL1=(MTC::LATCHALL07#1)/ */ Context_LATCHALL07_MTC_1_Controller_PATHS11_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @52/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _36_Context_LATCHALL02_MTC_1_Controller_PATHS10_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @53/MTC_ALL1=(MTC::LATCHALL03#1)/ */ _37_Context_LATCHALL03_MTC_1_Controller_PATHS9_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @54/MTC_ALL1=(MTC::LATCHALL02#1)/ */ _38_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_1;
  outC_Mean_10_Table /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */ Context_Mean_10_Table_1;
  outC_Vote_Alog /* SM1:Calculate:_L4=(Vote_Alog#3)/ */ Context_Vote_Alog_3;
  outC_Vote_Alog /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */ Context_Vote_Alog_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @45/notif/,
     @47/MTC_guard/,
     @47/notif/,
     SM1:Normal_Station:<1>,
     SM1:Normal_Station:_L8/,
     SM1:Normal_Station:notif/,
     alarm/ */ tr_1_clock_Normal_Station_SM1;
  kcg_bool every;
  kcg_bool /* SM1:Normal_Station:<2> */ tr_2_clock_Normal_Station_SM1;
  kcg_bool /* SM1:Calculate:IfBlock1: */ IfBlock1_clock_Calculate_SM1;
  kcg_bool /* @25/alarm/,
     @27/MTC_guard/,
     @27/alarm/,
     @36/MTC_cond/,
     @36/alarm/,
     SM1:Calculate:<1>,
     SM1:Calculate:_L20/,
     alarm/ */ tr_1_clock_Calculate_SM1;
  kcg_bool every39;
  kcg_bool every40;
  kcg_bool every41;
  kcg_bool every42;
  kcg_bool every43;
  kcg_bool every44;
  kcg_bool /* SM1:Calculate:<2> */ tr_2_clock_Calculate_SM1;
  kcg_bool /* @18/MTC_guard/,
     @18/Stop/,
     SM1:Pollution:<1> */ tr_1_clock_Pollution_SM1;
  kcg_bool /* SM1:Pollution:<2> */ tr_2_clock_Pollution_SM1;
  kcg_bool /* @11/MTC_guard/,
     @11/timeout/,
     SM1:,
     SM1:Timer:<1>,
     SM1:Timer:_L11/,
     timeout/ */ tr_1_clock_Timer_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
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
  @1: (MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS#7)
  @3: (MTCEx::MTC_Observers::Push_Table_11_MTC_OBS#1)
  @4: (MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS#3)
  @5: (MTCEx::MTC_Observers::Mean_10_Table_1_MTC_OBS#1)
  @6: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#2)
  @8: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#3)
  @9: (MTCEx::MTC_Instrumenters::Controller_store_last_MTC_INST#1)
  @10: @9/(MTCEx::MTC_Observers::Controller_PATHS1_MTC_OBS#1)
  @11: (MTCEx::MTC_Instrumenters::Controller_SM1_Timer_1_MTC_INST#1)
  @12: @11/(MTCEx::MTC_Observers::Controller_PATHS8_MTC_OBS#1)
  @13: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#7)
  @14: (MTCEx::MTC_Observers::Controller_PATHS17_MTC_OBS#1)
  @15: (MTCEx::MTC_Observers::STATE_MTC_OBS#5)
  @16: (MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_2_MTC_INST#2)
  @17: @16/(MTCEx::MTC_Observers::Controller_PATHS6_MTC_OBS#1)
  @18: (MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_1_MTC_INST#1)
  @19: @18/(MTCEx::MTC_Observers::Controller_PATHS7_MTC_OBS#1)
  @20: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#6)
  @21: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#5)
  @22: (MTCEx::MTC_Observers::Controller_PATHS16_MTC_OBS#1)
  @23: (MTCEx::MTC_Observers::Controller_PATHS15_MTC_OBS#1)
  @24: (MTCEx::MTC_Observers::STATE_MTC_OBS#4)
  @25: (MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_2_MTC_INST#2)
  @26: @25/(MTCEx::MTC_Observers::Controller_PATHS4_MTC_OBS#1)
  @27: (MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_1_MTC_INST#1)
  @28: @27/(MTCEx::MTC_Observers::Controller_PATHS5_MTC_OBS#1)
  @29: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#4)
  @30: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @31: (MTCEx::MTC_Observers::Controller_PATHS14_MTC_OBS#1)
  @32: (MTCEx::MTC_Observers::Controller_PATHS13_MTC_OBS#1)
  @33: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @34: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @35: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#2)
  @36: (MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_IfBlock1_MTC_INST#1)
  @37: @36/(MTCEx::MTC_Observers::Controller_PATHS12_MTC_OBS#1)
  @38: (math::Abs#3)
  @39: @38/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @40: (math::Abs#2)
  @41: @40/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @42: (math::Abs#1)
  @43: @42/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @44: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @45: (MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_2_MTC_INST#1)
  @46: @45/(MTCEx::MTC_Observers::Controller_PATHS2_MTC_OBS#1)
  @47: (MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_1_MTC_INST#1)
  @48: @47/(MTCEx::MTC_Observers::Controller_PATHS3_MTC_OBS#1)
  @49: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @50: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
  @51: (MTCEx::MTC_Observers::Controller_PATHS11_MTC_OBS#1)
  @52: (MTCEx::MTC_Observers::Controller_PATHS10_MTC_OBS#1)
  @53: (MTCEx::MTC_Observers::Controller_PATHS9_MTC_OBS#1)
  @54: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
*/

#endif /* _Controller_H_ */
/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Controller.h
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

