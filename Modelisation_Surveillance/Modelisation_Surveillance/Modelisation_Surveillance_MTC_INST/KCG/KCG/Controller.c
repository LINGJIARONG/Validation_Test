/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Controller.h"

/* Controller/ */
void Controller(inC_Controller *inC, outC_Controller *outC)
{
  kcg_float64 tmp;
  kcg_float64 tmp1;
  kcg_float64 tmp2;
  kcg_bool tmp3;
  kcg_bool tmp4;
  /* @42/MTC_AC_3/ */
  kcg_bool MTC_AC_3_Abs_1_float64;
  /* @42/MTC_AC_2/, @42/_L1/ */
  kcg_bool MTC_AC_2_Abs_1_float64;
  /* @42/MTC_AC_4/,
     @42/MTC_CC_1_T/,
     @42/MTC_CC_3_A/,
     @43/MTC_CC_1_T/,
     @43/MTC_CC_3_A/ */
  kcg_bool MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_1;
  /* @40/MTC_AC_3/ */
  kcg_bool MTC_AC_3_Abs_2_float64;
  /* @40/MTC_AC_2/, @40/_L1/ */
  kcg_bool MTC_AC_2_Abs_2_float64;
  /* @40/MTC_AC_4/,
     @40/MTC_CC_1_T/,
     @40/MTC_CC_3_A/,
     @41/MTC_CC_1_T/,
     @41/MTC_CC_3_A/ */
  kcg_bool _5_MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_2;
  /* @38/MTC_AC_3/ */
  kcg_bool MTC_AC_3_Abs_3_float64;
  /* @38/MTC_AC_2/, @38/_L1/ */
  kcg_bool MTC_AC_2_Abs_3_float64;
  /* @38/MTC_AC_4/,
     @38/MTC_CC_1_T/,
     @38/MTC_CC_3_A/,
     @39/MTC_CC_1_T/,
     @39/MTC_CC_3_A/ */
  kcg_bool _6_MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3;
  /* @16/MTC_AC/, @16/MTC_AC_1/, @16/MTC_AC_3/, @16/MTC_AC_7/ */
  kcg_bool MTC_AC_7_Controller_SM1_Pollution_2_MTC_INST_2;
  /* @16/MTC_AC_6/ */
  kcg_bool MTC_AC_6_Controller_SM1_Pollution_2_MTC_INST_2;
  /* @16/MTC_AC_2/ */
  kcg_bool MTC_AC_2_Controller_SM1_Pollution_2_MTC_INST_2;
  /* @9/MTC_AC/, SM1: */
  kcg_bool MTC_AC_Controller_store_last_MTC_INST_1;
  /* @45/MTC_AC/,
     @45/MTC_AC_1/,
     @45/MTC_AC_3/,
     @45/MTC_guard/,
     SM1:Normal_Station:<2> */
  kcg_bool tr_2_guard_Normal_Station_SM1;
  /* SM1:Normal_Station:_L11/ */
  kcg_bool _L11_Normal_Station_SM1;
  /* SM1:Normal_Station:_L10/ */
  kcg_bool _L10_Normal_Station_SM1;
  /* SM1:Normal_Station:_L9/ */
  kcg_bool _L9_Normal_Station_SM1;
  /* SM1:Normal_Station:MTC_AC_11/ */
  kcg_bool MTC_AC_11_Normal_Station_SM1;
  /* SM1:Normal_Station:MTC_AC_10/ */
  kcg_bool MTC_AC_10_Normal_Station_SM1;
  /* SM1:Normal_Station:MTC_AC_9/ */
  kcg_bool MTC_AC_9_Normal_Station_SM1;
  /* @25/MTC_AC/,
     @25/MTC_AC_1/,
     @25/MTC_AC_3/,
     @25/MTC_guard/,
     SM1:Calculate:<2> */
  kcg_bool tr_2_guard_Calculate_SM1;
  /* SM1:Calculate:_L17/ */
  kcg_bool _L17_Calculate_SM1;
  /* SM1:Calculate:_L29/ */
  kcg_bool _L29_Calculate_SM1;
  /* SM1:Calculate:_L30/ */
  kcg_bool _L30_Calculate_SM1;
  /* @38/A_Input/, @38/_L5/, SM1:Calculate:_L24/ */
  kcg_float64 _L24_Calculate_SM1;
  /* @40/A_Input/, @40/_L5/, SM1:Calculate:_L23/ */
  kcg_float64 _L23_Calculate_SM1;
  /* @42/A_Input/, @42/_L5/, SM1:Calculate:_L18/ */
  kcg_float64 _L18_Calculate_SM1;
  /* @3/newData/, SM1:Calculate:IfBlock1:else:_L19/ */
  Data _L19_else_IfBlock1_Calculate_SM1;
  /* @16/MTC_guard/, SM1:Pollution:<2> */
  kcg_bool tr_2_guard_Pollution_SM1;
  /* MTC_sig_fire_9/ */
  kcg_bool MTC_sig_fire_9;
  /* store/ */
  Ten_Values_Table store;

  kcg_copy_Ten_Values_Table(&store, &outC->store);
  outC->SM1_state_act = outC->SM1_state_nxt;
  MTC_AC_Controller_store_last_MTC_INST_1 = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Timer_SM1 :
      tmp4 = kcg_false;
      tmp3 = kcg_true;
      outC->tr_1_clock_Timer_SM1 = inC->Time - kcg_lit_float64(0.0) >=
        kcg_lit_float64(1.0) / inC->Frequency;
      /* SM1:Timer:<1> */
      if (outC->tr_1_clock_Timer_SM1) {
        MTC_sig_fire_9 = kcg_true;
      }
      else {
        MTC_sig_fire_9 = kcg_false;
      }
      if (MTC_AC_Controller_store_last_MTC_INST_1) {
        /* @15/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_1_STATE_MTC_OBS_5);
        /* @14/MTC_ALL1=(MTC::LATCHALL03#1)/ */
        LATCHALL03_MTC_reset(
          &outC->Context_LATCHALL03_MTC_1_Controller_PATHS17_MTC_OBS_1);
        /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC_reset(
          &outC->Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_7);
        /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(
          &outC->_15_Context_LATCHALL02_MTC_1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1);
      }
      /* @15/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_9,
        &outC->Context_LATCHALL02_MTC_1_STATE_MTC_OBS_5);
      outC->MTC_ALL1_STATE_MTC_OBS_5 =
        outC->Context_LATCHALL02_MTC_1_STATE_MTC_OBS_5.Output1;
      /* @14/MTC_ALL1=(MTC::LATCHALL03#1)/ */
      LATCHALL03_MTC(
        kcg_true,
        outC->tr_1_clock_Timer_SM1,
        (kcg_bool) !outC->tr_1_clock_Timer_SM1,
        &outC->Context_LATCHALL03_MTC_1_Controller_PATHS17_MTC_OBS_1);
      outC->MTC_ALL1_Controller_PATHS17_MTC_OBS_1 =
        outC->Context_LATCHALL03_MTC_1_Controller_PATHS17_MTC_OBS_1.Output1;
      /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_Timer_SM1,
        (kcg_bool) !outC->tr_1_clock_Timer_SM1,
        &outC->_15_Context_LATCHALL02_MTC_1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1);
      outC->MTC_ALL1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1 =
        outC->_15_Context_LATCHALL02_MTC_1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1.Output1;
      kcg_copy_Ten_Values_Table(&outC->store, &store);
      kcg_copy_Statation_data(&outC->Send_Data, (Statation_data *) &Normal_Send_Data);
      if (outC->tr_1_clock_Timer_SM1) {
        /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_7);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_7 =
          outC->Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_7.Output1;
        outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Timer_SM1;
      }
      outC->SM1_reset_nxt = outC->tr_1_clock_Timer_SM1;
      break;
    case SSM_st_Pollution_SM1 :
      tmp4 = kcg_false;
      tmp3 = kcg_true;
      outC->tr_1_clock_Pollution_SM1 = inC->Stop;
      MTC_AC_2_Controller_SM1_Pollution_2_MTC_INST_2 = inC->Frequency >
        kcg_lit_float64(0.);
      MTC_AC_7_Controller_SM1_Pollution_2_MTC_INST_2 = !inC->Stop;
      tr_2_guard_Pollution_SM1 =
        MTC_AC_7_Controller_SM1_Pollution_2_MTC_INST_2 &
        MTC_AC_2_Controller_SM1_Pollution_2_MTC_INST_2;
      /* SM1:Pollution:<1> */
      if (outC->tr_1_clock_Pollution_SM1) {
        MTC_sig_fire_9 = kcg_true;
      }
      else {
        outC->tr_2_clock_Pollution_SM1 = tr_2_guard_Pollution_SM1;
        /* SM1:Pollution:<2> */
        if (outC->tr_2_clock_Pollution_SM1) {
          MTC_sig_fire_9 = kcg_true;
        }
        else {
          MTC_sig_fire_9 = kcg_false;
        }
      }
      if (MTC_AC_Controller_store_last_MTC_INST_1) {
        /* @24/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(
          &outC->_20_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_4);
        /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC_reset(
          &outC->Context_LATCHALL01_MTC_1_Controller_PATHS15_MTC_OBS_1);
        /* @22/MTC_ALL1=(MTC::LATCHALL03#1)/ */
        LATCHALL03_MTC_reset(
          &outC->_19_Context_LATCHALL03_MTC_1_Controller_PATHS16_MTC_OBS_1);
        /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC_reset(
          &outC->_18_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_5);
        /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC_reset(
          &outC->_17_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_6);
        /* @19/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(
          &outC->_16_Context_LATCHALL02_MTC_1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1);
        /* @17/MTC_ALL1=(MTC::LATCHALL04#1)/ */
        LATCHALL04_MTC_reset(
          &outC->Context_LATCHALL04_MTC_1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2);
      }
      /* @24/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_9,
        &outC->_20_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_4);
      outC->MTC_ALL1_STATE_MTC_OBS_4 =
        outC->_20_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_4.Output1;
      /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        kcg_false,
        &outC->Context_LATCHALL01_MTC_1_Controller_PATHS15_MTC_OBS_1);
      outC->MTC_ALL1_Controller_PATHS15_MTC_OBS_1 =
        outC->Context_LATCHALL01_MTC_1_Controller_PATHS15_MTC_OBS_1.Output1;
      /* @22/MTC_ALL1=(MTC::LATCHALL03#1)/ */
      LATCHALL03_MTC(
        kcg_false,
        kcg_false,
        kcg_false,
        &outC->_19_Context_LATCHALL03_MTC_1_Controller_PATHS16_MTC_OBS_1);
      outC->MTC_ALL1_Controller_PATHS16_MTC_OBS_1 =
        outC->_19_Context_LATCHALL03_MTC_1_Controller_PATHS16_MTC_OBS_1.Output1;
      if (outC->tr_1_clock_Pollution_SM1) {
        /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_18_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_5);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_5 =
          outC->_18_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_5.Output1;
      }
      else if (outC->tr_2_clock_Pollution_SM1) {
        /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_17_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_6);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_6 =
          outC->_17_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_6.Output1;
      }
      /* @19/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        inC->Stop,
        MTC_AC_7_Controller_SM1_Pollution_2_MTC_INST_2,
        &outC->_16_Context_LATCHALL02_MTC_1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1);
      outC->MTC_ALL1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1 =
        outC->_16_Context_LATCHALL02_MTC_1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1.Output1;
      MTC_AC_6_Controller_SM1_Pollution_2_MTC_INST_2 =
        MTC_AC_2_Controller_SM1_Pollution_2_MTC_INST_2 &
        MTC_AC_7_Controller_SM1_Pollution_2_MTC_INST_2;
      /* @17/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        (kcg_bool) (inC->Stop & MTC_AC_6_Controller_SM1_Pollution_2_MTC_INST_2),
        (kcg_bool)
          (MTC_AC_7_Controller_SM1_Pollution_2_MTC_INST_2 &
            MTC_AC_6_Controller_SM1_Pollution_2_MTC_INST_2),
        MTC_AC_6_Controller_SM1_Pollution_2_MTC_INST_2,
        (kcg_bool)
          ((!MTC_AC_2_Controller_SM1_Pollution_2_MTC_INST_2) &
            MTC_AC_7_Controller_SM1_Pollution_2_MTC_INST_2),
        &outC->Context_LATCHALL04_MTC_1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2);
      outC->MTC_ALL1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2 =
        outC->Context_LATCHALL04_MTC_1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2.Output1;
      kcg_copy_Ten_Values_Table(&outC->store, &store);
      kcg_copy_Statation_data(&outC->Send_Data, (Statation_data *) &Normal_Send_Data);
      if (inC->Stop) {
        outC->SM1_state_nxt = SSM_st_Defaillance_Station_SM1;
      }
      else if (tr_2_guard_Pollution_SM1) {
        outC->SM1_state_nxt = SSM_st_Timer_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Pollution_SM1;
      }
      outC->SM1_reset_nxt = inC->Stop | tr_2_guard_Pollution_SM1;
      break;
    case SSM_st_Calculate_SM1 :
      tmp4 = kcg_true;
      /* SM1:Calculate:_L4=(Vote_Alog#3)/ */
      Vote_Alog(
        &inC->Sensor_pH,
        &inC->Sensor_Temperature,
        &inC->Sensor_Redox,
        kcg_true,
        kcg_true,
        &outC->Context_Vote_Alog_3);
      /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */
      Mean_10_Table(&store, kcg_true, kcg_true, &outC->Context_Mean_10_Table_1);
      _L24_Calculate_SM1 = outC->Context_Mean_10_Table_1.Redox -
        outC->Context_Vote_Alog_3.Redox;
      MTC_AC_2_Abs_3_float64 = kcg_lit_float64(0.) <= _L24_Calculate_SM1;
      /* @38/_L2= */
      if (MTC_AC_2_Abs_3_float64) {
        tmp = _L24_Calculate_SM1;
      }
      else {
        tmp = - _L24_Calculate_SM1;
      }
      _L30_Calculate_SM1 = outC->Context_Mean_10_Table_1.Redox *
        kcg_lit_float64(0.5) < tmp;
      _L23_Calculate_SM1 = outC->Context_Mean_10_Table_1.pH -
        outC->Context_Vote_Alog_3.pH;
      MTC_AC_2_Abs_2_float64 = kcg_lit_float64(0.) <= _L23_Calculate_SM1;
      /* @40/_L2= */
      if (MTC_AC_2_Abs_2_float64) {
        tmp1 = _L23_Calculate_SM1;
      }
      else {
        tmp1 = - _L23_Calculate_SM1;
      }
      _L29_Calculate_SM1 = outC->Context_Mean_10_Table_1.pH * kcg_lit_float64(
          0.5) < tmp1;
      _L18_Calculate_SM1 = outC->Context_Mean_10_Table_1.Temperature -
        outC->Context_Vote_Alog_3.Temperature;
      MTC_AC_2_Abs_1_float64 = kcg_lit_float64(0.) <= _L18_Calculate_SM1;
      /* @42/_L2= */
      if (MTC_AC_2_Abs_1_float64) {
        tmp2 = _L18_Calculate_SM1;
      }
      else {
        tmp2 = - _L18_Calculate_SM1;
      }
      _L17_Calculate_SM1 = outC->Context_Mean_10_Table_1.Temperature *
        kcg_lit_float64(0.5) < tmp2;
      outC->tr_1_clock_Calculate_SM1 = _L17_Calculate_SM1 | _L29_Calculate_SM1 |
        _L30_Calculate_SM1;
      tr_2_guard_Calculate_SM1 = !outC->tr_1_clock_Calculate_SM1;
      MTC_AC_3_Abs_1_float64 = !MTC_AC_2_Abs_1_float64;
      outC->every41 = (!_L29_Calculate_SM1) & (!_L30_Calculate_SM1);
      MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_1 = MTC_AC_2_Abs_1_float64 &
        outC->every41;
      /* @43/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_1,
        (kcg_bool) (MTC_AC_3_Abs_1_float64 & outC->every41),
        MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_1,
        (kcg_bool) (MTC_AC_3_Abs_1_float64 & outC->every41),
        &outC->_30_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
      outC->MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1 =
        outC->_30_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1.Output1;
      MTC_AC_3_Abs_2_float64 = !MTC_AC_2_Abs_2_float64;
      outC->every42 = (!_L17_Calculate_SM1) & (!_L30_Calculate_SM1);
      _5_MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_2 = MTC_AC_2_Abs_2_float64 &
        outC->every42;
      /* @41/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        _5_MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_2,
        (kcg_bool) (MTC_AC_3_Abs_2_float64 & outC->every42),
        _5_MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_2,
        (kcg_bool) (MTC_AC_3_Abs_2_float64 & outC->every42),
        &outC->_29_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
      outC->_1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2 =
        outC->_29_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2.Output1;
      MTC_AC_3_Abs_3_float64 = !MTC_AC_2_Abs_3_float64;
      outC->every43 = (!_L17_Calculate_SM1) & (!_L29_Calculate_SM1);
      _6_MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3 = MTC_AC_2_Abs_3_float64 &
        outC->every43;
      /* @39/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        _6_MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3,
        (kcg_bool) (MTC_AC_3_Abs_3_float64 & outC->every43),
        _6_MTC_CC_3_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3,
        (kcg_bool) (MTC_AC_3_Abs_3_float64 & outC->every43),
        &outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
      outC->_2_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3 =
        outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3.Output1;
      /* @37/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_Calculate_SM1,
        tr_2_guard_Calculate_SM1,
        &outC->_28_Context_LATCHALL02_MTC_1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1);
      outC->MTC_ALL1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1 =
        outC->_28_Context_LATCHALL02_MTC_1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1.Output1;
      outC->IfBlock1_clock_Calculate_SM1 = outC->tr_1_clock_Calculate_SM1;
      /* SM1:Calculate:<1> */
      if (outC->tr_1_clock_Calculate_SM1) {
        MTC_sig_fire_9 = kcg_true;
        /* @30/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_24_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_3);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_3 =
          outC->_24_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_3.Output1;
        outC->SM1_state_nxt = SSM_st_Pollution_SM1;
      }
      else {
        outC->tr_2_clock_Calculate_SM1 = tr_2_guard_Calculate_SM1;
        /* SM1:Calculate:<2> */
        if (outC->tr_2_clock_Calculate_SM1) {
          MTC_sig_fire_9 = kcg_true;
          /* @29/MTC_ALL1=(MTC::LATCHALL01#1)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_23_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_4);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_4 =
            outC->_23_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_4.Output1;
        }
        else {
          MTC_sig_fire_9 = kcg_false;
        }
        if (tr_2_guard_Calculate_SM1) {
          outC->SM1_state_nxt = SSM_st_Timer_SM1;
        }
        else {
          outC->SM1_state_nxt = SSM_st_Calculate_SM1;
        }
      }
      /* @33/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_9,
        &outC->_26_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_3);
      outC->MTC_ALL1_STATE_MTC_OBS_3 =
        outC->_26_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_3.Output1;
      /* @32/MTC_ALL1=(MTC::LATCHALL06#1)/ */
      LATCHALL06_MTC(
        (kcg_bool) (_L17_Calculate_SM1 & outC->every41),
        (kcg_bool) ((!_L17_Calculate_SM1) & outC->every41),
        (kcg_bool) (_L29_Calculate_SM1 & outC->every42),
        (kcg_bool) ((!_L29_Calculate_SM1) & outC->every42),
        (kcg_bool) (_L30_Calculate_SM1 & outC->every43),
        (kcg_bool) ((!_L30_Calculate_SM1) & outC->every43),
        &outC->Context_LATCHALL06_MTC_1_Controller_PATHS13_MTC_OBS_1);
      outC->MTC_ALL1_Controller_PATHS13_MTC_OBS_1 =
        outC->Context_LATCHALL06_MTC_1_Controller_PATHS13_MTC_OBS_1.Output1;
      /* @31/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        kcg_false,
        &outC->_25_Context_LATCHALL01_MTC_1_Controller_PATHS14_MTC_OBS_1);
      outC->MTC_ALL1_Controller_PATHS14_MTC_OBS_1 =
        outC->_25_Context_LATCHALL01_MTC_1_Controller_PATHS14_MTC_OBS_1.Output1;
      /* @28/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_Calculate_SM1,
        tr_2_guard_Calculate_SM1,
        &outC->_22_Context_LATCHALL02_MTC_1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1);
      outC->MTC_ALL1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1 =
        outC->_22_Context_LATCHALL02_MTC_1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1.Output1;
      /* @26/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        (kcg_bool) (outC->tr_1_clock_Calculate_SM1 & tr_2_guard_Calculate_SM1),
        tr_2_guard_Calculate_SM1,
        &outC->_21_Context_LATCHALL02_MTC_1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2);
      outC->MTC_ALL1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2 =
        outC->_21_Context_LATCHALL02_MTC_1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2.Output1;
      outC->every40 = kcg_true;
      outC->every39 = kcg_true;
      outC->Send_Data.Temperature = outC->Context_Vote_Alog_3.Temperature;
      outC->Send_Data.pH = outC->Context_Vote_Alog_3.pH;
      outC->Send_Data.Redox = outC->Context_Vote_Alog_3.Redox;
      kcg_copy_position(&outC->Send_Data.Position, &inC->Sensor_GPS);
      outC->Send_Data.Time = inC->Time;
      if (outC->every43) {
        /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3);
        outC->MTC_ALL1_math_Abs_MTC_OBS_3 =
          outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3.Output1;
      }
      if (outC->every42) {
        /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2);
        outC->MTC_ALL1_math_Abs_MTC_OBS_2 =
          outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2.Output1;
      }
      if (outC->every41) {
        /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1);
        outC->MTC_ALL1_math_Abs_MTC_OBS_1 =
          outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1.Output1;
      }
      /* @5/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
      _3_GenericInputChanged_MTC_Utils_float64310(
        &store,
        &outC->Context_GenericInputChanged_1_Mean_10_Table_1_MTC_OBS_1);
      /* @5/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->Context_GenericInputChanged_1_Mean_10_Table_1_MTC_OBS_1.Output,
        &outC->Context_LATCHALL02_MTC_1_Mean_10_Table_1_MTC_OBS_1);
      outC->MTC_ALL1_Mean_10_Table_1_MTC_OBS_1_float64310 =
        outC->Context_LATCHALL02_MTC_1_Mean_10_Table_1_MTC_OBS_1.Output1;
      /* @4/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
      _2_GenericInputChanged_MTC_Utils_float643(
        &inC->Sensor_pH,
        &outC->_12_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_3);
      /* @4/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
      _2_GenericInputChanged_MTC_Utils_float643(
        &inC->Sensor_Temperature,
        &outC->_11_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_3);
      /* @4/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
      _2_GenericInputChanged_MTC_Utils_float643(
        &inC->Sensor_Redox,
        &outC->_10_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_3);
      /* @4/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        kcg_true,
        outC->_12_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_3.Output,
        outC->_11_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_3.Output,
        outC->_10_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_3.Output,
        &outC->_9_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_3);
      outC->MTC_ALL1_Vote_Alog_111_MTC_OBS_3_float643_float643_float643 =
        outC->_9_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_3.Output1;
      outC->alarm = outC->tr_1_clock_Calculate_SM1;
      /* SM1:Calculate:IfBlock1: */
      if (outC->IfBlock1_clock_Calculate_SM1) {
        /* @35/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
        outC->MTC_ALL1_CONTROL_MTC_OBS_2 =
          outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2.Output1;
        tmp3 = kcg_true;
        kcg_copy_Ten_Values_Table(&outC->store, &store);
      }
      else {
        /* @34/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
        outC->MTC_ALL1_CONTROL_MTC_OBS_1 =
          outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1.Output1;
        tmp3 = kcg_false;
        /* @3/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
        _3_GenericInputChanged_MTC_Utils_float64310(
          &store,
          &outC->Context_GenericInputChanged_1_Push_Table_11_MTC_OBS_1);
        /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */
        Vote_Alog(
          &inC->Sensor_Temperature,
          &inC->Sensor_pH,
          &inC->Sensor_Redox,
          kcg_true,
          kcg_true,
          &outC->Context_Vote_Alog_7);
        _L19_else_IfBlock1_Calculate_SM1[0] = outC->Context_Vote_Alog_7.pH;
        _L19_else_IfBlock1_Calculate_SM1[1] = outC->Context_Vote_Alog_7.Temperature;
        _L19_else_IfBlock1_Calculate_SM1[2] = outC->Context_Vote_Alog_7.Redox;
        /* @3/MTC_newData_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
        _2_GenericInputChanged_MTC_Utils_float643(
          &_L19_else_IfBlock1_Calculate_SM1,
          &outC->Context_GenericInputChanged_2_Push_Table_11_MTC_OBS_1);
        /* @3/MTC_ALL1=(MTC::LATCHALL03#1)/ */
        LATCHALL03_MTC(
          kcg_true,
          outC->Context_GenericInputChanged_1_Push_Table_11_MTC_OBS_1.Output,
          outC->Context_GenericInputChanged_2_Push_Table_11_MTC_OBS_1.Output,
          &outC->Context_LATCHALL03_MTC_1_Push_Table_11_MTC_OBS_1);
        outC->MTC_ALL1_Push_Table_11_MTC_OBS_1_float643_float64310 =
          outC->Context_LATCHALL03_MTC_1_Push_Table_11_MTC_OBS_1.Output1;
        /* @2/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
        _2_GenericInputChanged_MTC_Utils_float643(
          &inC->Sensor_Temperature,
          &outC->_8_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_7);
        /* @2/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
        _2_GenericInputChanged_MTC_Utils_float643(
          &inC->Sensor_pH,
          &outC->_7_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_7);
        /* @2/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
        _2_GenericInputChanged_MTC_Utils_float643(
          &inC->Sensor_Redox,
          &outC->_6_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_7);
        /* @2/MTC_ALL1=(MTC::LATCHALL04#1)/ */
        LATCHALL04_MTC(
          kcg_true,
          outC->_8_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_7.Output,
          outC->_7_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_7.Output,
          outC->_6_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_7.Output,
          &outC->_5_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_7);
        outC->_3_MTC_ALL1_Vote_Alog_111_MTC_OBS_7_float643_float643_float643 =
          outC->_5_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_7.Output1;
        outC->every44 = kcg_true;
        /* SM1:Calculate:IfBlock1:else:_L15=(Push_Table#1)/ */
        Push_Table(
          &store,
          &_L19_else_IfBlock1_Calculate_SM1,
          kcg_true,
          kcg_true,
          &outC->store);
      }
      outC->SM1_reset_nxt = outC->tr_1_clock_Calculate_SM1 | tr_2_guard_Calculate_SM1;
      break;
    case SSM_st_Defaillance_Station_SM1 :
      tmp4 = kcg_false;
      tmp3 = kcg_true;
      if (MTC_AC_Controller_store_last_MTC_INST_1) {
        /* @44/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(
          &outC->_31_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_2);
      }
      /* @44/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !kcg_false,
        &outC->_31_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_2);
      outC->MTC_ALL1_STATE_MTC_OBS_2 =
        outC->_31_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_2.Output1;
      outC->SM1_reset_nxt = kcg_false;
      kcg_copy_Ten_Values_Table(&outC->store, &store);
      kcg_copy_Statation_data(&outC->Send_Data, (Statation_data *) &Normal_Send_Data);
      outC->SM1_state_nxt = SSM_st_Defaillance_Station_SM1;
      break;
    case SSM_st_Normal_Station_SM1 :
      tmp4 = kcg_false;
      tmp3 = kcg_true;
      if (MTC_AC_Controller_store_last_MTC_INST_1) {
        /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */
        Vote_Alog_reset(&outC->Context_Vote_Alog_1);
        /* @54/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(
          &outC->_38_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_1);
        /* @53/MTC_ALL1=(MTC::LATCHALL03#1)/ */
        LATCHALL03_MTC_reset(
          &outC->_37_Context_LATCHALL03_MTC_1_Controller_PATHS9_MTC_OBS_1);
        /* @52/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(
          &outC->_36_Context_LATCHALL02_MTC_1_Controller_PATHS10_MTC_OBS_1);
        /* @51/MTC_ALL1=(MTC::LATCHALL07#1)/ */
        LATCHALL07_MTC_reset(
          &outC->Context_LATCHALL07_MTC_1_Controller_PATHS11_MTC_OBS_1);
        /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC_reset(
          &outC->_35_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_1);
        /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC_reset(
          &outC->_34_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_2);
        /* @48/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(
          &outC->_33_Context_LATCHALL02_MTC_1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1);
        /* @46/MTC_ALL1=(MTC::LATCHALL02#1)/ */
        LATCHALL02_MTC_reset(
          &outC->_32_Context_LATCHALL02_MTC_1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1);
        /* @1/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
        _2_GenericInputChanged_reset_MTC_Utils_float643(
          &outC->Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_1);
        /* @1/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
        _2_GenericInputChanged_reset_MTC_Utils_float643(
          &outC->Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_1);
        /* @1/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
        _2_GenericInputChanged_reset_MTC_Utils_float643(
          &outC->Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_1);
        /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
        LATCHALL04_MTC_reset(
          &outC->Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_1);
      }
      /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */
      Vote_Alog(
        &inC->Sensor_pH,
        &inC->Sensor_Temperature,
        &inC->Sensor_Redox,
        kcg_true,
        kcg_true,
        &outC->Context_Vote_Alog_1);
      _L11_Normal_Station_SM1 = Notification_Defaillance ==
        outC->Context_Vote_Alog_1.Redox;
      _L10_Normal_Station_SM1 = outC->Context_Vote_Alog_1.Temperature ==
        Notification_Defaillance;
      _L9_Normal_Station_SM1 = outC->Context_Vote_Alog_1.pH ==
        Notification_Defaillance;
      outC->tr_1_clock_Normal_Station_SM1 = _L9_Normal_Station_SM1 |
        _L10_Normal_Station_SM1 | _L11_Normal_Station_SM1;
      tr_2_guard_Normal_Station_SM1 = !outC->tr_1_clock_Normal_Station_SM1;
      /* SM1:Normal_Station:<1> */
      if (outC->tr_1_clock_Normal_Station_SM1) {
        MTC_sig_fire_9 = kcg_true;
      }
      else {
        outC->tr_2_clock_Normal_Station_SM1 = tr_2_guard_Normal_Station_SM1;
        /* SM1:Normal_Station:<2> */
        if (outC->tr_2_clock_Normal_Station_SM1) {
          MTC_sig_fire_9 = kcg_true;
        }
        else {
          MTC_sig_fire_9 = kcg_false;
        }
      }
      /* @54/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_9,
        &outC->_38_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_1);
      outC->MTC_ALL1_STATE_MTC_OBS_1 =
        outC->_38_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_1.Output1;
      /* @53/MTC_ALL1=(MTC::LATCHALL03#1)/ */
      LATCHALL03_MTC(
        kcg_true,
        outC->tr_1_clock_Normal_Station_SM1,
        tr_2_guard_Normal_Station_SM1,
        &outC->_37_Context_LATCHALL03_MTC_1_Controller_PATHS9_MTC_OBS_1);
      outC->MTC_ALL1_Controller_PATHS9_MTC_OBS_1 =
        outC->_37_Context_LATCHALL03_MTC_1_Controller_PATHS9_MTC_OBS_1.Output1;
      /* @52/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_Normal_Station_SM1,
        tr_2_guard_Normal_Station_SM1,
        &outC->_36_Context_LATCHALL02_MTC_1_Controller_PATHS10_MTC_OBS_1);
      outC->MTC_ALL1_Controller_PATHS10_MTC_OBS_1 =
        outC->_36_Context_LATCHALL02_MTC_1_Controller_PATHS10_MTC_OBS_1.Output1;
      MTC_AC_9_Normal_Station_SM1 = (!_L10_Normal_Station_SM1) &
        (!_L11_Normal_Station_SM1);
      MTC_AC_10_Normal_Station_SM1 = (!_L9_Normal_Station_SM1) &
        (!_L11_Normal_Station_SM1);
      MTC_AC_11_Normal_Station_SM1 = (!_L9_Normal_Station_SM1) &
        (!_L10_Normal_Station_SM1);
      /* @51/MTC_ALL1=(MTC::LATCHALL07#1)/ */
      LATCHALL07_MTC(
        kcg_true,
        (kcg_bool) (_L9_Normal_Station_SM1 & MTC_AC_9_Normal_Station_SM1),
        (kcg_bool) ((!_L9_Normal_Station_SM1) & MTC_AC_9_Normal_Station_SM1),
        (kcg_bool) (_L10_Normal_Station_SM1 & MTC_AC_10_Normal_Station_SM1),
        (kcg_bool) ((!_L10_Normal_Station_SM1) & MTC_AC_10_Normal_Station_SM1),
        (kcg_bool) (_L11_Normal_Station_SM1 & MTC_AC_11_Normal_Station_SM1),
        (kcg_bool) ((!_L11_Normal_Station_SM1) & MTC_AC_11_Normal_Station_SM1),
        &outC->Context_LATCHALL07_MTC_1_Controller_PATHS11_MTC_OBS_1);
      outC->MTC_ALL1_Controller_PATHS11_MTC_OBS_1 =
        outC->Context_LATCHALL07_MTC_1_Controller_PATHS11_MTC_OBS_1.Output1;
      /* @48/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_Normal_Station_SM1,
        tr_2_guard_Normal_Station_SM1,
        &outC->_33_Context_LATCHALL02_MTC_1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1);
      outC->MTC_ALL1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1 =
        outC->_33_Context_LATCHALL02_MTC_1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1.Output1;
      /* @46/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        (kcg_bool)
          (outC->tr_1_clock_Normal_Station_SM1 & tr_2_guard_Normal_Station_SM1),
        tr_2_guard_Normal_Station_SM1,
        &outC->_32_Context_LATCHALL02_MTC_1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1);
      outC->MTC_ALL1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1 =
        outC->_32_Context_LATCHALL02_MTC_1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1.Output1;
      outC->SM1_reset_nxt = kcg_false;
      outC->every = kcg_true;
      /* @1/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
      _2_GenericInputChanged_MTC_Utils_float643(
        &inC->Sensor_pH,
        &outC->Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_1);
      /* @1/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
      _2_GenericInputChanged_MTC_Utils_float643(
        &inC->Sensor_Temperature,
        &outC->Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_1);
      /* @1/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
      _2_GenericInputChanged_MTC_Utils_float643(
        &inC->Sensor_Redox,
        &outC->Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_1);
      /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        kcg_true,
        outC->Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_1.Output,
        outC->Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_1.Output,
        outC->Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_1.Output,
        &outC->Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_1);
      outC->_4_MTC_ALL1_Vote_Alog_111_MTC_OBS_1_float643_float643_float643 =
        outC->Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_1.Output1;
      outC->alarm = outC->tr_1_clock_Normal_Station_SM1;
      kcg_copy_Ten_Values_Table(&outC->store, &store);
      kcg_copy_Statation_data(&outC->Send_Data, (Statation_data *) &Normal_Send_Data);
      if (outC->tr_1_clock_Normal_Station_SM1) {
        /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_35_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_1);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_1 =
          outC->_35_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_1.Output1;
        outC->SM1_state_nxt = SSM_st_Defaillance_Station_SM1;
      }
      else {
        if (outC->tr_2_clock_Normal_Station_SM1) {
          /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_34_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_2);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_2 =
            outC->_34_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_2.Output1;
        }
        if (tr_2_guard_Normal_Station_SM1) {
          outC->SM1_state_nxt = SSM_st_Calculate_SM1;
        }
        else {
          outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
        }
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  MTC_AC_Controller_store_last_MTC_INST_1 = tmp3 | tmp4;
  /* @10/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC(
    (kcg_bool) (MTC_AC_Controller_store_last_MTC_INST_1 & outC->init),
    (kcg_bool) (MTC_AC_Controller_store_last_MTC_INST_1 & (!outC->init)),
    &outC->Context_LATCHALL02_MTC_1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1);
  outC->init = kcg_false;
  outC->MTC_ALL1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1 =
    outC->Context_LATCHALL02_MTC_1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1.Output1;
}

#ifndef KCG_USER_DEFINED_INIT
void Controller_init(outC_Controller *outC)
{
  kcg_size idx;

  outC->SM1_reset_nxt = kcg_false;
  outC->alarm = kcg_true;
  outC->init = kcg_true;
  outC->tr_1_clock_Normal_Station_SM1 = kcg_true;
  outC->every = kcg_true;
  outC->tr_2_clock_Normal_Station_SM1 = kcg_true;
  outC->IfBlock1_clock_Calculate_SM1 = kcg_true;
  outC->tr_1_clock_Calculate_SM1 = kcg_true;
  outC->every39 = kcg_true;
  outC->every40 = kcg_true;
  outC->every41 = kcg_true;
  outC->every42 = kcg_true;
  outC->every43 = kcg_true;
  outC->every44 = kcg_true;
  outC->tr_2_clock_Calculate_SM1 = kcg_true;
  outC->tr_1_clock_Pollution_SM1 = kcg_true;
  outC->tr_2_clock_Pollution_SM1 = kcg_true;
  outC->tr_1_clock_Timer_SM1 = kcg_true;
  outC->SM1_state_act = SSM_st_Normal_Station_SM1;
  Result_MTC_init(
    &outC->_4_MTC_ALL1_Vote_Alog_111_MTC_OBS_1_float643_float643_float643);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_Vote_Alog_111_MTC_OBS_7_float643_float643_float643);
  Result_MTC_init(&outC->MTC_ALL1_Push_Table_11_MTC_OBS_1_float643_float64310);
  Result_MTC_init(
    &outC->MTC_ALL1_Vote_Alog_111_MTC_OBS_3_float643_float643_float643);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_1_MTC_OBS_1_float64310);
  Result_MTC_init(&outC->MTC_ALL1_math_Abs_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_math_Abs_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_math_Abs_MTC_OBS_3);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_7);
  Result_MTC_init(&outC->MTC_ALL1_Controller_PATHS17_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_5);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_6);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_5);
  Result_MTC_init(&outC->MTC_ALL1_Controller_PATHS16_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Controller_PATHS15_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_4);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_4);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_3);
  Result_MTC_init(&outC->MTC_ALL1_Controller_PATHS14_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Controller_PATHS13_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_3);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_2);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1);
  Result_MTC_init(&outC->_2_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
  Result_MTC_init(&outC->_1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
  Result_MTC_init(&outC->MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_2);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1);
  Result_MTC_init(
    &outC->MTC_ALL1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Controller_PATHS11_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Controller_PATHS10_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Controller_PATHS9_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_1);
  outC->Send_Data.Temperature = kcg_lit_float64(0.0);
  outC->Send_Data.pH = kcg_lit_float64(0.0);
  outC->Send_Data.Redox = kcg_lit_float64(0.0);
  for (idx = 0; idx < 2; idx++) {
    outC->Send_Data.Position[idx] = kcg_lit_float64(0.0);
  }
  outC->Send_Data.Time = kcg_lit_float64(0.0);
  /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_1);
  /* @1/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_1);
  /* @1/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_1);
  /* @1/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->_5_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_7);
  /* @2/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->_6_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_7);
  /* @2/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->_7_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_7);
  /* @2/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->_8_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_7);
  /* @3/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(&outC->Context_LATCHALL03_MTC_1_Push_Table_11_MTC_OBS_1);
  /* @3/MTC_newData_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->Context_GenericInputChanged_2_Push_Table_11_MTC_OBS_1);
  /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */
  Vote_Alog_init(&outC->Context_Vote_Alog_7);
  /* @3/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _3_GenericInputChanged_init_MTC_Utils_float64310(
    &outC->Context_GenericInputChanged_1_Push_Table_11_MTC_OBS_1);
  /* @4/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->_9_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_3);
  /* @4/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->_10_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_3);
  /* @4/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->_11_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_3);
  /* @4/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _2_GenericInputChanged_init_MTC_Utils_float643(
    &outC->_12_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_3);
  /* @5/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_1_Mean_10_Table_1_MTC_OBS_1);
  /* @5/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _3_GenericInputChanged_init_MTC_Utils_float64310(
    &outC->Context_GenericInputChanged_1_Mean_10_Table_1_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2);
  /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3);
  /* @10/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1);
  /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_15_Context_LATCHALL02_MTC_1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1);
  /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_7);
  /* @14/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->Context_LATCHALL03_MTC_1_Controller_PATHS17_MTC_OBS_1);
  /* @15/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_1_STATE_MTC_OBS_5);
  /* @17/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2);
  /* @19/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_16_Context_LATCHALL02_MTC_1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1);
  /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_17_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_6);
  /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_18_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_5);
  /* @22/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->_19_Context_LATCHALL03_MTC_1_Controller_PATHS16_MTC_OBS_1);
  /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_1_Controller_PATHS15_MTC_OBS_1);
  /* @24/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(&outC->_20_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_4);
  /* @26/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_21_Context_LATCHALL02_MTC_1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2);
  /* @28/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_22_Context_LATCHALL02_MTC_1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1);
  /* @29/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_23_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_4);
  /* @30/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_24_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_3);
  /* @31/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_25_Context_LATCHALL01_MTC_1_Controller_PATHS14_MTC_OBS_1);
  /* @32/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->Context_LATCHALL06_MTC_1_Controller_PATHS13_MTC_OBS_1);
  /* @33/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(&outC->_26_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_3);
  /* @34/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
  /* @35/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
  /* @37/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_28_Context_LATCHALL02_MTC_1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1);
  /* @39/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
  /* @41/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->_29_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
  /* @43/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->_30_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
  /* @44/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(&outC->_31_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_2);
  /* @46/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_32_Context_LATCHALL02_MTC_1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1);
  /* @48/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_33_Context_LATCHALL02_MTC_1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1);
  /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_34_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_2);
  /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_35_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_1);
  /* @51/MTC_ALL1=(MTC::LATCHALL07#1)/ */
  LATCHALL07_MTC_init(
    &outC->Context_LATCHALL07_MTC_1_Controller_PATHS11_MTC_OBS_1);
  /* @52/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_36_Context_LATCHALL02_MTC_1_Controller_PATHS10_MTC_OBS_1);
  /* @53/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->_37_Context_LATCHALL03_MTC_1_Controller_PATHS9_MTC_OBS_1);
  /* @54/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(&outC->_38_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_1);
  /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */
  Mean_10_Table_init(&outC->Context_Mean_10_Table_1);
  /* SM1:Calculate:_L4=(Vote_Alog#3)/ */
  Vote_Alog_init(&outC->Context_Vote_Alog_3);
  /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */
  Vote_Alog_init(&outC->Context_Vote_Alog_1);
  outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
  kcg_copy_Ten_Values_Table(&outC->store, (Ten_Values_Table *) &Normal_Value);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Controller_reset(outC_Controller *outC)
{
  outC->SM1_reset_nxt = kcg_false;
  outC->init = kcg_true;
  /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(&outC->Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_1);
  /* @1/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_1);
  /* @1/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_1);
  /* @1/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->_5_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_7);
  /* @2/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->_6_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_7);
  /* @2/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->_7_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_7);
  /* @2/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->_8_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_7);
  /* @3/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(&outC->Context_LATCHALL03_MTC_1_Push_Table_11_MTC_OBS_1);
  /* @3/MTC_newData_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->Context_GenericInputChanged_2_Push_Table_11_MTC_OBS_1);
  /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */
  Vote_Alog_reset(&outC->Context_Vote_Alog_7);
  /* @3/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _3_GenericInputChanged_reset_MTC_Utils_float64310(
    &outC->Context_GenericInputChanged_1_Push_Table_11_MTC_OBS_1);
  /* @4/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->_9_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_3);
  /* @4/MTC_Redox_Data_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->_10_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_3);
  /* @4/MTC_Temperature_Data_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->_11_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_3);
  /* @4/MTC_pH_Data_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _2_GenericInputChanged_reset_MTC_Utils_float643(
    &outC->_12_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_3);
  /* @5/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_1_Mean_10_Table_1_MTC_OBS_1);
  /* @5/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  _3_GenericInputChanged_reset_MTC_Utils_float64310(
    &outC->Context_GenericInputChanged_1_Mean_10_Table_1_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2);
  /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3);
  /* @10/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1);
  /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_15_Context_LATCHALL02_MTC_1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1);
  /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_7);
  /* @14/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->Context_LATCHALL03_MTC_1_Controller_PATHS17_MTC_OBS_1);
  /* @15/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_1_STATE_MTC_OBS_5);
  /* @17/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2);
  /* @19/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_16_Context_LATCHALL02_MTC_1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1);
  /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_17_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_6);
  /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_18_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_5);
  /* @22/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->_19_Context_LATCHALL03_MTC_1_Controller_PATHS16_MTC_OBS_1);
  /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_1_Controller_PATHS15_MTC_OBS_1);
  /* @24/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(&outC->_20_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_4);
  /* @26/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_21_Context_LATCHALL02_MTC_1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2);
  /* @28/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_22_Context_LATCHALL02_MTC_1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1);
  /* @29/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_23_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_4);
  /* @30/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_24_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_3);
  /* @31/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_25_Context_LATCHALL01_MTC_1_Controller_PATHS14_MTC_OBS_1);
  /* @32/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->Context_LATCHALL06_MTC_1_Controller_PATHS13_MTC_OBS_1);
  /* @33/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(&outC->_26_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_3);
  /* @34/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
  /* @35/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
  /* @37/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_28_Context_LATCHALL02_MTC_1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1);
  /* @39/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
  /* @41/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->_29_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
  /* @43/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->_30_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
  /* @44/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(&outC->_31_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_2);
  /* @46/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_32_Context_LATCHALL02_MTC_1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1);
  /* @48/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_33_Context_LATCHALL02_MTC_1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1);
  /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_34_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_2);
  /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_35_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_1);
  /* @51/MTC_ALL1=(MTC::LATCHALL07#1)/ */
  LATCHALL07_MTC_reset(
    &outC->Context_LATCHALL07_MTC_1_Controller_PATHS11_MTC_OBS_1);
  /* @52/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_36_Context_LATCHALL02_MTC_1_Controller_PATHS10_MTC_OBS_1);
  /* @53/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->_37_Context_LATCHALL03_MTC_1_Controller_PATHS9_MTC_OBS_1);
  /* @54/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(&outC->_38_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_1);
  /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */
  Mean_10_Table_reset(&outC->Context_Mean_10_Table_1);
  /* SM1:Calculate:_L4=(Vote_Alog#3)/ */
  Vote_Alog_reset(&outC->Context_Vote_Alog_3);
  /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */
  Vote_Alog_reset(&outC->Context_Vote_Alog_1);
  outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
  kcg_copy_Ten_Values_Table(&outC->store, (Ten_Values_Table *) &Normal_Value);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Controller/
  @9: (MTCEx::MTC_Instrumenters::Controller_store_last_MTC_INST#1)
  @45: (MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_2_MTC_INST#1)
  @25: (MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_2_MTC_INST#2)
  @16: (MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_2_MTC_INST#2)
  @38: (math::Abs#3)
  @40: (math::Abs#2)
  @42: (math::Abs#1)
  @1: (MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS#7)
  @3: (MTCEx::MTC_Observers::Push_Table_11_MTC_OBS#1)
  @4: (MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS#3)
  @5: (MTCEx::MTC_Observers::Mean_10_Table_1_MTC_OBS#1)
  @6: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#2)
  @8: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#3)
  @10: @9/(MTCEx::MTC_Observers::Controller_PATHS1_MTC_OBS#1)
  @11: (MTCEx::MTC_Instrumenters::Controller_SM1_Timer_1_MTC_INST#1)
  @12: @11/(MTCEx::MTC_Observers::Controller_PATHS8_MTC_OBS#1)
  @13: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#7)
  @14: (MTCEx::MTC_Observers::Controller_PATHS17_MTC_OBS#1)
  @15: (MTCEx::MTC_Observers::STATE_MTC_OBS#5)
  @17: @16/(MTCEx::MTC_Observers::Controller_PATHS6_MTC_OBS#1)
  @18: (MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_1_MTC_INST#1)
  @19: @18/(MTCEx::MTC_Observers::Controller_PATHS7_MTC_OBS#1)
  @20: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#6)
  @21: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#5)
  @22: (MTCEx::MTC_Observers::Controller_PATHS16_MTC_OBS#1)
  @23: (MTCEx::MTC_Observers::Controller_PATHS15_MTC_OBS#1)
  @24: (MTCEx::MTC_Observers::STATE_MTC_OBS#4)
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
  @39: @38/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @41: @40/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @43: @42/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @44: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
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

/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Controller.c
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

