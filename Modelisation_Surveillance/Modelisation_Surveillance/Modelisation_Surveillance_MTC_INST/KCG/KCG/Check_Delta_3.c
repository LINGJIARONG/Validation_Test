/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_Delta_3.h"

/* Check_Delta_3/ */
void Check_Delta_3(
  /* @38/I1/, @38/_L1/, Input1/, _L1/ */
  kcg_float64 Input1,
  /* @38/I2/, @38/_L2/, Input2/, _L2/ */
  kcg_float64 Input2,
  /* @38/I3/, @38/_L3/, Input3/, _L3/ */
  kcg_float64 Input3,
  /* Delta/, _L13/, _L18/, _L4/ */
  kcg_float64 Delta,
  /* @39/MTC_AC/,
     @39/MTC_AC_1/,
     @45/MTC_CC_9_A/,
     @46/MTC_CC_12_A/,
     @47/MTC_CC_15_A/,
     @48/MTC_CC_18_A/,
     MTC_AC_38/,
     MTC_AC_50/,
     MTC_AC_55/,
     MTC_AC_60/,
     MTC_AC_Outputs/,
     MTC_CC_12_A/,
     MTC_CC_15_A/,
     MTC_CC_18_A/,
     MTC_CC_9_A/,
     MTC_sig_1/,
     MTC_sig_2/,
     MTC_sig_3/,
     MTC_sig_4/ */
  kcg_bool MTC_AC_Outputs,
  /* @36/MTC_INSTRU/,
     @37/MTC_INSTRU/,
     @38/MTC_INSTRU/,
     @39/MTC_INSTRU/,
     @40/MTC_INSTRU/,
     @41/MTC_INSTRU/,
     @42/MTC_INSTRU/,
     @43/MTC_INSTRU/,
     @44/MTC_INSTRU/,
     @45/MTC_INSTRU/,
     @46/MTC_INSTRU/,
     @47/MTC_INSTRU/,
     @48/MTC_INSTRU/,
     @49/MTC_INSTRU/,
     @50/MTC_INSTRU/,
     @51/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Check_Delta_3 *outC)
{
  kcg_float64 tmp;
  kcg_float64 tmp1;
  /* _L19/, fail3/ */
  kcg_bool _L19;
  /* @41/A_Input/, @41/_L5/, @43/A_Input/, @43/_L5/, _L11/, _L16/ */
  kcg_float64 _L11;
  /* _L12/, fail2/ */
  kcg_bool _L12;
  /* @36/MTC_AC_2/, @36/_L1/, _L10/, fail1/ */
  kcg_bool _L10;
  /* @36/A_Input/, @36/_L5/, _L9/ */
  kcg_float64 _L9;
  /* @32/MTC_AC_6/, @41/MTC_AC_2/, @41/_L1/, MTC_AC_66/ */
  kcg_bool MTC_AC_66;
  /* @28/MTC_AC_9/, @43/MTC_AC_5/, @43/MTC_CC_4_A/, @44/MTC_CC_4_A/, MTC_AC_63/ */
  kcg_bool MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3;
  /* @12/MTC_AC_4/ */
  kcg_bool MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11;
  /* @12/MTC_AC_7/ */
  kcg_bool MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11;
  /* @12/MTC_AC_8/ */
  kcg_bool MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11;
  /* @12/MTC_AC_11/ */
  kcg_bool MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11;
  /* @16/MTC_AC_4/ */
  kcg_bool _2_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10;
  /* @16/MTC_AC_7/ */
  kcg_bool _3_MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10;
  /* @16/MTC_AC_10/ */
  kcg_bool MTC_AC_10_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10;
  /* @16/MTC_AC_11/ */
  kcg_bool _4_MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10;
  /* @20/MTC_AC_4/ */
  kcg_bool _5_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9;
  /* @20/MTC_AC_5/ */
  kcg_bool MTC_AC_5_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9;
  /* @20/MTC_AC_8/ */
  kcg_bool _6_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9;
  /* @20/MTC_AC_11/ */
  kcg_bool _7_MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9;
  /* @24/MTC_AC_4/ */
  kcg_bool _8_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8;
  /* @24/MTC_AC_7/ */
  kcg_bool _9_MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8;
  /* @24/MTC_AC_8/,
     @43/MTC_AC_4/,
     @43/MTC_CC_1_T/,
     @43/MTC_CC_3_A/,
     @44/MTC_CC_1_T/,
     @44/MTC_CC_3_A/ */
  kcg_bool _10_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8;
  /* @24/MTC_AC_9/, @41/MTC_AC_5/, @41/MTC_CC_4_A/, @42/MTC_CC_4_A/ */
  kcg_bool MTC_AC_9_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8;
  /* @28/MTC_AC_4/,
     @41/MTC_AC_4/,
     @41/MTC_CC_1_T/,
     @41/MTC_CC_3_A/,
     @42/MTC_CC_1_T/,
     @42/MTC_CC_3_A/ */
  kcg_bool _11_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_MTC_INST_7;
  /* @28/MTC_AC_5/, @36/MTC_AC_5/, @36/MTC_CC_4_A/, @37/MTC_CC_4_A/ */
  kcg_bool _12_MTC_AC_5_Check_Delta_3_IfBlock1_else_else_MTC_INST_7;
  /* @28/MTC_AC_8/,
     @36/MTC_AC_4/,
     @36/MTC_CC_1_T/,
     @36/MTC_CC_3_A/,
     @37/MTC_CC_1_T/,
     @37/MTC_CC_3_A/ */
  kcg_bool _13_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_MTC_INST_7;
  /* @32/MTC_AC_4/, MTC_AC_65/ */
  kcg_bool _14_MTC_AC_4_Check_Delta_3_IfBlock1_else_MTC_INST_6;
  /* @32/MTC_AC_5/, MTC_AC_64/ */
  kcg_bool _15_MTC_AC_5_Check_Delta_3_IfBlock1_else_MTC_INST_6;
  /* @32/MTC_AC_9/, @43/MTC_AC_2/, @43/_L1/ */
  kcg_bool _16_MTC_AC_9_Check_Delta_3_IfBlock1_else_MTC_INST_6;

  tmp1 = (Input1 + Input2 + Input3) / kcg_lit_float64(3.);
  _L9 = Input1 - tmp1;
  _L10 = kcg_lit_float64(0.) <= _L9;
  _L11 = tmp1 - Input3;
  _16_MTC_AC_9_Check_Delta_3_IfBlock1_else_MTC_INST_6 = kcg_lit_float64(0.) <=
    _L11;
  /* @43/_L2= */
  if (_16_MTC_AC_9_Check_Delta_3_IfBlock1_else_MTC_INST_6) {
    tmp = _L11;
  }
  else {
    tmp = - _L11;
  }
  _L19 = tmp > Delta;
  _L11 = tmp1 - Input2;
  MTC_AC_66 = kcg_lit_float64(0.) <= _L11;
  /* @41/_L2= */
  if (MTC_AC_66) {
    tmp = _L11;
  }
  else {
    tmp = - _L11;
  }
  _L12 = tmp > Delta;
  _15_MTC_AC_5_Check_Delta_3_IfBlock1_else_MTC_INST_6 = _L12 & _L19 &
    MTC_AC_Outputs;
  outC->every = MTC_AC_Outputs |
    _15_MTC_AC_5_Check_Delta_3_IfBlock1_else_MTC_INST_6;
  _12_MTC_AC_5_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 = (!_L10) &
    outC->every;
  _13_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 = _L10 & outC->every;
  /* @36/_L2= */
  if (_L10) {
    tmp1 = _L9;
  }
  else {
    tmp1 = - _L9;
  }
  _L10 = tmp1 > Delta;
  MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3 = _L10 & _L12;
  outC->IfBlock1_clock = MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3 & _L19;
  _14_MTC_AC_4_Check_Delta_3_IfBlock1_else_MTC_INST_6 = _L10 & _L19 &
    MTC_AC_Outputs;
  outC->every40 = MTC_AC_Outputs |
    _14_MTC_AC_4_Check_Delta_3_IfBlock1_else_MTC_INST_6;
  MTC_AC_9_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 = (!MTC_AC_66) &
    outC->every40;
  _11_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 = MTC_AC_66 &
    outC->every40;
  MTC_AC_66 = MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3 & MTC_AC_Outputs;
  outC->every41 = MTC_AC_Outputs | MTC_AC_66;
  MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3 =
    (!_16_MTC_AC_9_Check_Delta_3_IfBlock1_else_MTC_INST_6) & outC->every41;
  _10_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 =
    _16_MTC_AC_9_Check_Delta_3_IfBlock1_else_MTC_INST_6 & outC->every41;
  if (MTC_INSTRU) {
    /* @37/MTC_ALL1=(MTC::LATCHALL04#1)/ */
    LATCHALL04_MTC(
      _13_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_MTC_INST_7,
      _12_MTC_AC_5_Check_Delta_3_IfBlock1_else_else_MTC_INST_7,
      _13_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_MTC_INST_7,
      _12_MTC_AC_5_Check_Delta_3_IfBlock1_else_else_MTC_INST_7,
      &outC->_38_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
    outC->_7_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1 =
      outC->_38_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1.Output1;
    /* @40/MTC_ALL1=(MTC::LATCHALL02#1)/ */
    LATCHALL02_MTC(
      (kcg_bool) (outC->IfBlock1_clock & MTC_AC_Outputs),
      (kcg_bool) ((!outC->IfBlock1_clock) & MTC_AC_Outputs),
      &outC->Context_LATCHALL02_MTC_1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1 =
      outC->Context_LATCHALL02_MTC_1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1.Output1;
    /* @42/MTC_ALL1=(MTC::LATCHALL04#1)/ */
    LATCHALL04_MTC(
      _11_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_MTC_INST_7,
      MTC_AC_9_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8,
      _11_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_MTC_INST_7,
      MTC_AC_9_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8,
      &outC->_19_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
    outC->_1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2 =
      outC->_19_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2.Output1;
    /* @44/MTC_ALL1=(MTC::LATCHALL04#1)/ */
    LATCHALL04_MTC(
      _10_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8,
      MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3,
      _10_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8,
      MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3,
      &outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
    outC->MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3 =
      outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3.Output1;
    /* @45/MTC_ALL1=(MTC::LATCHALL03#1)/ */
    LATCHALL03_MTC(
      MTC_AC_Outputs,
      (kcg_bool) (_L10 & MTC_AC_Outputs),
      (kcg_bool) ((!_L10) & MTC_AC_Outputs),
      &outC->_18_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS8_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS8_MTC_OBS_1 =
      outC->_18_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS8_MTC_OBS_1.Output1;
    /* @46/MTC_ALL1=(MTC::LATCHALL03#1)/ */
    LATCHALL03_MTC(
      MTC_AC_Outputs,
      (kcg_bool) (_L12 & MTC_AC_Outputs),
      (kcg_bool) ((!_L12) & MTC_AC_Outputs),
      &outC->_17_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS9_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS9_MTC_OBS_1 =
      outC->_17_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS9_MTC_OBS_1.Output1;
    /* @47/MTC_ALL1=(MTC::LATCHALL03#1)/ */
    LATCHALL03_MTC(
      MTC_AC_Outputs,
      (kcg_bool) (_L19 & MTC_AC_Outputs),
      (kcg_bool) ((!_L19) & MTC_AC_Outputs),
      &outC->Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS10_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS10_MTC_OBS_1 =
      outC->Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS10_MTC_OBS_1.Output1;
    /* @48/MTC_ALL1=(MTC::LATCHALL07#1)/ */
    LATCHALL07_MTC(
      MTC_AC_Outputs,
      (kcg_bool) (_L10 & _15_MTC_AC_5_Check_Delta_3_IfBlock1_else_MTC_INST_6),
      (kcg_bool) ((!_L10) & _15_MTC_AC_5_Check_Delta_3_IfBlock1_else_MTC_INST_6),
      (kcg_bool) (_L12 & _14_MTC_AC_4_Check_Delta_3_IfBlock1_else_MTC_INST_6),
      (kcg_bool) ((!_L12) & _14_MTC_AC_4_Check_Delta_3_IfBlock1_else_MTC_INST_6),
      (kcg_bool) (_L19 & MTC_AC_66),
      (kcg_bool) ((!_L19) & MTC_AC_66),
      &outC->Context_LATCHALL07_MTC_1_Check_Delta_3_PATHS11_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS11_MTC_OBS_1 =
      outC->Context_LATCHALL07_MTC_1_Check_Delta_3_PATHS11_MTC_OBS_1.Output1;
    /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      outC->every,
      &outC->_16_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS12_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS12_MTC_OBS_1 =
      outC->_16_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS12_MTC_OBS_1.Output1;
    /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      outC->every40,
      &outC->_15_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS13_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS13_MTC_OBS_1 =
      outC->_15_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS13_MTC_OBS_1.Output1;
    /* @51/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      outC->every41,
      &outC->Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS14_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS14_MTC_OBS_1 =
      outC->Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS14_MTC_OBS_1.Output1;
  }
  else {
    outC->_7_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1 =
      kcg_lit_Result_MTC(0);
    outC->_1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Check_Delta_3_PATHS8_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Check_Delta_3_PATHS9_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Check_Delta_3_PATHS10_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Check_Delta_3_PATHS11_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Check_Delta_3_PATHS12_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Check_Delta_3_PATHS13_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Check_Delta_3_PATHS14_MTC_OBS_1 = kcg_lit_Result_MTC(0);
  }
  if (outC->every41) {
    if (MTC_INSTRU) {
      /* @9/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        kcg_true,
        &outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3);
      outC->MTC_ALL1_math_Abs_MTC_OBS_3 =
        outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3.Output1;
    }
    else {
      outC->MTC_ALL1_math_Abs_MTC_OBS_3 = kcg_lit_Result_MTC(0);
    }
  }
  if (outC->every40) {
    if (MTC_INSTRU) {
      /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        kcg_true,
        &outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2);
      outC->MTC_ALL1_math_Abs_MTC_OBS_2 =
        outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2.Output1;
    }
    else {
      outC->MTC_ALL1_math_Abs_MTC_OBS_2 = kcg_lit_Result_MTC(0);
    }
  }
  outC->every39 = outC->every41 |
    _10_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 |
    MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3 | (outC->every40 |
      _11_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 |
      MTC_AC_9_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 | (outC->every |
        _13_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 |
        _12_MTC_AC_5_Check_Delta_3_IfBlock1_else_else_MTC_INST_7));
  if (outC->every39) {
    if (MTC_INSTRU) {
      /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        kcg_true,
        &outC->_12_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_1);
      outC->MTC_ALL1_math_Mean3_MTC_OBS_1 =
        outC->_12_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_1.Output1;
    }
    else {
      outC->MTC_ALL1_math_Mean3_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    }
  }
  if (outC->every) {
    if (MTC_INSTRU) {
      /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        kcg_true,
        &outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1);
      outC->MTC_ALL1_math_Abs_MTC_OBS_1 =
        outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1.Output1;
    }
    else {
      outC->MTC_ALL1_math_Abs_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    }
  }
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    if (MTC_INSTRU) {
      /* @35/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        MTC_AC_Outputs,
        &outC->_37_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8);
      outC->MTC_ALL1_CONTROL_MTC_OBS_8 =
        outC->_37_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8.Output1;
    }
    else {
      outC->MTC_ALL1_CONTROL_MTC_OBS_8 = kcg_lit_Result_MTC(0);
    }
    outC->every47 = MTC_AC_Outputs;
    if (outC->every47) {
      if (MTC_INSTRU) {
        /* @1/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_4);
        outC->MTC_ALL1_math_Mean3_MTC_OBS_4 =
          outC->Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_4.Output1;
      }
      else {
        outC->MTC_ALL1_math_Mean3_MTC_OBS_4 = kcg_lit_Result_MTC(0);
      }
    }
    outC->Output1 = (Input1 + Input2 + Input3) / kcg_lit_float64(3.);
  }
  else {
    _14_MTC_AC_4_Check_Delta_3_IfBlock1_else_MTC_INST_6 = _L10 & _L12;
    outC->else_clock_IfBlock1 =
      _14_MTC_AC_4_Check_Delta_3_IfBlock1_else_MTC_INST_6 & (!_L19);
    _15_MTC_AC_5_Check_Delta_3_IfBlock1_else_MTC_INST_6 = _L12 & (!_L19) &
      MTC_AC_Outputs;
    MTC_AC_66 = _L10 & (!_L19) & MTC_AC_Outputs;
    _16_MTC_AC_9_Check_Delta_3_IfBlock1_else_MTC_INST_6 =
      _14_MTC_AC_4_Check_Delta_3_IfBlock1_else_MTC_INST_6 & MTC_AC_Outputs;
    if (MTC_INSTRU) {
      /* @34/MTC_ALL1=(MTC::LATCHALL06#1)/ */
      LATCHALL06_MTC(
        (kcg_bool) (_L10 & _15_MTC_AC_5_Check_Delta_3_IfBlock1_else_MTC_INST_6),
        (kcg_bool) ((!_L10) & _15_MTC_AC_5_Check_Delta_3_IfBlock1_else_MTC_INST_6),
        (kcg_bool) (_L12 & MTC_AC_66),
        (kcg_bool) ((!_L12) & MTC_AC_66),
        (kcg_bool) (_L19 & _16_MTC_AC_9_Check_Delta_3_IfBlock1_else_MTC_INST_6),
        (kcg_bool) ((!_L19) & _16_MTC_AC_9_Check_Delta_3_IfBlock1_else_MTC_INST_6),
        &outC->_36_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
      outC->MTC_ALL1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6 =
        outC->_36_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6.Output1;
      /* @33/MTC_ALL1=(MTC::LATCHALL01#1)/ */
      LATCHALL01_MTC(
        MTC_AC_Outputs,
        &outC->_35_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
      outC->_6_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6 =
        outC->_35_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6.Output1;
    }
    else {
      outC->MTC_ALL1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6 =
        kcg_lit_Result_MTC(0);
      outC->_6_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6 =
        kcg_lit_Result_MTC(0);
    }
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      if (MTC_INSTRU) {
        /* @31/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          MTC_AC_Outputs,
          &outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7);
        outC->MTC_ALL1_CONTROL_MTC_OBS_7 =
          outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7.Output1;
      }
      else {
        outC->MTC_ALL1_CONTROL_MTC_OBS_7 = kcg_lit_Result_MTC(0);
      }
      outC->Output1 = Input3;
    }
    else {
      _11_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 = _L10 & (!_L12);
      outC->else_clock_else_IfBlock1 =
        _11_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 & _L19;
      _12_MTC_AC_5_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 = (!_L12) &
        _L19 & MTC_AC_Outputs;
      _13_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 = _L10 & _L19 &
        MTC_AC_Outputs;
      MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3 =
        _11_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 & MTC_AC_Outputs;
      if (MTC_INSTRU) {
        /* @30/MTC_ALL1=(MTC::LATCHALL06#1)/ */
        LATCHALL06_MTC(
          (kcg_bool) (_L10 & _12_MTC_AC_5_Check_Delta_3_IfBlock1_else_else_MTC_INST_7),
          (kcg_bool) ((!_L10) & _12_MTC_AC_5_Check_Delta_3_IfBlock1_else_else_MTC_INST_7),
          (kcg_bool) (_L12 & _13_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_MTC_INST_7),
          (kcg_bool) ((!_L12) & _13_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_MTC_INST_7),
          (kcg_bool) (_L19 & MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3),
          (kcg_bool) ((!_L19) & MTC_CC_4_A_math_Abs_PATHS1_MTC_OBS_1_Abs_3),
          &outC->_33_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
        outC->MTC_ALL1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 =
          outC->_33_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7.Output1;
        /* @29/MTC_ALL1=(MTC::LATCHALL01#1)/ */
        LATCHALL01_MTC(
          MTC_AC_Outputs,
          &outC->_32_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
        outC->_5_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 =
          outC->_32_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7.Output1;
      }
      else {
        outC->MTC_ALL1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 =
          kcg_lit_Result_MTC(0);
        outC->_5_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 =
          kcg_lit_Result_MTC(0);
      }
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        if (MTC_INSTRU) {
          /* @27/MTC_ALL1=(MTC::LATCHALL01#1)/ */
          LATCHALL01_MTC(
            MTC_AC_Outputs,
            &outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6);
          outC->MTC_ALL1_CONTROL_MTC_OBS_6 =
            outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6.Output1;
        }
        else {
          outC->MTC_ALL1_CONTROL_MTC_OBS_6 = kcg_lit_Result_MTC(0);
        }
        outC->Output1 = Input2;
      }
      else {
        _8_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 = (!_L10) & _L12;
        outC->else_clock_else_else_IfBlock1 =
          _8_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 & _L19;
        _9_MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 = _L12 &
          _L19 & MTC_AC_Outputs;
        _10_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 =
          (!_L10) & _L19 & MTC_AC_Outputs;
        MTC_AC_9_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 =
          _8_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 & MTC_AC_Outputs;
        if (MTC_INSTRU) {
          /* @26/MTC_ALL1=(MTC::LATCHALL06#1)/ */
          LATCHALL06_MTC(
            (kcg_bool)
              (_L10 & _9_MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8),
            (kcg_bool)
              ((!_L10) & _9_MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8),
            (kcg_bool)
              (_L12 & _10_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8),
            (kcg_bool)
              ((!_L12) & _10_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8),
            (kcg_bool) (_L19 & MTC_AC_9_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8),
            (kcg_bool)
              ((!_L19) & MTC_AC_9_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8),
            &outC->_30_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
          outC->MTC_ALL1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 =
            outC->_30_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8.Output1;
          /* @25/MTC_ALL1=(MTC::LATCHALL01#1)/ */
          LATCHALL01_MTC(
            MTC_AC_Outputs,
            &outC->_29_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
          outC->_4_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 =
            outC->_29_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8.Output1;
        }
        else {
          outC->MTC_ALL1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 =
            kcg_lit_Result_MTC(0);
          outC->_4_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 =
            kcg_lit_Result_MTC(0);
        }
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          if (MTC_INSTRU) {
            /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */
            LATCHALL01_MTC(
              MTC_AC_Outputs,
              &outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5);
            outC->MTC_ALL1_CONTROL_MTC_OBS_5 =
              outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5.Output1;
          }
          else {
            outC->MTC_ALL1_CONTROL_MTC_OBS_5 = kcg_lit_Result_MTC(0);
          }
          outC->Output1 = Input1;
        }
        else {
          _5_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 =
            _L10 & (!_L12);
          outC->else_clock_else_else_else_IfBlock1 =
            _5_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 & (!_L19);
          MTC_AC_5_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 =
            (!_L12) & (!_L19) & MTC_AC_Outputs;
          _6_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 =
            _L10 & (!_L19) & MTC_AC_Outputs;
          _7_MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 =
            _5_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 &
            MTC_AC_Outputs;
          if (MTC_INSTRU) {
            /* @22/MTC_ALL1=(MTC::LATCHALL06#1)/ */
            LATCHALL06_MTC(
              (kcg_bool)
                (_L10 & MTC_AC_5_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9),
              (kcg_bool)
                ((!_L10) & MTC_AC_5_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9),
              (kcg_bool)
                (_L12 & _6_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9),
              (kcg_bool)
                ((!_L12) & _6_MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9),
              (kcg_bool)
                (_L19 & _7_MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9),
              (kcg_bool)
                ((!_L19) & _7_MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9),
              &outC->_27_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
            outC->MTC_ALL1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 =
              outC->_27_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9.Output1;
            /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */
            LATCHALL01_MTC(
              MTC_AC_Outputs,
              &outC->_26_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
            outC->_3_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 =
              outC->_26_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9.Output1;
          }
          else {
            outC->MTC_ALL1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 =
              kcg_lit_Result_MTC(0);
            outC->_3_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 =
              kcg_lit_Result_MTC(0);
          }
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            if (MTC_INSTRU) {
              /* @19/MTC_ALL1=(MTC::LATCHALL01#1)/ */
              LATCHALL01_MTC(
                MTC_AC_Outputs,
                &outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4);
              outC->MTC_ALL1_CONTROL_MTC_OBS_4 =
                outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4.Output1;
            }
            else {
              outC->MTC_ALL1_CONTROL_MTC_OBS_4 = kcg_lit_Result_MTC(0);
            }
            outC->every46 = MTC_AC_Outputs;
            if (outC->every46) {
              if (MTC_INSTRU) {
                /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                LATCHALL01_MTC(
                  kcg_true,
                  &outC->_8_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1);
                outC->MTC_ALL1_math_Mean_MTC_OBS_1 =
                  outC->_8_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1.Output1;
              }
              else {
                outC->MTC_ALL1_math_Mean_MTC_OBS_1 = kcg_lit_Result_MTC(0);
              }
            }
            outC->Output1 = (Input2 + Input3) / kcg_lit_float64(2.);
          }
          else {
            _2_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 =
              (!_L10) & (!_L12);
            outC->_45_else_clock_else_else_else_else_IfBlock1 =
              _2_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 & _L19;
            _3_MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 =
              (!_L12) & _L19 & MTC_AC_Outputs;
            MTC_AC_10_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 =
              (!_L10) & _L19 & MTC_AC_Outputs;
            _4_MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 =
              _2_MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 &
              MTC_AC_Outputs;
            if (MTC_INSTRU) {
              /* @18/MTC_ALL1=(MTC::LATCHALL06#1)/ */
              LATCHALL06_MTC(
                (kcg_bool)
                  (_L10 &
                    _3_MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10),
                (kcg_bool)
                  ((!_L10) &
                    _3_MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10),
                (kcg_bool)
                  (_L12 & MTC_AC_10_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10),
                (kcg_bool)
                  ((!_L12) &
                    MTC_AC_10_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10),
                (kcg_bool)
                  (_L19 &
                    _4_MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10),
                (kcg_bool)
                  ((!_L19) &
                    _4_MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10),
                &outC->_24_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
              outC->MTC_ALL1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 =
                outC->_24_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10.Output1;
              /* @17/MTC_ALL1=(MTC::LATCHALL01#1)/ */
              LATCHALL01_MTC(
                MTC_AC_Outputs,
                &outC->_23_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
              outC->_2_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 =
                outC->_23_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10.Output1;
            }
            else {
              outC->MTC_ALL1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 =
                kcg_lit_Result_MTC(0);
              outC->_2_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 =
                kcg_lit_Result_MTC(0);
            }
            /* IfBlock1:else:else:else:else:else: */
            if (outC->_45_else_clock_else_else_else_else_IfBlock1) {
              if (MTC_INSTRU) {
                /* @15/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                LATCHALL01_MTC(
                  MTC_AC_Outputs,
                  &outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3);
                outC->MTC_ALL1_CONTROL_MTC_OBS_3 =
                  outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3.Output1;
              }
              else {
                outC->MTC_ALL1_CONTROL_MTC_OBS_3 = kcg_lit_Result_MTC(0);
              }
              outC->every42 = MTC_AC_Outputs;
              if (outC->every42) {
                if (MTC_INSTRU) {
                  /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                  LATCHALL01_MTC(
                    kcg_true,
                    &outC->_9_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_2);
                  outC->MTC_ALL1_math_Mean_MTC_OBS_2 =
                    outC->_9_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_2.Output1;
                }
                else {
                  outC->MTC_ALL1_math_Mean_MTC_OBS_2 = kcg_lit_Result_MTC(0);
                }
              }
              outC->Output1 = (Input1 + Input2) / kcg_lit_float64(2.);
            }
            else {
              MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 =
                (!_L10) & _L12;
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 &
                (!_L19);
              MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 =
                _L12 & (!_L19) & MTC_AC_Outputs;
              MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 =
                (!_L10) & (!_L19) & MTC_AC_Outputs;
              MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 =
                MTC_AC_4_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 &
                MTC_AC_Outputs;
              if (MTC_INSTRU) {
                /* @14/MTC_ALL1=(MTC::LATCHALL06#1)/ */
                LATCHALL06_MTC(
                  (kcg_bool)
                    (_L10 &
                      MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11),
                  (kcg_bool)
                    ((!_L10) &
                      MTC_AC_7_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11),
                  (kcg_bool)
                    (_L12 &
                      MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11),
                  (kcg_bool)
                    ((!_L12) &
                      MTC_AC_8_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11),
                  (kcg_bool)
                    (_L19 &
                      MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11),
                  (kcg_bool)
                    ((!_L19) &
                      MTC_AC_11_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11),
                  &outC->Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
                outC->MTC_ALL1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 =
                  outC->Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11.Output1;
                /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                LATCHALL01_MTC(
                  MTC_AC_Outputs,
                  &outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
                outC->MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 =
                  outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11.Output1;
              }
              else {
                outC->MTC_ALL1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 =
                  kcg_lit_Result_MTC(0);
                outC->MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 =
                  kcg_lit_Result_MTC(0);
              }
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                if (MTC_INSTRU) {
                  /* @11/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                  LATCHALL01_MTC(
                    MTC_AC_Outputs,
                    &outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
                  outC->MTC_ALL1_CONTROL_MTC_OBS_2 =
                    outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2.Output1;
                }
                else {
                  outC->MTC_ALL1_CONTROL_MTC_OBS_2 = kcg_lit_Result_MTC(0);
                }
                outC->every44 = MTC_AC_Outputs;
                if (outC->every44) {
                  if (MTC_INSTRU) {
                    /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                    LATCHALL01_MTC(
                      kcg_true,
                      &outC->_10_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3);
                    outC->MTC_ALL1_math_Mean_MTC_OBS_3 =
                      outC->_10_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3.Output1;
                  }
                  else {
                    outC->MTC_ALL1_math_Mean_MTC_OBS_3 = kcg_lit_Result_MTC(0);
                  }
                }
                outC->Output1 = (Input3 + Input1) / kcg_lit_float64(2.);
              }
              else {
                if (MTC_INSTRU) {
                  /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                  LATCHALL01_MTC(
                    MTC_AC_Outputs,
                    &outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
                  outC->MTC_ALL1_CONTROL_MTC_OBS_1 =
                    outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1.Output1;
                }
                else {
                  outC->MTC_ALL1_CONTROL_MTC_OBS_1 = kcg_lit_Result_MTC(0);
                }
                outC->every43 = MTC_AC_Outputs;
                if (outC->every43) {
                  if (MTC_INSTRU) {
                    /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
                    LATCHALL01_MTC(
                      kcg_true,
                      &outC->_11_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_6);
                    outC->MTC_ALL1_math_Mean3_MTC_OBS_6 =
                      outC->_11_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_6.Output1;
                  }
                  else {
                    outC->MTC_ALL1_math_Mean3_MTC_OBS_6 = kcg_lit_Result_MTC(0);
                  }
                }
                outC->Output1 = (Input1 + Input2 + Input3) / kcg_lit_float64(3.);
              }
            }
          }
        }
      }
    }
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Check_Delta_3_init(outC_Check_Delta_3 *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->every = kcg_true;
  outC->every39 = kcg_true;
  outC->every40 = kcg_true;
  outC->every41 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->every42 = kcg_true;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->every43 = kcg_true;
  outC->every44 = kcg_true;
  outC->_45_else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->every46 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->every47 = kcg_true;
  Result_MTC_init(&outC->_7_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
  Result_MTC_init(
    &outC->MTC_ALL1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_8);
  Result_MTC_init(
    &outC->MTC_ALL1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
  Result_MTC_init(
    &outC->_6_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_7);
  Result_MTC_init(
    &outC->MTC_ALL1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
  Result_MTC_init(
    &outC->_5_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_6);
  Result_MTC_init(
    &outC->MTC_ALL1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
  Result_MTC_init(
    &outC->_4_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_5);
  Result_MTC_init(
    &outC->MTC_ALL1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_4);
  Result_MTC_init(
    &outC->MTC_ALL1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
  Result_MTC_init(
    &outC->_2_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_3);
  Result_MTC_init(
    &outC->MTC_ALL1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
  Result_MTC_init(
    &outC->MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_CONTROL_MTC_OBS_1);
  Result_MTC_init(&outC->_1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
  Result_MTC_init(&outC->MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
  Result_MTC_init(&outC->MTC_ALL1_Check_Delta_3_PATHS8_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Check_Delta_3_PATHS9_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Check_Delta_3_PATHS10_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Check_Delta_3_PATHS11_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Check_Delta_3_PATHS12_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Check_Delta_3_PATHS13_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Check_Delta_3_PATHS14_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_math_Abs_MTC_OBS_3);
  Result_MTC_init(&outC->MTC_ALL1_math_Abs_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean3_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_math_Abs_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean3_MTC_OBS_6);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean_MTC_OBS_3);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_math_Mean3_MTC_OBS_4);
  outC->Output1 = kcg_lit_float64(0.0);
  /* @1/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_4);
  /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_8_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_9_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_2);
  /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_10_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3);
  /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_11_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_6);
  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_12_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_1);
  /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2);
  /* @9/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3);
  /* @51/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS14_MTC_OBS_1);
  /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_15_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS13_MTC_OBS_1);
  /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_16_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS12_MTC_OBS_1);
  /* @48/MTC_ALL1=(MTC::LATCHALL07#1)/ */
  LATCHALL07_MTC_init(
    &outC->Context_LATCHALL07_MTC_1_Check_Delta_3_PATHS11_MTC_OBS_1);
  /* @47/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS10_MTC_OBS_1);
  /* @46/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->_17_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS9_MTC_OBS_1);
  /* @45/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_init(
    &outC->_18_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS8_MTC_OBS_1);
  /* @44/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
  /* @42/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->_19_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
  /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
  /* @11/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
  /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
  /* @14/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
  /* @15/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3);
  /* @17/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_23_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
  /* @18/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_24_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
  /* @19/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4);
  /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_26_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
  /* @22/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_27_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
  /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5);
  /* @25/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_29_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
  /* @26/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_30_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
  /* @27/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6);
  /* @29/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_32_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
  /* @30/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_33_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
  /* @31/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7);
  /* @33/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_35_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
  /* @34/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_init(
    &outC->_36_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
  /* @35/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(&outC->_37_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8);
  /* @40/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1);
  /* @37/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->_38_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void Check_Delta_3_reset(outC_Check_Delta_3 *outC)
{
  /* @1/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_4);
  /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_8_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_9_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_2);
  /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_10_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3);
  /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_11_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_6);
  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_12_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_1);
  /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2);
  /* @9/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3);
  /* @51/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS14_MTC_OBS_1);
  /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_15_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS13_MTC_OBS_1);
  /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_16_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS12_MTC_OBS_1);
  /* @48/MTC_ALL1=(MTC::LATCHALL07#1)/ */
  LATCHALL07_MTC_reset(
    &outC->Context_LATCHALL07_MTC_1_Check_Delta_3_PATHS11_MTC_OBS_1);
  /* @47/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS10_MTC_OBS_1);
  /* @46/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->_17_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS9_MTC_OBS_1);
  /* @45/MTC_ALL1=(MTC::LATCHALL03#1)/ */
  LATCHALL03_MTC_reset(
    &outC->_18_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS8_MTC_OBS_1);
  /* @44/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
  /* @42/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->_19_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
  /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
  /* @11/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
  /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
  /* @14/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
  /* @15/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3);
  /* @17/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_23_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
  /* @18/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_24_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
  /* @19/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4);
  /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_26_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
  /* @22/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_27_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
  /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5);
  /* @25/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_29_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
  /* @26/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_30_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
  /* @27/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6);
  /* @29/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_32_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
  /* @30/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_33_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
  /* @31/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7);
  /* @33/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_35_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
  /* @34/MTC_ALL1=(MTC::LATCHALL06#1)/ */
  LATCHALL06_MTC_reset(
    &outC->_36_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
  /* @35/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(&outC->_37_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8);
  /* @40/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1);
  /* @37/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->_38_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
}

/*
  Expanded instances for: Check_Delta_3/
  @12: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST#11)
  @16: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST#10)
  @20: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST#9)
  @24: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_MTC_INST#8)
  @28: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_MTC_INST#7)
  @32: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_MTC_INST#6)
  @43: (math::Abs#3)
  @41: (math::Abs#2)
  @36: (math::Abs#1)
  @1: (MTCEx::MTC_Observers::math_Mean3_MTC_OBS#4)
  @2: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#2)
  @4: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#3)
  @5: (MTCEx::MTC_Observers::math_Mean3_MTC_OBS#6)
  @6: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::math_Mean3_MTC_OBS#1)
  @8: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#2)
  @9: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#3)
  @51: (MTCEx::MTC_Observers::Check_Delta_3_PATHS14_MTC_OBS#1)
  @50: (MTCEx::MTC_Observers::Check_Delta_3_PATHS13_MTC_OBS#1)
  @49: (MTCEx::MTC_Observers::Check_Delta_3_PATHS12_MTC_OBS#1)
  @48: (MTCEx::MTC_Observers::Check_Delta_3_PATHS11_MTC_OBS#1)
  @47: (MTCEx::MTC_Observers::Check_Delta_3_PATHS10_MTC_OBS#1)
  @46: (MTCEx::MTC_Observers::Check_Delta_3_PATHS9_MTC_OBS#1)
  @45: (MTCEx::MTC_Observers::Check_Delta_3_PATHS8_MTC_OBS#1)
  @44: @43/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @42: @41/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @10: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @11: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#2)
  @13: @12/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @14: @12/(MTCEx::MTC_Observers::Check_Delta_3_PATHS7_MTC_OBS#1)
  @15: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#3)
  @17: @16/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @18: @16/(MTCEx::MTC_Observers::Check_Delta_3_PATHS6_MTC_OBS#1)
  @19: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#4)
  @21: @20/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @22: @20/(MTCEx::MTC_Observers::Check_Delta_3_PATHS5_MTC_OBS#1)
  @23: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#5)
  @25: @24/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @26: @24/(MTCEx::MTC_Observers::Check_Delta_3_PATHS4_MTC_OBS#1)
  @27: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#6)
  @29: @28/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @30: @28/(MTCEx::MTC_Observers::Check_Delta_3_PATHS3_MTC_OBS#1)
  @31: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#7)
  @33: @32/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @34: @32/(MTCEx::MTC_Observers::Check_Delta_3_PATHS2_MTC_OBS#1)
  @35: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#8)
  @39: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_MTC_INST#1)
  @40: @39/(MTCEx::MTC_Observers::Check_Delta_3_PATHS1_MTC_OBS#1)
  @37: @36/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Check_Delta_3.c
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

