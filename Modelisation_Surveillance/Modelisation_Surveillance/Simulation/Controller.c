/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Controller.h"

/* Controller/ */
void Controller(inC_Controller *inC, outC_Controller *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  position tmp;
  /* Send_Data/ */
  Statation_data Send_Data_partial;
  /* alarm/ */
  kcg_bool alarm_partial;
  /* store/ */
  Ten_Values_Table store_partial;
  /* Store_Time/ */
  kcg_float64 Store_Time_partial;
  /* timeout/ */
  kcg_bool timeout_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* SM1:Normal_Station:<2> */
  kcg_bool tr_2_guard_Normal_Station_SM1;
  /* SM1:Normal_Station:<1> */
  kcg_bool tr_1_guard_Normal_Station_SM1;
  /* Send_Data/ */
  Statation_data _3_Send_Data_partial;
  /* alarm/ */
  kcg_bool _4_alarm_partial;
  /* store/ */
  Ten_Values_Table _5_store_partial;
  /* Store_Time/ */
  kcg_float64 _6_Store_Time_partial;
  /* timeout/ */
  kcg_bool _7_timeout_partial;
  /* SM1: */
  SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _10_SM1_fired_partial;
  /* Send_Data/ */
  Statation_data _11_Send_Data_partial;
  /* alarm/ */
  kcg_bool _12_alarm_partial;
  /* store/ */
  Ten_Values_Table _13_store_partial;
  /* Store_Time/ */
  kcg_float64 _14_Store_Time_partial;
  /* timeout/ */
  kcg_bool _15_timeout_partial;
  /* SM1: */
  SSM_ST_SM1 _16_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _18_SM1_fired_partial;
  /* SM1:Calculate:<2> */
  kcg_bool tr_2_guard_Calculate_SM1;
  /* SM1:Calculate:<1> */
  kcg_bool tr_1_guard_Calculate_SM1;
  /* store/ */
  Ten_Values_Table _19_store_partial;
  /* store/ */
  Ten_Values_Table _20_store_partial;
  /* Send_Data/ */
  Statation_data _21_Send_Data_partial;
  /* alarm/ */
  kcg_bool _22_alarm_partial;
  /* store/ */
  Ten_Values_Table _23_store_partial;
  /* Store_Time/ */
  kcg_float64 _24_Store_Time_partial;
  /* timeout/ */
  kcg_bool _25_timeout_partial;
  /* SM1: */
  SSM_ST_SM1 _26_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _27_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _28_SM1_fired_partial;
  /* SM1:Pollution:<2> */
  kcg_bool tr_2_guard_Pollution_SM1;
  /* SM1:Pollution:<1> */
  kcg_bool tr_1_guard_Pollution_SM1;
  kcg_bool noname;
  kcg_float64 _29_noname;
  /* Send_Data/ */
  Statation_data _30_Send_Data_partial;
  /* alarm/ */
  kcg_bool _31_alarm_partial;
  /* store/ */
  Ten_Values_Table _32_store_partial;
  /* Store_Time/ */
  kcg_float64 _33_Store_Time_partial;
  /* timeout/ */
  kcg_bool _34_timeout_partial;
  /* SM1: */
  SSM_ST_SM1 _35_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _36_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _37_SM1_fired_partial;
  /* SM1:Timer:<1> */
  kcg_bool tr_1_guard_Timer_SM1;
  /* alarm/ */
  kcg_bool last_alarm;
  /* store/ */
  Ten_Values_Table last_store;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->SM1_state_act = outC->SM1_state_sel;
  switch (outC->SM1_state_act) {
    case SSM_st_Calculate_SM1 :
      outC->_L8_Abs_1_float64 = kcg_lit_float64(0.);
      kcg_copy_Data(&outC->_L1_Calculate_SM1, &inC->Sensor_pH);
      kcg_copy_Data(&outC->_L8_Calculate_SM1, &inC->Sensor_Temperature);
      kcg_copy_Data(&outC->_L3_Calculate_SM1, &inC->Sensor_Redox);
      /* SM1:Calculate:_L4=(Vote_Alog#3)/ */
      Vote_Alog(
        &outC->_L1_Calculate_SM1,
        &outC->_L8_Calculate_SM1,
        &outC->_L3_Calculate_SM1,
        &outC->Context_Vote_Alog_3);
      outC->_L4_Calculate_SM1 = outC->Context_Vote_Alog_3.pH;
      outC->_L5_Calculate_SM1 = outC->Context_Vote_Alog_3.Temperature;
      outC->_L6_Calculate_SM1 = outC->Context_Vote_Alog_3.Redox;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_Ten_Values_Table(&last_store, &outC->store);
  switch (outC->SM1_state_act) {
    case SSM_st_Calculate_SM1 :
      kcg_copy_Ten_Values_Table(&outC->_L42_Calculate_SM1, &last_store);
      /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */
      Mean_10_Table(&outC->_L42_Calculate_SM1, &outC->Context_Mean_10_Table_1);
      outC->_L12_Calculate_SM1 = outC->Context_Mean_10_Table_1.Temperature;
      outC->_L13_Calculate_SM1 = outC->Context_Mean_10_Table_1.pH;
      outC->_L14_Calculate_SM1 = outC->Context_Mean_10_Table_1.Redox;
      outC->_L18_Calculate_SM1 = outC->_L12_Calculate_SM1 - outC->_L5_Calculate_SM1;
      outC->A_Input_Abs_1_float64 = outC->_L18_Calculate_SM1;
      outC->_L5_Abs_1_float64 = outC->A_Input_Abs_1_float64;
      outC->_L3_Abs_1_float64 = - outC->_L5_Abs_1_float64;
      outC->_L1_Abs_1_float64 = outC->_L8_Abs_1_float64 <= outC->_L5_Abs_1_float64;
      /* @1/_L2= */
      if (outC->_L1_Abs_1_float64) {
        outC->_L2_Abs_1_float64 = outC->_L5_Abs_1_float64;
      }
      else {
        outC->_L2_Abs_1_float64 = outC->_L3_Abs_1_float64;
      }
      outC->A_Output_Abs_1_float64 = outC->_L2_Abs_1_float64;
      outC->_L8_Abs_2_float64 = kcg_lit_float64(0.);
      outC->_L23_Calculate_SM1 = outC->_L13_Calculate_SM1 - outC->_L4_Calculate_SM1;
      outC->A_Input_Abs_2_float64 = outC->_L23_Calculate_SM1;
      outC->_L5_Abs_2_float64 = outC->A_Input_Abs_2_float64;
      outC->_L3_Abs_2_float64 = - outC->_L5_Abs_2_float64;
      outC->_L1_Abs_2_float64 = outC->_L8_Abs_2_float64 <= outC->_L5_Abs_2_float64;
      /* @2/_L2= */
      if (outC->_L1_Abs_2_float64) {
        outC->_L2_Abs_2_float64 = outC->_L5_Abs_2_float64;
      }
      else {
        outC->_L2_Abs_2_float64 = outC->_L3_Abs_2_float64;
      }
      outC->A_Output_Abs_2_float64 = outC->_L2_Abs_2_float64;
      outC->_L8_Abs_3_float64 = kcg_lit_float64(0.);
      outC->_L24_Calculate_SM1 = outC->_L14_Calculate_SM1 - outC->_L6_Calculate_SM1;
      outC->A_Input_Abs_3_float64 = outC->_L24_Calculate_SM1;
      outC->_L5_Abs_3_float64 = outC->A_Input_Abs_3_float64;
      outC->_L3_Abs_3_float64 = - outC->_L5_Abs_3_float64;
      outC->_L1_Abs_3_float64 = outC->_L8_Abs_3_float64 <= outC->_L5_Abs_3_float64;
      /* @3/_L2= */
      if (outC->_L1_Abs_3_float64) {
        outC->_L2_Abs_3_float64 = outC->_L5_Abs_3_float64;
      }
      else {
        outC->_L2_Abs_3_float64 = outC->_L3_Abs_3_float64;
      }
      outC->A_Output_Abs_3_float64 = outC->_L2_Abs_3_float64;
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_alarm = outC->alarm;
  switch (outC->SM1_state_act) {
    case SSM_st_Timer_SM1 :
      _33_Store_Time_partial = kcg_lit_float64(0.0);
      kcg_copy_Ten_Values_Table(&_32_store_partial, &last_store);
      _31_alarm_partial = last_alarm;
      kcg_copy_Statation_data(
        &_30_Send_Data_partial,
        (Statation_data *) &Normal_Send_Data);
      outC->_L2_Timer_SM1 = inC->Frequency;
      outC->_L13_Timer_SM1 = kcg_lit_float64(1.0);
      outC->_L12_Timer_SM1 = outC->_L13_Timer_SM1 / outC->_L2_Timer_SM1;
      outC->_L10_Timer_SM1 = _33_Store_Time_partial;
      outC->_L7_Timer_SM1 = inC->Time;
      outC->_L8_Timer_SM1 = outC->_L7_Timer_SM1 - outC->_L10_Timer_SM1;
      outC->_L11_Timer_SM1 = outC->_L8_Timer_SM1 >= outC->_L12_Timer_SM1;
      _34_timeout_partial = outC->_L11_Timer_SM1;
      tr_1_guard_Timer_SM1 = _34_timeout_partial;
      if (tr_1_guard_Timer_SM1) {
        _37_SM1_fired_partial = SSM_TR_Timer_Normal_Station_1_Timer_SM1;
      }
      else {
        _37_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      _36_SM1_reset_nxt_partial = tr_1_guard_Timer_SM1;
      if (tr_1_guard_Timer_SM1) {
        _35_SM1_state_nxt_partial = SSM_st_Normal_Station_SM1;
      }
      else {
        _35_SM1_state_nxt_partial = SSM_st_Timer_SM1;
      }
      break;
    case SSM_st_Pollution_SM1 :
      _25_timeout_partial = kcg_false;
      _24_Store_Time_partial = kcg_lit_float64(0.0);
      kcg_copy_Ten_Values_Table(&_23_store_partial, &last_store);
      _22_alarm_partial = last_alarm;
      kcg_copy_Statation_data(
        &_21_Send_Data_partial,
        (Statation_data *) &Normal_Send_Data);
      tr_2_guard_Pollution_SM1 = (!inC->Stop) & (inC->Frequency >
          kcg_lit_float64(0.));
      tr_1_guard_Pollution_SM1 = inC->Stop;
      if (tr_1_guard_Pollution_SM1) {
        _28_SM1_fired_partial = SSM_TR_Pollution_Defaillance_Station_1_Pollution_SM1;
      }
      else if (tr_2_guard_Pollution_SM1) {
        _28_SM1_fired_partial = SSM_TR_Pollution_Timer_2_Pollution_SM1;
      }
      else {
        _28_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      if (tr_1_guard_Pollution_SM1) {
        _27_SM1_reset_nxt_partial = kcg_true;
      }
      else {
        _27_SM1_reset_nxt_partial = tr_2_guard_Pollution_SM1;
      }
      if (tr_1_guard_Pollution_SM1) {
        _26_SM1_state_nxt_partial = SSM_st_Defaillance_Station_SM1;
      }
      else if (tr_2_guard_Pollution_SM1) {
        _26_SM1_state_nxt_partial = SSM_st_Timer_SM1;
      }
      else {
        _26_SM1_state_nxt_partial = SSM_st_Pollution_SM1;
      }
      outC->_L1_Pollution_SM1 = inC->Stop;
      noname = outC->_L1_Pollution_SM1;
      outC->_L2_Pollution_SM1 = inC->Frequency;
      _29_noname = outC->_L2_Pollution_SM1;
      break;
    case SSM_st_Calculate_SM1 :
      _15_timeout_partial = kcg_false;
      outC->_L26_Calculate_SM1 = outC->A_Output_Abs_3_float64;
      outC->_L28_Calculate_SM1 = kcg_lit_float64(0.5);
      outC->_L22_Calculate_SM1 = outC->_L14_Calculate_SM1 * outC->_L28_Calculate_SM1;
      outC->_L30_Calculate_SM1 = outC->_L22_Calculate_SM1 < outC->_L26_Calculate_SM1;
      outC->_L25_Calculate_SM1 = outC->A_Output_Abs_2_float64;
      outC->_L27_Calculate_SM1 = kcg_lit_float64(0.5);
      outC->_L21_Calculate_SM1 = outC->_L13_Calculate_SM1 * outC->_L27_Calculate_SM1;
      outC->_L29_Calculate_SM1 = outC->_L21_Calculate_SM1 < outC->_L25_Calculate_SM1;
      outC->_L19_Calculate_SM1 = outC->A_Output_Abs_1_float64;
      outC->_L16_Calculate_SM1 = kcg_lit_float64(0.5);
      outC->_L15_Calculate_SM1 = outC->_L12_Calculate_SM1 * outC->_L16_Calculate_SM1;
      outC->_L17_Calculate_SM1 = outC->_L15_Calculate_SM1 < outC->_L19_Calculate_SM1;
      outC->_L20_Calculate_SM1 = outC->_L17_Calculate_SM1 |
        outC->_L29_Calculate_SM1 | outC->_L30_Calculate_SM1;
      _12_alarm_partial = outC->_L20_Calculate_SM1;
      tr_2_guard_Calculate_SM1 = !_12_alarm_partial;
      tr_1_guard_Calculate_SM1 = _12_alarm_partial;
      if (tr_1_guard_Calculate_SM1) {
        _18_SM1_fired_partial = SSM_TR_Calculate_Pollution_1_Calculate_SM1;
      }
      else if (tr_2_guard_Calculate_SM1) {
        _18_SM1_fired_partial = SSM_TR_Calculate_Timer_2_Calculate_SM1;
      }
      else {
        _18_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      if (tr_1_guard_Calculate_SM1) {
        _17_SM1_reset_nxt_partial = kcg_true;
      }
      else {
        _17_SM1_reset_nxt_partial = tr_2_guard_Calculate_SM1;
      }
      if (tr_1_guard_Calculate_SM1) {
        _16_SM1_state_nxt_partial = SSM_st_Pollution_SM1;
      }
      else if (tr_2_guard_Calculate_SM1) {
        _16_SM1_state_nxt_partial = SSM_st_Timer_SM1;
      }
      else {
        _16_SM1_state_nxt_partial = SSM_st_Calculate_SM1;
      }
      outC->_L43_Calculate_SM1 = inC->Time;
      _14_Store_Time_partial = outC->_L43_Calculate_SM1;
      outC->IfBlock1_clock_Calculate_SM1 = _12_alarm_partial;
      /* SM1:Calculate:IfBlock1: */
      if (outC->IfBlock1_clock_Calculate_SM1) {
        kcg_copy_Ten_Values_Table(&_20_store_partial, &last_store);
        kcg_copy_Ten_Values_Table(&_13_store_partial, &_20_store_partial);
      }
      else {
        kcg_copy_Ten_Values_Table(&outC->_L29_else_IfBlock1_Calculate_SM1, &last_store);
        kcg_copy_Data(&outC->_L5_else_IfBlock1_Calculate_SM1, &inC->Sensor_Temperature);
        kcg_copy_Data(&outC->_L6_else_IfBlock1_Calculate_SM1, &inC->Sensor_pH);
        kcg_copy_Data(&outC->_L7_else_IfBlock1_Calculate_SM1, &inC->Sensor_Redox);
        /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */
        Vote_Alog(
          &outC->_L5_else_IfBlock1_Calculate_SM1,
          &outC->_L6_else_IfBlock1_Calculate_SM1,
          &outC->_L7_else_IfBlock1_Calculate_SM1,
          &outC->Context_Vote_Alog_7);
        outC->_L11_else_IfBlock1_Calculate_SM1 = outC->Context_Vote_Alog_7.pH;
        outC->_L12_else_IfBlock1_Calculate_SM1 = outC->Context_Vote_Alog_7.Temperature;
        outC->_L13_else_IfBlock1_Calculate_SM1 = outC->Context_Vote_Alog_7.Redox;
        /* SM1:Calculate:IfBlock1:else:_L23/ */
        for (idx = 0; idx < 1; idx++) {
          outC->_L23_else_IfBlock1_Calculate_SM1[idx] =
            outC->_L13_else_IfBlock1_Calculate_SM1;
        }
        /* SM1:Calculate:IfBlock1:else:_L21/ */
        for (idx1 = 0; idx1 < 1; idx1++) {
          outC->_L21_else_IfBlock1_Calculate_SM1[idx1] =
            outC->_L12_else_IfBlock1_Calculate_SM1;
        }
        /* SM1:Calculate:IfBlock1:else:_L20/ */
        for (idx2 = 0; idx2 < 1; idx2++) {
          outC->_L20_else_IfBlock1_Calculate_SM1[idx2] =
            outC->_L11_else_IfBlock1_Calculate_SM1;
        }
        tmp[0] = outC->_L20_else_IfBlock1_Calculate_SM1[0];
        tmp[1] = outC->_L21_else_IfBlock1_Calculate_SM1[0];
        kcg_copy_position(&outC->_L19_else_IfBlock1_Calculate_SM1[0], &tmp);
        outC->_L19_else_IfBlock1_Calculate_SM1[2] =
          outC->_L23_else_IfBlock1_Calculate_SM1[0];
        /* SM1:Calculate:IfBlock1:else:_L15=(Push_Table#1)/ */
        Push_Table(
          &outC->_L29_else_IfBlock1_Calculate_SM1,
          &outC->_L19_else_IfBlock1_Calculate_SM1,
          &outC->Context_Push_Table_1);
        kcg_copy_Ten_Values_Table(
          &outC->_L15_else_IfBlock1_Calculate_SM1,
          &outC->Context_Push_Table_1.Output1);
        kcg_copy_Ten_Values_Table(
          &_19_store_partial,
          &outC->_L15_else_IfBlock1_Calculate_SM1);
        kcg_copy_Ten_Values_Table(&_13_store_partial, &_19_store_partial);
      }
      outC->_L9_Calculate_SM1 = inC->Time;
      kcg_copy_position(&outC->_L7_Calculate_SM1, &inC->Sensor_GPS);
      outC->_L2_Calculate_SM1.Temperature = outC->_L5_Calculate_SM1;
      outC->_L2_Calculate_SM1.pH = outC->_L4_Calculate_SM1;
      outC->_L2_Calculate_SM1.Redox = outC->_L6_Calculate_SM1;
      kcg_copy_position(&outC->_L2_Calculate_SM1.Position, &outC->_L7_Calculate_SM1);
      outC->_L2_Calculate_SM1.Time = outC->_L9_Calculate_SM1;
      kcg_copy_Statation_data(&_11_Send_Data_partial, &outC->_L2_Calculate_SM1);
      break;
    case SSM_st_Defaillance_Station_SM1 :
      _7_timeout_partial = kcg_false;
      _6_Store_Time_partial = kcg_lit_float64(0.0);
      kcg_copy_Ten_Values_Table(&_5_store_partial, &last_store);
      _4_alarm_partial = last_alarm;
      kcg_copy_Statation_data(
        &_3_Send_Data_partial,
        (Statation_data *) &Normal_Send_Data);
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Timer_SM1 :
      kcg_copy_Statation_data(&outC->Send_Data, &_30_Send_Data_partial);
      outC->alarm = _31_alarm_partial;
      kcg_copy_Ten_Values_Table(&outC->store, &_32_store_partial);
      outC->Store_Time = _33_Store_Time_partial;
      outC->timeout = _34_timeout_partial;
      outC->SM1_state_nxt = _35_SM1_state_nxt_partial;
      break;
    case SSM_st_Pollution_SM1 :
      kcg_copy_Statation_data(&outC->Send_Data, &_21_Send_Data_partial);
      outC->alarm = _22_alarm_partial;
      kcg_copy_Ten_Values_Table(&outC->store, &_23_store_partial);
      outC->Store_Time = _24_Store_Time_partial;
      outC->timeout = _25_timeout_partial;
      outC->SM1_state_nxt = _26_SM1_state_nxt_partial;
      break;
    case SSM_st_Calculate_SM1 :
      kcg_copy_Statation_data(&outC->Send_Data, &_11_Send_Data_partial);
      outC->alarm = _12_alarm_partial;
      kcg_copy_Ten_Values_Table(&outC->store, &_13_store_partial);
      outC->Store_Time = _14_Store_Time_partial;
      outC->timeout = _15_timeout_partial;
      outC->SM1_state_nxt = _16_SM1_state_nxt_partial;
      break;
    case SSM_st_Defaillance_Station_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_Defaillance_Station_SM1;
      kcg_copy_Statation_data(&outC->Send_Data, &_3_Send_Data_partial);
      outC->alarm = _4_alarm_partial;
      kcg_copy_Ten_Values_Table(&outC->store, &_5_store_partial);
      outC->Store_Time = _6_Store_Time_partial;
      outC->timeout = _7_timeout_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_Normal_Station_SM1 :
      timeout_partial = kcg_false;
      Store_Time_partial = kcg_lit_float64(0.0);
      kcg_copy_Ten_Values_Table(&store_partial, &last_store);
      kcg_copy_Statation_data(
        &Send_Data_partial,
        (Statation_data *) &Normal_Send_Data);
      kcg_copy_Data(&outC->_L2_Normal_Station_SM1, &inC->Sensor_pH);
      kcg_copy_Data(&outC->_L1_Normal_Station_SM1, &inC->Sensor_Temperature);
      kcg_copy_Data(&outC->_L3_Normal_Station_SM1, &inC->Sensor_Redox);
      /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */
      Vote_Alog(
        &outC->_L2_Normal_Station_SM1,
        &outC->_L1_Normal_Station_SM1,
        &outC->_L3_Normal_Station_SM1,
        &outC->Context_Vote_Alog_1);
      outC->_L5_Normal_Station_SM1 = outC->Context_Vote_Alog_1.pH;
      outC->_L6_Normal_Station_SM1 = outC->Context_Vote_Alog_1.Temperature;
      outC->_L7_Normal_Station_SM1 = outC->Context_Vote_Alog_1.Redox;
      outC->_L12_Normal_Station_SM1 = Notification_Defaillance;
      outC->_L11_Normal_Station_SM1 = outC->_L12_Normal_Station_SM1 ==
        outC->_L7_Normal_Station_SM1;
      outC->_L10_Normal_Station_SM1 = outC->_L6_Normal_Station_SM1 ==
        outC->_L12_Normal_Station_SM1;
      outC->_L9_Normal_Station_SM1 = outC->_L5_Normal_Station_SM1 ==
        outC->_L12_Normal_Station_SM1;
      outC->_L8_Normal_Station_SM1 = outC->_L9_Normal_Station_SM1 |
        outC->_L10_Normal_Station_SM1 | outC->_L11_Normal_Station_SM1;
      outC->notif_Normal_Station_SM1 = outC->_L8_Normal_Station_SM1;
      tr_2_guard_Normal_Station_SM1 = !outC->notif_Normal_Station_SM1;
      tr_1_guard_Normal_Station_SM1 = outC->notif_Normal_Station_SM1;
      if (tr_1_guard_Normal_Station_SM1) {
        SM1_fired_partial =
          SSM_TR_Normal_Station_Defaillance_Station_1_Normal_Station_SM1;
      }
      else if (tr_2_guard_Normal_Station_SM1) {
        SM1_fired_partial = SSM_TR_Normal_Station_Calculate_2_Normal_Station_SM1;
      }
      else {
        SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      SM1_reset_nxt_partial = kcg_false;
      if (tr_1_guard_Normal_Station_SM1) {
        SM1_state_nxt_partial = SSM_st_Defaillance_Station_SM1;
      }
      else if (tr_2_guard_Normal_Station_SM1) {
        SM1_state_nxt_partial = SSM_st_Calculate_SM1;
      }
      else {
        SM1_state_nxt_partial = SSM_st_Normal_Station_SM1;
      }
      alarm_partial = outC->_L8_Normal_Station_SM1;
      kcg_copy_Statation_data(&outC->Send_Data, &Send_Data_partial);
      outC->alarm = alarm_partial;
      kcg_copy_Ten_Values_Table(&outC->store, &store_partial);
      outC->Store_Time = Store_Time_partial;
      outC->timeout = timeout_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Timer_SM1 :
      outC->SM1_reset_nxt = _36_SM1_reset_nxt_partial;
      outC->SM1_fired = _37_SM1_fired_partial;
      break;
    case SSM_st_Pollution_SM1 :
      outC->SM1_reset_nxt = _27_SM1_reset_nxt_partial;
      outC->SM1_fired = _28_SM1_fired_partial;
      break;
    case SSM_st_Calculate_SM1 :
      outC->SM1_reset_nxt = _17_SM1_reset_nxt_partial;
      outC->SM1_fired = _18_SM1_fired_partial;
      break;
    case SSM_st_Defaillance_Station_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_Normal_Station_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  outC->SM1_reset_act = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Controller_init(outC_Controller *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;

  outC->timeout = kcg_true;
  outC->Store_Time = kcg_lit_float64(0.0);
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Normal_Station_SM1;
  outC->SM1_state_sel = SSM_st_Normal_Station_SM1;
  outC->_L2_Timer_SM1 = kcg_lit_float64(0.0);
  outC->_L7_Timer_SM1 = kcg_lit_float64(0.0);
  outC->_L8_Timer_SM1 = kcg_lit_float64(0.0);
  outC->_L10_Timer_SM1 = kcg_lit_float64(0.0);
  outC->_L11_Timer_SM1 = kcg_true;
  outC->_L12_Timer_SM1 = kcg_lit_float64(0.0);
  outC->_L13_Timer_SM1 = kcg_lit_float64(0.0);
  outC->_L1_Pollution_SM1 = kcg_true;
  outC->_L2_Pollution_SM1 = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    for (idx = 0; idx < 3; idx++) {
      outC->_L29_else_IfBlock1_Calculate_SM1[idx1][idx] = kcg_lit_float64(0.0);
    }
  }
  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L23_else_IfBlock1_Calculate_SM1[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L21_else_IfBlock1_Calculate_SM1[idx3] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L20_else_IfBlock1_Calculate_SM1[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L19_else_IfBlock1_Calculate_SM1[idx5] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    for (idx6 = 0; idx6 < 3; idx6++) {
      outC->_L15_else_IfBlock1_Calculate_SM1[idx7][idx6] = kcg_lit_float64(0.0);
    }
  }
  outC->_L13_else_IfBlock1_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L12_else_IfBlock1_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L11_else_IfBlock1_Calculate_SM1 = kcg_lit_float64(0.0);
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L7_else_IfBlock1_Calculate_SM1[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L6_else_IfBlock1_Calculate_SM1[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 3; idx10++) {
    outC->_L5_else_IfBlock1_Calculate_SM1[idx10] = kcg_lit_float64(0.0);
  }
  outC->IfBlock1_clock_Calculate_SM1 = kcg_true;
  outC->_L9_Calculate_SM1 = kcg_lit_float64(0.0);
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L8_Calculate_SM1[idx11] = kcg_lit_float64(0.0);
  }
  for (idx12 = 0; idx12 < 2; idx12++) {
    outC->_L7_Calculate_SM1[idx12] = kcg_lit_float64(0.0);
  }
  outC->_L4_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L5_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L6_Calculate_SM1 = kcg_lit_float64(0.0);
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L3_Calculate_SM1[idx13] = kcg_lit_float64(0.0);
  }
  outC->_L2_Calculate_SM1.Temperature = kcg_lit_float64(0.0);
  outC->_L2_Calculate_SM1.pH = kcg_lit_float64(0.0);
  outC->_L2_Calculate_SM1.Redox = kcg_lit_float64(0.0);
  for (idx14 = 0; idx14 < 2; idx14++) {
    outC->_L2_Calculate_SM1.Position[idx14] = kcg_lit_float64(0.0);
  }
  outC->_L2_Calculate_SM1.Time = kcg_lit_float64(0.0);
  for (idx15 = 0; idx15 < 3; idx15++) {
    outC->_L1_Calculate_SM1[idx15] = kcg_lit_float64(0.0);
  }
  outC->_L14_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L13_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L12_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L15_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L16_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L18_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L19_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L20_Calculate_SM1 = kcg_true;
  outC->_L21_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L22_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L23_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L24_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L25_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L26_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L27_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L28_Calculate_SM1 = kcg_lit_float64(0.0);
  for (idx17 = 0; idx17 < 10; idx17++) {
    for (idx16 = 0; idx16 < 3; idx16++) {
      outC->_L42_Calculate_SM1[idx17][idx16] = kcg_lit_float64(0.0);
    }
  }
  outC->_L43_Calculate_SM1 = kcg_lit_float64(0.0);
  outC->_L30_Calculate_SM1 = kcg_true;
  outC->_L29_Calculate_SM1 = kcg_true;
  outC->_L17_Calculate_SM1 = kcg_true;
  outC->notif_Normal_Station_SM1 = kcg_true;
  for (idx18 = 0; idx18 < 3; idx18++) {
    outC->_L1_Normal_Station_SM1[idx18] = kcg_lit_float64(0.0);
  }
  for (idx19 = 0; idx19 < 3; idx19++) {
    outC->_L2_Normal_Station_SM1[idx19] = kcg_lit_float64(0.0);
  }
  for (idx20 = 0; idx20 < 3; idx20++) {
    outC->_L3_Normal_Station_SM1[idx20] = kcg_lit_float64(0.0);
  }
  outC->_L7_Normal_Station_SM1 = kcg_lit_float64(0.0);
  outC->_L6_Normal_Station_SM1 = kcg_lit_float64(0.0);
  outC->_L5_Normal_Station_SM1 = kcg_lit_float64(0.0);
  outC->_L8_Normal_Station_SM1 = kcg_true;
  outC->_L9_Normal_Station_SM1 = kcg_true;
  outC->_L10_Normal_Station_SM1 = kcg_true;
  outC->_L11_Normal_Station_SM1 = kcg_true;
  outC->_L12_Normal_Station_SM1 = kcg_lit_float64(0.0);
  outC->_L1_Abs_3_float64 = kcg_true;
  outC->_L2_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->_L1_Abs_2_float64 = kcg_true;
  outC->_L2_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->_L1_Abs_1_float64 = kcg_true;
  outC->_L2_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->alarm = kcg_true;
  outC->Send_Data.Temperature = kcg_lit_float64(0.0);
  outC->Send_Data.pH = kcg_lit_float64(0.0);
  outC->Send_Data.Redox = kcg_lit_float64(0.0);
  for (idx21 = 0; idx21 < 2; idx21++) {
    outC->Send_Data.Position[idx21] = kcg_lit_float64(0.0);
  }
  outC->Send_Data.Time = kcg_lit_float64(0.0);
  /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */
  Vote_Alog_init(&outC->Context_Vote_Alog_1);
  /* SM1:Calculate:IfBlock1:else:_L15=(Push_Table#1)/ */
  Push_Table_init(&outC->Context_Push_Table_1);
  /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */
  Vote_Alog_init(&outC->Context_Vote_Alog_7);
  /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */
  Mean_10_Table_init(&outC->Context_Mean_10_Table_1);
  /* SM1:Calculate:_L4=(Vote_Alog#3)/ */
  Vote_Alog_init(&outC->Context_Vote_Alog_3);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  kcg_copy_Ten_Values_Table(&outC->store, (Ten_Values_Table *) &Normal_Value);
  outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Controller_reset(outC_Controller *outC)
{
  /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */
  Vote_Alog_reset(&outC->Context_Vote_Alog_1);
  /* SM1:Calculate:IfBlock1:else:_L15=(Push_Table#1)/ */
  Push_Table_reset(&outC->Context_Push_Table_1);
  /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */
  Vote_Alog_reset(&outC->Context_Vote_Alog_7);
  /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */
  Mean_10_Table_reset(&outC->Context_Mean_10_Table_1);
  /* SM1:Calculate:_L4=(Vote_Alog#3)/ */
  Vote_Alog_reset(&outC->Context_Vote_Alog_3);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  kcg_copy_Ten_Values_Table(&outC->store, (Ten_Values_Table *) &Normal_Value);
  outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Controller/
  @1: (math::Abs#1)
  @2: (math::Abs#2)
  @3: (math::Abs#3)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Controller.c
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

