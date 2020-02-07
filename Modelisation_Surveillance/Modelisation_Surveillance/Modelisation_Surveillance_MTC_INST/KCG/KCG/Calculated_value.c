/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculated_value.h"

/* Calculated_value/ */
void Calculated_value(
  /* _L1/, value1/ */
  kcg_float64 value1,
  /* _L2/, value2/ */
  kcg_float64 value2,
  /* _L3/, value3/ */
  kcg_float64 value3,
  /* delta/ */
  kcg_float64 delta,
  /* @31/MTC_AC/,
     @31/MTC_AC_1/,
     @33/MTC_CC_9_A/,
     @34/MTC_CC_12_A/,
     @35/MTC_CC_15_A/,
     MTC_AC_25/,
     MTC_AC_26/,
     MTC_AC_27/,
     MTC_AC_Outputs/,
     MTC_CC_12_A/,
     MTC_CC_15_A/,
     MTC_CC_9_A/,
     MTC_sig_1/,
     MTC_sig_2/,
     MTC_sig_3/ */
  kcg_bool MTC_AC_Outputs,
  /* @31/MTC_INSTRU/,
     @32/MTC_INSTRU/,
     @33/MTC_INSTRU/,
     @34/MTC_INSTRU/,
     @35/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Calculated_value *outC)
{
  /* @27/MTC_AC_9/ */
  kcg_bool MTC_AC_9_Calculated_value_IfBlock1_else_MTC_INST_3;
  /* @27/MTC_AC_8/ */
  kcg_bool MTC_AC_8_Calculated_value_IfBlock1_else_MTC_INST_3;
  /* @27/MTC_AC_7/ */
  kcg_bool MTC_AC_7_Calculated_value_IfBlock1_else_MTC_INST_3;
  /* @27/MTC_AC_4/ */
  kcg_bool MTC_AC_4_Calculated_value_IfBlock1_else_MTC_INST_3;
  /* @23/MTC_AC_9/ */
  kcg_bool _1_MTC_AC_9_Calculated_value_IfBlock1_else_else_MTC_INST_4;
  /* @23/MTC_AC_8/ */
  kcg_bool _2_MTC_AC_8_Calculated_value_IfBlock1_else_else_MTC_INST_4;
  /* @23/MTC_AC_7/ */
  kcg_bool _3_MTC_AC_7_Calculated_value_IfBlock1_else_else_MTC_INST_4;
  /* @23/MTC_AC_4/ */
  kcg_bool _4_MTC_AC_4_Calculated_value_IfBlock1_else_else_MTC_INST_4;
  /* @19/MTC_AC_9/ */
  kcg_bool _5_MTC_AC_9_Calculated_value_IfBlock1_else_else_else_MTC_INST_5;
  /* @19/MTC_AC_8/ */
  kcg_bool _6_MTC_AC_8_Calculated_value_IfBlock1_else_else_else_MTC_INST_5;
  /* @19/MTC_AC_7/ */
  kcg_bool _7_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_MTC_INST_5;
  /* @19/MTC_AC_4/ */
  kcg_bool _8_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_MTC_INST_5;
  /* @15/MTC_AC_11/ */
  kcg_bool MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6;
  /* @15/MTC_AC_10/ */
  kcg_bool MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6;
  /* @15/MTC_AC_7/ */
  kcg_bool _9_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6;
  /* @15/MTC_AC_4/ */
  kcg_bool _10_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6;
  /* @11/MTC_AC_11/ */
  kcg_bool _11_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7;
  /* @11/MTC_AC_10/ */
  kcg_bool _12_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7;
  /* @11/MTC_AC_7/ */
  kcg_bool _13_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7;
  /* @11/MTC_AC_4/ */
  kcg_bool _14_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7;
  /* @31/MTC_AC_7/, @7/MTC_AC_11/ */
  kcg_bool _15_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8;
  /* @31/MTC_AC_6/, @7/MTC_AC_10/ */
  kcg_bool _16_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8;
  /* @31/MTC_AC_5/, @7/MTC_AC_7/ */
  kcg_bool _17_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8;
  /* @31/MTC_AC_4/, @7/MTC_AC_4/ */
  kcg_bool _18_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8;
  /* @31/a/, _L16/, a/ */
  kcg_bool _L16;
  /* @31/b/, _L17/, b/ */
  kcg_bool _L17;
  /* @31/c/, _L18/, c/ */
  kcg_bool _L18;

  _L18 = value3 != Beyond_Interval_value;
  _L17 = value2 != Beyond_Interval_value;
  _L16 = value1 != Beyond_Interval_value;
  _18_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
    _L16 & _L17;
  outC->IfBlock1_clock =
    _18_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 &
    _L18;
  _17_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
    _L17 & _L18 & MTC_AC_Outputs;
  _16_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
    _L16 & _L18 & MTC_AC_Outputs;
  _15_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
    _18_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 &
    MTC_AC_Outputs;
  if (MTC_INSTRU) {
    /* @32/MTC_ALL1=(MTC::LATCHALL06#1)/ */
    LATCHALL06_MTC(
      (kcg_bool)
        (_L16 &
          _17_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
      (kcg_bool)
        ((!_L16) &
          _17_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
      (kcg_bool)
        (_L17 &
          _16_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
      (kcg_bool)
        ((!_L17) &
          _16_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
      (kcg_bool)
        (_L18 &
          _15_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
      (kcg_bool)
        ((!_L18) &
          _15_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
      &outC->_37_Context_LATCHALL06_MTC_1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2);
    outC->MTC_ALL1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2 =
      outC->_37_Context_LATCHALL06_MTC_1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2.Output1;
    /* @33/MTC_ALL1=(MTC::LATCHALL03#1)/ */
    LATCHALL03_MTC(
      MTC_AC_Outputs,
      (kcg_bool) (_L16 & MTC_AC_Outputs),
      (kcg_bool) ((!_L16) & MTC_AC_Outputs),
      &outC->_18_Context_LATCHALL03_MTC_1_Calculated_value_PATHS8_MTC_OBS_1);
    outC->_12_MTC_ALL1_Calculated_value_PATHS8_MTC_OBS_1 =
      outC->_18_Context_LATCHALL03_MTC_1_Calculated_value_PATHS8_MTC_OBS_1.Output1;
    /* @34/MTC_ALL1=(MTC::LATCHALL03#1)/ */
    LATCHALL03_MTC(
      MTC_AC_Outputs,
      (kcg_bool) (_L17 & MTC_AC_Outputs),
      (kcg_bool) ((!_L17) & MTC_AC_Outputs),
      &outC->_17_Context_LATCHALL03_MTC_1_Calculated_value_PATHS9_MTC_OBS_1);
    outC->_13_MTC_ALL1_Calculated_value_PATHS9_MTC_OBS_1 =
      outC->_17_Context_LATCHALL03_MTC_1_Calculated_value_PATHS9_MTC_OBS_1.Output1;
    /* @35/MTC_ALL1=(MTC::LATCHALL03#1)/ */
    LATCHALL03_MTC(
      MTC_AC_Outputs,
      (kcg_bool) (_L18 & MTC_AC_Outputs),
      (kcg_bool) ((!_L18) & MTC_AC_Outputs),
      &outC->Context_LATCHALL03_MTC_1_Calculated_value_PATHS10_MTC_OBS_1);
    outC->_14_MTC_ALL1_Calculated_value_PATHS10_MTC_OBS_1 =
      outC->Context_LATCHALL03_MTC_1_Calculated_value_PATHS10_MTC_OBS_1.Output1;
  }
  else {
    outC->MTC_ALL1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2 =
      kcg_lit_Result_MTC(0);
    outC->_12_MTC_ALL1_Calculated_value_PATHS8_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->_13_MTC_ALL1_Calculated_value_PATHS9_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->_14_MTC_ALL1_Calculated_value_PATHS10_MTC_OBS_1 = kcg_lit_Result_MTC(0);
  }
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    if (MTC_INSTRU) {
      /* @30/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        MTC_AC_Outputs,
        &outC->_36_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8);
      outC->MTC_ALL1_CONTROL_MTC_OBS_8 =
        outC->_36_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8.Output1;
    }
    else {
      outC->MTC_ALL1_CONTROL_MTC_OBS_8 = kcg_lit_Result_MTC(0);
    }
    outC->every = MTC_AC_Outputs;
    if (outC->every) {
      /* @1/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
      GenericInputChanged_MTC_Utils_float64(
        value1,
        &outC->Context_GenericInputChanged_1_Check_Delta_3_1111_MTC_OBS_1);
      /* @1/MTC_Input2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
      GenericInputChanged_MTC_Utils_float64(
        value2,
        &outC->Context_GenericInputChanged_2_Check_Delta_3_1111_MTC_OBS_1);
      /* @1/MTC_Input3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
      GenericInputChanged_MTC_Utils_float64(
        value3,
        &outC->Context_GenericInputChanged_3_Check_Delta_3_1111_MTC_OBS_1);
      /* @1/MTC_Delta_CHANGED=(MTC_Utils::GenericInputChanged#4)/ */
      GenericInputChanged_MTC_Utils_float64(
        delta,
        &outC->Context_GenericInputChanged_4_Check_Delta_3_1111_MTC_OBS_1);
      if (MTC_INSTRU) {
        /* @1/MTC_ALL1=(MTC::LATCHALL05#1)/ */
        LATCHALL05_MTC(
          kcg_true,
          outC->Context_GenericInputChanged_1_Check_Delta_3_1111_MTC_OBS_1.Output,
          outC->Context_GenericInputChanged_2_Check_Delta_3_1111_MTC_OBS_1.Output,
          outC->Context_GenericInputChanged_3_Check_Delta_3_1111_MTC_OBS_1.Output,
          outC->Context_GenericInputChanged_4_Check_Delta_3_1111_MTC_OBS_1.Output,
          &outC->Context_LATCHALL05_MTC_1_Check_Delta_3_1111_MTC_OBS_1);
        outC->MTC_ALL1_Check_Delta_3_1111_MTC_OBS_1_float64_float64_float64_float64 =
          outC->Context_LATCHALL05_MTC_1_Check_Delta_3_1111_MTC_OBS_1.Output1;
      }
      else {
        outC->MTC_ALL1_Check_Delta_3_1111_MTC_OBS_1_float64_float64_float64_float64 =
          kcg_lit_Result_MTC(0);
      }
    }
    /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */
    Check_Delta_3(
      value1,
      value2,
      value3,
      delta,
      MTC_AC_Outputs,
      MTC_INSTRU,
      &outC->Context_Check_Delta_3_1);
    outC->Output1 = outC->Context_Check_Delta_3_1.Output1;
  }
  else {
    MTC_AC_4_Calculated_value_IfBlock1_else_MTC_INST_3 = (!_L16) & _L17;
    outC->else_clock_IfBlock1 =
      MTC_AC_4_Calculated_value_IfBlock1_else_MTC_INST_3 & _L18;
    MTC_AC_7_Calculated_value_IfBlock1_else_MTC_INST_3 = _L17 & _L18 &
      MTC_AC_Outputs;
    MTC_AC_8_Calculated_value_IfBlock1_else_MTC_INST_3 = (!_L16) & _L18 &
      MTC_AC_Outputs;
    MTC_AC_9_Calculated_value_IfBlock1_else_MTC_INST_3 =
      MTC_AC_4_Calculated_value_IfBlock1_else_MTC_INST_3 & MTC_AC_Outputs;
    if (MTC_INSTRU) {
      /* @29/MTC_ALL1=(MTC::LATCHALL06#1)/ */
      LATCHALL06_MTC(
        (kcg_bool) (_L16 & MTC_AC_7_Calculated_value_IfBlock1_else_MTC_INST_3),
        (kcg_bool) ((!_L16) & MTC_AC_7_Calculated_value_IfBlock1_else_MTC_INST_3),
        (kcg_bool) (_L17 & MTC_AC_8_Calculated_value_IfBlock1_else_MTC_INST_3),
        (kcg_bool) ((!_L17) & MTC_AC_8_Calculated_value_IfBlock1_else_MTC_INST_3),
        (kcg_bool) (_L18 & MTC_AC_9_Calculated_value_IfBlock1_else_MTC_INST_3),
        (kcg_bool) ((!_L18) & MTC_AC_9_Calculated_value_IfBlock1_else_MTC_INST_3),
        &outC->_35_Context_LATCHALL06_MTC_1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
      outC->_1_MTC_ALL1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3 =
        outC->_35_Context_LATCHALL06_MTC_1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3.Output1;
      /* @28/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        MTC_AC_Outputs,
        &outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
      outC->MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3 =
        outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3.Output1;
    }
    else {
      outC->_1_MTC_ALL1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3 =
        kcg_lit_Result_MTC(0);
      outC->MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3 =
        kcg_lit_Result_MTC(0);
    }
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      if (MTC_INSTRU) {
        /* @26/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          MTC_AC_Outputs,
          &outC->_33_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7);
        outC->MTC_ALL1_CONTROL_MTC_OBS_7 =
          outC->_33_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7.Output1;
      }
      else {
        outC->MTC_ALL1_CONTROL_MTC_OBS_7 = kcg_lit_Result_MTC(0);
      }
      outC->every41 = MTC_AC_Outputs;
      if (outC->every41) {
        if (MTC_INSTRU) {
          /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1);
          outC->MTC_ALL1_math_Mean_MTC_OBS_1 =
            outC->Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1.Output1;
        }
        else {
          outC->MTC_ALL1_math_Mean_MTC_OBS_1 = kcg_lit_Result_MTC(0);
        }
      }
      outC->Output1 = (value2 + value3) / kcg_lit_float64(2.);
    }
    else {
      _4_MTC_AC_4_Calculated_value_IfBlock1_else_else_MTC_INST_4 = (!_L17) & _L16;
      outC->else_clock_else_IfBlock1 =
        _4_MTC_AC_4_Calculated_value_IfBlock1_else_else_MTC_INST_4 & _L18;
      _3_MTC_AC_7_Calculated_value_IfBlock1_else_else_MTC_INST_4 = _L16 & _L18 &
        MTC_AC_Outputs;
      _2_MTC_AC_8_Calculated_value_IfBlock1_else_else_MTC_INST_4 = (!_L17) &
        _L18 & MTC_AC_Outputs;
      _1_MTC_AC_9_Calculated_value_IfBlock1_else_else_MTC_INST_4 =
        _4_MTC_AC_4_Calculated_value_IfBlock1_else_else_MTC_INST_4 & MTC_AC_Outputs;
      if (MTC_INSTRU) {
        /* @25/MTC_ALL1=(MTC::LATCHALL06#1)/ */
        LATCHALL06_MTC(
          (kcg_bool) (_L17 & _3_MTC_AC_7_Calculated_value_IfBlock1_else_else_MTC_INST_4),
          (kcg_bool)
            ((!_L17) & _3_MTC_AC_7_Calculated_value_IfBlock1_else_else_MTC_INST_4),
          (kcg_bool) (_L16 & _2_MTC_AC_8_Calculated_value_IfBlock1_else_else_MTC_INST_4),
          (kcg_bool)
            ((!_L16) & _2_MTC_AC_8_Calculated_value_IfBlock1_else_else_MTC_INST_4),
          (kcg_bool) (_L18 & _1_MTC_AC_9_Calculated_value_IfBlock1_else_else_MTC_INST_4),
          (kcg_bool)
            ((!_L18) & _1_MTC_AC_9_Calculated_value_IfBlock1_else_else_MTC_INST_4),
          &outC->_32_Context_LATCHALL06_MTC_1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
        outC->_2_MTC_ALL1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4 =
          outC->_32_Context_LATCHALL06_MTC_1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4.Output1;
        /* @24/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          MTC_AC_Outputs,
          &outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
        outC->_3_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4 =
          outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4.Output1;
      }
      else {
        outC->_2_MTC_ALL1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4 =
          kcg_lit_Result_MTC(0);
        outC->_3_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4 =
          kcg_lit_Result_MTC(0);
      }
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        if (MTC_INSTRU) {
          /* @22/MTC_ALL1=(MTC::LATCHALL01#1)/ */
          LATCHALL01_MTC(
            MTC_AC_Outputs,
            &outC->_30_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6);
          outC->MTC_ALL1_CONTROL_MTC_OBS_6 =
            outC->_30_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6.Output1;
        }
        else {
          outC->MTC_ALL1_CONTROL_MTC_OBS_6 = kcg_lit_Result_MTC(0);
        }
        outC->every38 = MTC_AC_Outputs;
        if (outC->every38) {
          if (MTC_INSTRU) {
            /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
            LATCHALL01_MTC(
              kcg_true,
              &outC->_15_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3);
            outC->MTC_ALL1_math_Mean_MTC_OBS_3 =
              outC->_15_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3.Output1;
          }
          else {
            outC->MTC_ALL1_math_Mean_MTC_OBS_3 = kcg_lit_Result_MTC(0);
          }
        }
        outC->Output1 = (value1 + value3) / kcg_lit_float64(2.);
      }
      else {
        _8_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 =
          (!_L18) & _L16;
        outC->else_clock_else_else_IfBlock1 =
          _8_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 & _L17;
        _7_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 = _L16 &
          _L17 & MTC_AC_Outputs;
        _6_MTC_AC_8_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 =
          (!_L18) & _L17 & MTC_AC_Outputs;
        _5_MTC_AC_9_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 =
          _8_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 &
          MTC_AC_Outputs;
        if (MTC_INSTRU) {
          /* @21/MTC_ALL1=(MTC::LATCHALL06#1)/ */
          LATCHALL06_MTC(
            (kcg_bool)
              (_L18 & _7_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_MTC_INST_5),
            (kcg_bool)
              ((!_L18) & _7_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_MTC_INST_5),
            (kcg_bool)
              (_L16 & _6_MTC_AC_8_Calculated_value_IfBlock1_else_else_else_MTC_INST_5),
            (kcg_bool)
              ((!_L16) & _6_MTC_AC_8_Calculated_value_IfBlock1_else_else_else_MTC_INST_5),
            (kcg_bool)
              (_L17 & _5_MTC_AC_9_Calculated_value_IfBlock1_else_else_else_MTC_INST_5),
            (kcg_bool)
              ((!_L17) & _5_MTC_AC_9_Calculated_value_IfBlock1_else_else_else_MTC_INST_5),
            &outC->_29_Context_LATCHALL06_MTC_1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
          outC->_4_MTC_ALL1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 =
            outC->_29_Context_LATCHALL06_MTC_1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5.Output1;
          /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */
          LATCHALL01_MTC(
            MTC_AC_Outputs,
            &outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
          outC->_5_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 =
            outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5.Output1;
        }
        else {
          outC->_4_MTC_ALL1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 =
            kcg_lit_Result_MTC(0);
          outC->_5_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 =
            kcg_lit_Result_MTC(0);
        }
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          if (MTC_INSTRU) {
            /* @18/MTC_ALL1=(MTC::LATCHALL01#1)/ */
            LATCHALL01_MTC(
              MTC_AC_Outputs,
              &outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5);
            outC->MTC_ALL1_CONTROL_MTC_OBS_5 =
              outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5.Output1;
          }
          else {
            outC->MTC_ALL1_CONTROL_MTC_OBS_5 = kcg_lit_Result_MTC(0);
          }
          outC->every40 = MTC_AC_Outputs;
          if (outC->every40) {
            if (MTC_INSTRU) {
              /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
              LATCHALL01_MTC(
                kcg_true,
                &outC->_16_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_5);
              outC->MTC_ALL1_math_Mean_MTC_OBS_5 =
                outC->_16_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_5.Output1;
            }
            else {
              outC->MTC_ALL1_math_Mean_MTC_OBS_5 = kcg_lit_Result_MTC(0);
            }
          }
          outC->Output1 = (value1 + value2) / kcg_lit_float64(2.);
        }
        else {
          _10_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 =
            (!_L16) & (!_L17);
          outC->else_clock_else_else_else_IfBlock1 =
            _10_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 & _L18;
          _9_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 =
            (!_L17) & _L18 & MTC_AC_Outputs;
          MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 =
            (!_L16) & _L18 & MTC_AC_Outputs;
          MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 =
            _10_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 &
            MTC_AC_Outputs;
          if (MTC_INSTRU) {
            /* @17/MTC_ALL1=(MTC::LATCHALL06#1)/ */
            LATCHALL06_MTC(
              (kcg_bool)
                (_L16 & _9_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6),
              (kcg_bool)
                ((!_L16) &
                  _9_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6),
              (kcg_bool)
                (_L17 & MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6),
              (kcg_bool)
                ((!_L17) & MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6),
              (kcg_bool)
                (_L18 & MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6),
              (kcg_bool)
                ((!_L18) & MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6),
              &outC->_26_Context_LATCHALL06_MTC_1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
            outC->_6_MTC_ALL1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 =
              outC->_26_Context_LATCHALL06_MTC_1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6.Output1;
            /* @16/MTC_ALL1=(MTC::LATCHALL01#1)/ */
            LATCHALL01_MTC(
              MTC_AC_Outputs,
              &outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
            outC->_7_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 =
              outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6.Output1;
          }
          else {
            outC->_6_MTC_ALL1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 =
              kcg_lit_Result_MTC(0);
            outC->_7_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 =
              kcg_lit_Result_MTC(0);
          }
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            if (MTC_INSTRU) {
              /* @14/MTC_ALL1=(MTC::LATCHALL01#1)/ */
              LATCHALL01_MTC(
                MTC_AC_Outputs,
                &outC->_24_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4);
              outC->MTC_ALL1_CONTROL_MTC_OBS_4 =
                outC->_24_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4.Output1;
            }
            else {
              outC->MTC_ALL1_CONTROL_MTC_OBS_4 = kcg_lit_Result_MTC(0);
            }
            outC->Output1 = value3;
          }
          else {
            _14_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 =
              (!_L17) & (!_L18);
            outC->else_clock_else_else_else_else_IfBlock1 =
              _14_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 &
              _L16;
            _13_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 =
              (!_L18) & _L16 & MTC_AC_Outputs;
            _12_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 =
              (!_L17) & _L16 & MTC_AC_Outputs;
            _11_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 =
              _14_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 &
              MTC_AC_Outputs;
            if (MTC_INSTRU) {
              /* @13/MTC_ALL1=(MTC::LATCHALL06#1)/ */
              LATCHALL06_MTC(
                (kcg_bool)
                  (_L17 &
                    _13_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7),
                (kcg_bool)
                  ((!_L17) &
                    _13_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7),
                (kcg_bool)
                  (_L18 &
                    _12_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7),
                (kcg_bool)
                  ((!_L18) &
                    _12_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7),
                (kcg_bool)
                  (_L16 &
                    _11_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7),
                (kcg_bool)
                  ((!_L16) &
                    _11_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7),
                &outC->_23_Context_LATCHALL06_MTC_1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
              outC->_8_MTC_ALL1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 =
                outC->_23_Context_LATCHALL06_MTC_1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7.Output1;
              /* @12/MTC_ALL1=(MTC::LATCHALL01#1)/ */
              LATCHALL01_MTC(
                MTC_AC_Outputs,
                &outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
              outC->_9_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 =
                outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7.Output1;
            }
            else {
              outC->_8_MTC_ALL1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 =
                kcg_lit_Result_MTC(0);
              outC->_9_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 =
                kcg_lit_Result_MTC(0);
            }
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              if (MTC_INSTRU) {
                /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                LATCHALL01_MTC(
                  MTC_AC_Outputs,
                  &outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3);
                outC->MTC_ALL1_CONTROL_MTC_OBS_3 =
                  outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3.Output1;
              }
              else {
                outC->MTC_ALL1_CONTROL_MTC_OBS_3 = kcg_lit_Result_MTC(0);
              }
              outC->Output1 = value1;
            }
            else {
              _18_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
                (!_L16) & (!_L18);
              outC->_39_else_clock_else_else_else_else_else_IfBlock1 =
                _18_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 &
                _L17;
              _17_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
                (!_L18) & _L17 & MTC_AC_Outputs;
              _16_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
                (!_L16) & _L17 & MTC_AC_Outputs;
              _15_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
                _18_MTC_AC_4_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 &
                MTC_AC_Outputs;
              if (MTC_INSTRU) {
                /* @9/MTC_ALL1=(MTC::LATCHALL06#1)/ */
                LATCHALL06_MTC(
                  (kcg_bool)
                    (_L16 &
                      _17_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
                  (kcg_bool)
                    ((!_L16) &
                      _17_MTC_AC_7_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
                  (kcg_bool)
                    (_L18 &
                      _16_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
                  (kcg_bool)
                    ((!_L18) &
                      _16_MTC_AC_10_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
                  (kcg_bool)
                    (_L17 &
                      _15_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
                  (kcg_bool)
                    ((!_L17) &
                      _15_MTC_AC_11_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8),
                  &outC->Context_LATCHALL06_MTC_1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
                outC->_10_MTC_ALL1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
                  outC->Context_LATCHALL06_MTC_1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8.Output1;
                /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                LATCHALL01_MTC(
                  MTC_AC_Outputs,
                  &outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
                outC->_11_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
                  outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8.Output1;
              }
              else {
                outC->_10_MTC_ALL1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
                  kcg_lit_Result_MTC(0);
                outC->_11_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 =
                  kcg_lit_Result_MTC(0);
              }
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_39_else_clock_else_else_else_else_else_IfBlock1) {
                if (MTC_INSTRU) {
                  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                  LATCHALL01_MTC(
                    MTC_AC_Outputs,
                    &outC->_19_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
                  outC->MTC_ALL1_CONTROL_MTC_OBS_2 =
                    outC->_19_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2.Output1;
                }
                else {
                  outC->MTC_ALL1_CONTROL_MTC_OBS_2 = kcg_lit_Result_MTC(0);
                }
                outC->Output1 = value2;
              }
              else {
                if (MTC_INSTRU) {
                  /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                  LATCHALL01_MTC(
                    MTC_AC_Outputs,
                    &outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
                  outC->MTC_ALL1_CONTROL_MTC_OBS_1 =
                    outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1.Output1;
                }
                else {
                  outC->MTC_ALL1_CONTROL_MTC_OBS_1 = kcg_lit_Result_MTC(0);
                }
                outC->Output1 = Notification_Defaillance;
              }
            }
          }
        }
      }
    }
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Calculated_value_init(outC_Calculated_value *outC)
{
  outC->every = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->every38 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_39_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->every40 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->every41 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  Result_MTC_init(
    &outC->MTC_ALL1_Check_Delta_3_1111_MTC_OBS_1_float64_float64_float64_float64);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean_MTC_OBS_3);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean_MTC_OBS_5);
  Result_MTC_init(&outC->_14_MTC_ALL1_Calculated_value_PATHS10_MTC_OBS_1);
  Result_MTC_init(&outC->_13_MTC_ALL1_Calculated_value_PATHS9_MTC_OBS_1);
  Result_MTC_init(&outC->_12_MTC_ALL1_Calculated_value_PATHS8_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_2);
  Result_MTC_init(
    &outC->_11_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
  Result_MTC_init(
    &outC->_10_MTC_ALL1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_3);
  Result_MTC_init(
    &outC->_9_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
  Result_MTC_init(
    &outC->_8_MTC_ALL1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_4);
  Result_MTC_init(
    &outC->_7_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
  Result_MTC_init(
    &outC->_6_MTC_ALL1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_5);
  Result_MTC_init(
    &outC->_5_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
  Result_MTC_init(
    &outC->_4_MTC_ALL1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_6);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
  Result_MTC_init(
    &outC->_2_MTC_ALL1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_7);
  Result_MTC_init(
    &outC->MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
  Result_MTC_init(
    &outC->_1_MTC_ALL1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_8);
  Result_MTC_init(
    &outC->MTC_ALL1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2);
  outC->Output1 = kcg_lit_float64(0.0);
  /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */
  Check_Delta_3_init(&outC->Context_Check_Delta_3_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL05#1)/ */
  LATCHALL05_MTC_init(
    &outC->Context_LATCHALL05_MTC_1_Check_Delta_3_1111_MTC_OBS_1);
  /* @1/MTC_Delta_CHANGED=(MTC_Utils::GenericInputChanged#4)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_4_Check_Delta_3_1111_MTC_OBS_1);
  /* @1/MTC_Input3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_3_Check_Delta_3_1111_MTC_OBS_1);
  /* @1/MTC_Input2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_2_Check_Delta_3_1111_MTC_OBS_1);
  /* @1/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_1_Check_Delta_3_1111_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_15_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3);
  /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_16_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_5);
  /* @35/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->Context_LATCHALL03_MTC_1_Calculated_value_PATHS10_MTC_OBS_1);
  /* @34/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->_17_Context_LATCHALL03_MTC_1_Calculated_value_PATHS9_MTC_OBS_1);
  /* @33/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->_18_Context_LATCHALL03_MTC_1_Calculated_value_PATHS8_MTC_OBS_1);
  /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_19_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
  /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
  /* @9/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->Context_LATCHALL06_MTC_1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
  /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3);
  /* @12/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
  /* @13/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_23_Context_LATCHALL06_MTC_1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
  /* @14/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_24_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4);
  /* @16/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
  /* @17/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_26_Context_LATCHALL06_MTC_1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
  /* @18/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5);
  /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
  /* @21/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_29_Context_LATCHALL06_MTC_1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
  /* @22/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_30_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6);
  /* @24/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
  /* @25/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_32_Context_LATCHALL06_MTC_1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
  /* @26/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_33_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7);
  /* @28/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
  /* @29/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_35_Context_LATCHALL06_MTC_1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
  /* @30/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_36_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8);
  /* @32/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_37_Context_LATCHALL06_MTC_1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2);
}
#endif /* KCG_USER_DEFINED_INIT */


void Calculated_value_reset(outC_Calculated_value *outC)
{
  /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */
  Check_Delta_3_reset(&outC->Context_Check_Delta_3_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL05#1)/ */
  LATCHALL05_MTC_reset(
    &outC->Context_LATCHALL05_MTC_1_Check_Delta_3_1111_MTC_OBS_1);
  /* @1/MTC_Delta_CHANGED=(MTC_Utils::GenericInputChanged#4)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_4_Check_Delta_3_1111_MTC_OBS_1);
  /* @1/MTC_Input3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_3_Check_Delta_3_1111_MTC_OBS_1);
  /* @1/MTC_Input2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_2_Check_Delta_3_1111_MTC_OBS_1);
  /* @1/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_1_Check_Delta_3_1111_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_15_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3);
  /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_16_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_5);
  /* @35/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->Context_LATCHALL03_MTC_1_Calculated_value_PATHS10_MTC_OBS_1);
  /* @34/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->_17_Context_LATCHALL03_MTC_1_Calculated_value_PATHS9_MTC_OBS_1);
  /* @33/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->_18_Context_LATCHALL03_MTC_1_Calculated_value_PATHS8_MTC_OBS_1);
  /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_19_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
  /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
  /* @9/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->Context_LATCHALL06_MTC_1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
  /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3);
  /* @12/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
  /* @13/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_23_Context_LATCHALL06_MTC_1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
  /* @14/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_24_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4);
  /* @16/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
  /* @17/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_26_Context_LATCHALL06_MTC_1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
  /* @18/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5);
  /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
  /* @21/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_29_Context_LATCHALL06_MTC_1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
  /* @22/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_30_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6);
  /* @24/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
  /* @25/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_32_Context_LATCHALL06_MTC_1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
  /* @26/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_33_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7);
  /* @28/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
  /* @29/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_35_Context_LATCHALL06_MTC_1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
  /* @30/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_36_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8);
  /* @32/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_37_Context_LATCHALL06_MTC_1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2);
}

/*
  Expanded instances for: Calculated_value/
  @27: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_MTC_INST#3)
  @23: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_MTC_INST#4)
  @19: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_MTC_INST#5)
  @15: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_MTC_INST#6)
  @11: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST#7)
  @7: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST#8)
  @31: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_MTC_INST#2)
  @1: (MTCEx::MTC_Observers::Check_Delta_3_1111_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#3)
  @4: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#5)
  @35: (MTCEx::MTC_Observers::Calculated_value_PATHS10_MTC_OBS#1)
  @34: (MTCEx::MTC_Observers::Calculated_value_PATHS9_MTC_OBS#1)
  @33: (MTCEx::MTC_Observers::Calculated_value_PATHS8_MTC_OBS#1)
  @5: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @6: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#2)
  @8: @7/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @9: @7/(MTCEx::MTC_Observers::Calculated_value_PATHS7_MTC_OBS#1)
  @10: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#3)
  @12: @11/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @13: @11/(MTCEx::MTC_Observers::Calculated_value_PATHS6_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#4)
  @16: @15/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @17: @15/(MTCEx::MTC_Observers::Calculated_value_PATHS5_MTC_OBS#1)
  @18: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#5)
  @20: @19/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @21: @19/(MTCEx::MTC_Observers::Calculated_value_PATHS4_MTC_OBS#1)
  @22: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#6)
  @24: @23/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @25: @23/(MTCEx::MTC_Observers::Calculated_value_PATHS3_MTC_OBS#1)
  @26: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#7)
  @28: @27/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @29: @27/(MTCEx::MTC_Observers::Calculated_value_PATHS2_MTC_OBS#1)
  @30: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#8)
  @32: @31/(MTCEx::MTC_Observers::Calculated_value_PATHS1_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Calculated_value.c
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

