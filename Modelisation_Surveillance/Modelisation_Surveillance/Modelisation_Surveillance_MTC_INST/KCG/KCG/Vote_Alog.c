/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Vote_Alog.h"

/* Vote_Alog/ */
void Vote_Alog(
  /* _L1/, pH_Data/ */
  Data *pH_Data,
  /* Temperature_Data/, _L2/ */
  Data *Temperature_Data,
  /* Redox_Data/, _L3/ */
  Data *Redox_Data,
  /* MTC_AC_1/,
     MTC_AC_11/,
     MTC_AC_16/,
     MTC_AC_19/,
     MTC_AC_2/,
     MTC_AC_20/,
     MTC_AC_24/,
     MTC_AC_29/,
     MTC_AC_34/,
     MTC_AC_37/,
     MTC_AC_38/,
     MTC_AC_42/,
     MTC_AC_47/,
     MTC_AC_52/,
     MTC_AC_6/,
     MTC_AC_Outputs/ */
  kcg_bool MTC_AC_Outputs,
  /* @13/MTC_INSTRU/,
     @14/MTC_INSTRU/,
     @15/MTC_INSTRU/,
     @16/MTC_INSTRU/,
     @17/MTC_INSTRU/,
     @18/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Vote_Alog *outC)
{
  /* MTC_AC_5/ */
  kcg_bool MTC_AC_5;
  /* @14/MTC_CC_2_T/, @14/MTC_CC_4_A/, MTC_AC_7/, MTC_CC_2_T/, MTC_CC_4_A/ */
  kcg_bool MTC_AC_7;
  /* MTC_AC_10/ */
  kcg_bool MTC_AC_10;
  /* @14/MTC_CC_6_T/, @14/MTC_CC_8_A/, MTC_AC_12/, MTC_CC_6_T/, MTC_CC_8_A/ */
  kcg_bool MTC_AC_12;
  /* MTC_AC_15/ */
  kcg_bool MTC_AC_15;
  /* @14/MTC_CC_10_T/, @14/MTC_CC_12_A/, MTC_AC_17/, MTC_CC_10_T/, MTC_CC_12_A/ */
  kcg_bool MTC_AC_17;
  /* MTC_AC_23/ */
  kcg_bool MTC_AC_23;
  /* @16/MTC_CC_15_T/, @16/MTC_CC_17_A/, MTC_AC_25/, MTC_CC_15_T/, MTC_CC_17_A/ */
  kcg_bool MTC_AC_25;
  /* MTC_AC_28/ */
  kcg_bool MTC_AC_28;
  /* @16/MTC_CC_19_T/, @16/MTC_CC_21_A/, MTC_AC_30/, MTC_CC_19_T/, MTC_CC_21_A/ */
  kcg_bool MTC_AC_30;
  /* MTC_AC_33/ */
  kcg_bool MTC_AC_33;
  /* @16/MTC_CC_23_T/, @16/MTC_CC_25_A/, MTC_AC_35/, MTC_CC_23_T/, MTC_CC_25_A/ */
  kcg_bool MTC_AC_35;
  /* MTC_AC_41/ */
  kcg_bool MTC_AC_41;
  /* @18/MTC_CC_28_T/, @18/MTC_CC_30_A/, MTC_AC_43/, MTC_CC_28_T/, MTC_CC_30_A/ */
  kcg_bool MTC_AC_43;
  /* MTC_AC_46/ */
  kcg_bool MTC_AC_46;
  /* @18/MTC_CC_32_T/, @18/MTC_CC_34_A/, MTC_AC_48/, MTC_CC_32_T/, MTC_CC_34_A/ */
  kcg_bool MTC_AC_48;
  /* MTC_AC_51/ */
  kcg_bool MTC_AC_51;
  /* @18/MTC_CC_36_T/, @18/MTC_CC_38_A/, MTC_AC_53/, MTC_CC_36_T/, MTC_CC_38_A/ */
  kcg_bool MTC_AC_53;
  /* _L14/ */
  kcg_float64 _L14;
  /* _L13/ */
  kcg_float64 _L13;
  /* _L12/ */
  kcg_float64 _L12;
  /* _L28/ */
  kcg_float64 _L28;
  /* _L29/ */
  kcg_float64 _L29;
  /* _L30/ */
  kcg_float64 _L30;
  /* _L39/ */
  kcg_float64 _L39;
  /* _L40/ */
  kcg_float64 _L40;
  /* _L41/ */
  kcg_float64 _L41;

  /* _L11=(Check_interval_pH#3)/ */
  Check_interval_pH(
    (*pH_Data)[2],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Check_interval_pH_3);
  MTC_AC_17 = outC->Context_Check_interval_pH_3.Output1 & MTC_AC_Outputs;
  /* _L10=(Check_interval_pH#2)/ */
  Check_interval_pH(
    (*pH_Data)[1],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Check_interval_pH_2);
  MTC_AC_12 = outC->Context_Check_interval_pH_2.Output1 & MTC_AC_Outputs;
  /* _L4=(Check_interval_pH#1)/ */
  Check_interval_pH(
    (*pH_Data)[0],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Check_interval_pH_1);
  MTC_AC_7 = outC->Context_Check_interval_pH_1.Output1 & MTC_AC_Outputs;
  MTC_AC_5 = !outC->Context_Check_interval_pH_1.Output1;
  MTC_AC_10 = !outC->Context_Check_interval_pH_2.Output1;
  MTC_AC_15 = !outC->Context_Check_interval_pH_3.Output1;
  /* _L27=(Check_interval_Temperature#3)/ */
  Check_interval_Temperature(
    (*Temperature_Data)[2],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->_37_Context_Check_interval_Temperature_3);
  MTC_AC_35 = outC->_37_Context_Check_interval_Temperature_3.Output1 &
    MTC_AC_Outputs;
  /* _L26=(Check_interval_Temperature#2)/ */
  Check_interval_Temperature(
    (*Temperature_Data)[1],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->_36_Context_Check_interval_Temperature_2);
  MTC_AC_30 = outC->_36_Context_Check_interval_Temperature_2.Output1 &
    MTC_AC_Outputs;
  /* _L6=(Check_interval_Temperature#1)/ */
  Check_interval_Temperature(
    (*Temperature_Data)[0],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Check_interval_Temperature_1);
  MTC_AC_25 = outC->Context_Check_interval_Temperature_1.Output1 & MTC_AC_Outputs;
  MTC_AC_23 = !outC->Context_Check_interval_Temperature_1.Output1;
  MTC_AC_28 = !outC->_36_Context_Check_interval_Temperature_2.Output1;
  MTC_AC_33 = !outC->_37_Context_Check_interval_Temperature_3.Output1;
  /* _L38=(Check_interval_Redox#3)/ */
  Check_interval_Redox(
    (*Redox_Data)[2],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Check_interval_Redox_3);
  MTC_AC_53 = outC->Context_Check_interval_Redox_3.Output1 & MTC_AC_Outputs;
  /* _L37=(Check_interval_Redox#2)/ */
  Check_interval_Redox(
    (*Redox_Data)[1],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Check_interval_Redox_2);
  MTC_AC_48 = outC->Context_Check_interval_Redox_2.Output1 & MTC_AC_Outputs;
  /* _L5=(Check_interval_Redox#1)/ */
  Check_interval_Redox(
    (*Redox_Data)[0],
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Check_interval_Redox_1);
  MTC_AC_43 = outC->Context_Check_interval_Redox_1.Output1 & MTC_AC_Outputs;
  MTC_AC_41 = !outC->Context_Check_interval_Redox_1.Output1;
  MTC_AC_46 = !outC->Context_Check_interval_Redox_2.Output1;
  MTC_AC_51 = !outC->Context_Check_interval_Redox_3.Output1;
  if (MTC_INSTRU) {
    /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      (kcg_bool)
        (MTC_AC_Outputs | (MTC_AC_7 | MTC_AC_12 | MTC_AC_17) | MTC_AC_Outputs |
          MTC_AC_Outputs),
      &outC->_39_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS1_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS1_MTC_OBS_1 =
      outC->_39_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS1_MTC_OBS_1.Output1;
    /* @14/MTC_ALL1=(MTC::LATCHALL12#1)/ */
    LATCHALL12_MTC(
      MTC_AC_7,
      (kcg_bool) (MTC_AC_5 & MTC_AC_Outputs),
      MTC_AC_7,
      (kcg_bool) (MTC_AC_5 & MTC_AC_Outputs),
      MTC_AC_12,
      (kcg_bool) (MTC_AC_10 & MTC_AC_Outputs),
      MTC_AC_12,
      (kcg_bool) (MTC_AC_10 & MTC_AC_Outputs),
      MTC_AC_17,
      (kcg_bool) (MTC_AC_15 & MTC_AC_Outputs),
      MTC_AC_17,
      (kcg_bool) (MTC_AC_15 & MTC_AC_Outputs),
      &outC->_38_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS2_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS2_MTC_OBS_1 =
      outC->_38_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS2_MTC_OBS_1.Output1;
    /* @15/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      (kcg_bool)
        (MTC_AC_Outputs | (MTC_AC_25 | MTC_AC_30 | MTC_AC_35) | MTC_AC_Outputs |
          MTC_AC_Outputs),
      &outC->_35_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS3_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS3_MTC_OBS_1 =
      outC->_35_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS3_MTC_OBS_1.Output1;
    /* @16/MTC_ALL1=(MTC::LATCHALL12#1)/ */
    LATCHALL12_MTC(
      MTC_AC_25,
      (kcg_bool) (MTC_AC_23 & MTC_AC_Outputs),
      MTC_AC_25,
      (kcg_bool) (MTC_AC_23 & MTC_AC_Outputs),
      MTC_AC_30,
      (kcg_bool) (MTC_AC_28 & MTC_AC_Outputs),
      MTC_AC_30,
      (kcg_bool) (MTC_AC_28 & MTC_AC_Outputs),
      MTC_AC_35,
      (kcg_bool) (MTC_AC_33 & MTC_AC_Outputs),
      MTC_AC_35,
      (kcg_bool) (MTC_AC_33 & MTC_AC_Outputs),
      &outC->_34_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS4_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS4_MTC_OBS_1 =
      outC->_34_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS4_MTC_OBS_1.Output1;
    /* @17/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      (kcg_bool)
        (MTC_AC_Outputs | (MTC_AC_43 | MTC_AC_48 | MTC_AC_53) | MTC_AC_Outputs |
          MTC_AC_Outputs),
      &outC->Context_LATCHALL01_MTC_1_Vote_Alog_PATHS5_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS5_MTC_OBS_1 =
      outC->Context_LATCHALL01_MTC_1_Vote_Alog_PATHS5_MTC_OBS_1.Output1;
    /* @18/MTC_ALL1=(MTC::LATCHALL12#1)/ */
    LATCHALL12_MTC(
      MTC_AC_43,
      (kcg_bool) (MTC_AC_41 & MTC_AC_Outputs),
      MTC_AC_43,
      (kcg_bool) (MTC_AC_41 & MTC_AC_Outputs),
      MTC_AC_48,
      (kcg_bool) (MTC_AC_46 & MTC_AC_Outputs),
      MTC_AC_48,
      (kcg_bool) (MTC_AC_46 & MTC_AC_Outputs),
      MTC_AC_53,
      (kcg_bool) (MTC_AC_51 & MTC_AC_Outputs),
      MTC_AC_53,
      (kcg_bool) (MTC_AC_51 & MTC_AC_Outputs),
      &outC->Context_LATCHALL12_MTC_1_Vote_Alog_PATHS6_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS6_MTC_OBS_1 =
      outC->Context_LATCHALL12_MTC_1_Vote_Alog_PATHS6_MTC_OBS_1.Output1;
  }
  else {
    outC->MTC_ALL1_Vote_Alog_PATHS1_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Vote_Alog_PATHS2_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Vote_Alog_PATHS3_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Vote_Alog_PATHS4_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Vote_Alog_PATHS5_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Vote_Alog_PATHS6_MTC_OBS_1 = kcg_lit_Result_MTC(0);
  }
  outC->every = MTC_AC_Outputs;
  if (outC->every) {
    /* @12/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*Redox_Data)[2],
      &outC->_33_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_3);
    if (MTC_INSTRU) {
      /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_33_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_3.Output,
        &outC->_32_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_3);
      outC->MTC_ALL1_Check_interval_Redox_1_MTC_OBS_3_float64 =
        outC->_32_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_3.Output1;
    }
    else {
      outC->MTC_ALL1_Check_interval_Redox_1_MTC_OBS_3_float64 = kcg_lit_Result_MTC(0);
    }
  }
  outC->every40 = MTC_AC_Outputs;
  if (outC->every40) {
    /* @11/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*Redox_Data)[1],
      &outC->_31_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_2);
    if (MTC_INSTRU) {
      /* @11/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_31_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_2.Output,
        &outC->_30_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_2);
      outC->_1_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_2_float64 =
        outC->_30_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_2.Output1;
    }
    else {
      outC->_1_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_2_float64 =
        kcg_lit_Result_MTC(0);
    }
  }
  outC->every41 = MTC_AC_Outputs;
  if (outC->every41) {
    /* @10/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*Redox_Data)[0],
      &outC->_29_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_1);
    if (MTC_INSTRU) {
      /* @10/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_29_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_1.Output,
        &outC->_28_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_1);
      outC->_2_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_1_float64 =
        outC->_28_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_1.Output1;
    }
    else {
      outC->_2_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_1_float64 =
        kcg_lit_Result_MTC(0);
    }
  }
  outC->every42 = MTC_AC_Outputs;
  /* _L39= */
  if (outC->Context_Check_interval_Redox_1.Output1) {
    _L39 = (*Redox_Data)[0];
  }
  else {
    _L39 = Beyond_Interval_value;
  }
  /* _L40= */
  if (outC->Context_Check_interval_Redox_2.Output1) {
    _L40 = (*Redox_Data)[1];
  }
  else {
    _L40 = Beyond_Interval_value;
  }
  /* _L41= */
  if (outC->Context_Check_interval_Redox_3.Output1) {
    _L41 = (*Redox_Data)[2];
  }
  else {
    _L41 = Beyond_Interval_value;
  }
  if (outC->every42) {
    /* @9/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L39,
      &outC->_27_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_3);
    /* @9/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L40,
      &outC->_26_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_3);
    /* @9/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L41,
      &outC->_25_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_3);
    if (MTC_INSTRU) {
      /* @9/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        kcg_true,
        outC->_27_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_3.Output,
        outC->_26_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_3.Output,
        outC->_25_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_3.Output,
        &outC->_24_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_3);
      outC->MTC_ALL1_Calculated_value_1110_MTC_OBS_3_float64_float64_float64_float64 =
        outC->_24_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_3.Output1;
    }
    else {
      outC->MTC_ALL1_Calculated_value_1110_MTC_OBS_3_float64_float64_float64_float64 =
        kcg_lit_Result_MTC(0);
    }
  }
  outC->every43 = MTC_AC_Outputs;
  if (outC->every43) {
    /* @8/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*Temperature_Data)[2],
      &outC->_23_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_3);
    if (MTC_INSTRU) {
      /* @8/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_23_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_3.Output,
        &outC->_22_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_3);
      outC->MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_3_float64 =
        outC->_22_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_3.Output1;
    }
    else {
      outC->MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_3_float64 =
        kcg_lit_Result_MTC(0);
    }
  }
  outC->every44 = MTC_AC_Outputs;
  if (outC->every44) {
    /* @7/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*Temperature_Data)[1],
      &outC->_21_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_2);
    if (MTC_INSTRU) {
      /* @7/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_21_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_2.Output,
        &outC->_20_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_2);
      outC->_3_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_2_float64 =
        outC->_20_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_2.Output1;
    }
    else {
      outC->_3_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_2_float64 =
        kcg_lit_Result_MTC(0);
    }
  }
  outC->every45 = MTC_AC_Outputs;
  if (outC->every45) {
    /* @6/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*Temperature_Data)[0],
      &outC->_19_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_1);
    if (MTC_INSTRU) {
      /* @6/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_19_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_1.Output,
        &outC->_18_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_1);
      outC->_4_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_1_float64 =
        outC->_18_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_1.Output1;
    }
    else {
      outC->_4_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_1_float64 =
        kcg_lit_Result_MTC(0);
    }
  }
  outC->every46 = MTC_AC_Outputs;
  /* _L28= */
  if (outC->Context_Check_interval_Temperature_1.Output1) {
    _L28 = (*Temperature_Data)[0];
  }
  else {
    _L28 = Beyond_Interval_value;
  }
  /* _L29= */
  if (outC->_36_Context_Check_interval_Temperature_2.Output1) {
    _L29 = (*Temperature_Data)[1];
  }
  else {
    _L29 = Beyond_Interval_value;
  }
  /* _L30= */
  if (outC->_37_Context_Check_interval_Temperature_3.Output1) {
    _L30 = (*Temperature_Data)[2];
  }
  else {
    _L30 = Beyond_Interval_value;
  }
  if (outC->every46) {
    /* @5/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L28,
      &outC->_17_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_2);
    /* @5/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L29,
      &outC->_16_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_2);
    /* @5/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L30,
      &outC->_15_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_2);
    if (MTC_INSTRU) {
      /* @5/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        kcg_true,
        outC->_17_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_2.Output,
        outC->_16_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_2.Output,
        outC->_15_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_2.Output,
        &outC->_14_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_2);
      outC->_5_MTC_ALL1_Calculated_value_1110_MTC_OBS_2_float64_float64_float64_float64 =
        outC->_14_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_2.Output1;
    }
    else {
      outC->_5_MTC_ALL1_Calculated_value_1110_MTC_OBS_2_float64_float64_float64_float64 =
        kcg_lit_Result_MTC(0);
    }
  }
  outC->every47 = MTC_AC_Outputs;
  if (outC->every47) {
    /* @4/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*pH_Data)[2],
      &outC->_13_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_3);
    if (MTC_INSTRU) {
      /* @4/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_13_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_3.Output,
        &outC->_12_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_3);
      outC->MTC_ALL1_Check_interval_pH_1_MTC_OBS_3_float64 =
        outC->_12_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_3.Output1;
    }
    else {
      outC->MTC_ALL1_Check_interval_pH_1_MTC_OBS_3_float64 = kcg_lit_Result_MTC(0);
    }
  }
  outC->every48 = MTC_AC_Outputs;
  if (outC->every48) {
    /* @3/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*pH_Data)[1],
      &outC->_11_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_2);
    if (MTC_INSTRU) {
      /* @3/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_11_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_2.Output,
        &outC->_10_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_2);
      outC->_6_MTC_ALL1_Check_interval_pH_1_MTC_OBS_2_float64 =
        outC->_10_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_2.Output1;
    }
    else {
      outC->_6_MTC_ALL1_Check_interval_pH_1_MTC_OBS_2_float64 = kcg_lit_Result_MTC(0);
    }
  }
  outC->every49 = MTC_AC_Outputs;
  if (outC->every49) {
    /* @2/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      (*pH_Data)[0],
      &outC->_9_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_1);
    if (MTC_INSTRU) {
      /* @2/MTC_ALL1=(MTC::LATCHALL02#1)/ */
      LATCHALL02_MTC(
        kcg_true,
        outC->_9_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_1.Output,
        &outC->Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_1);
      outC->_7_MTC_ALL1_Check_interval_pH_1_MTC_OBS_1_float64 =
        outC->Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_1.Output1;
    }
    else {
      outC->_7_MTC_ALL1_Check_interval_pH_1_MTC_OBS_1_float64 = kcg_lit_Result_MTC(0);
    }
  }
  outC->every50 = MTC_AC_Outputs;
  /* _L12= */
  if (outC->Context_Check_interval_pH_1.Output1) {
    _L12 = (*pH_Data)[0];
  }
  else {
    _L12 = Beyond_Interval_value;
  }
  /* _L13= */
  if (outC->Context_Check_interval_pH_2.Output1) {
    _L13 = (*pH_Data)[1];
  }
  else {
    _L13 = Beyond_Interval_value;
  }
  /* _L14= */
  if (outC->Context_Check_interval_pH_3.Output1) {
    _L14 = (*pH_Data)[2];
  }
  else {
    _L14 = Beyond_Interval_value;
  }
  if (outC->every50) {
    /* @1/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L12,
      &outC->Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_1);
    /* @1/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L13,
      &outC->Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_1);
    /* @1/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
    GenericInputChanged_MTC_Utils_float64(
      _L14,
      &outC->Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_1);
    if (MTC_INSTRU) {
      /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
      LATCHALL04_MTC(
        kcg_true,
        outC->Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_1.Output,
        outC->Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_1.Output,
        outC->Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_1.Output,
        &outC->Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_1);
      outC->_8_MTC_ALL1_Calculated_value_1110_MTC_OBS_1_float64_float64_float64_float64 =
        outC->Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_1.Output1;
    }
    else {
      outC->_8_MTC_ALL1_Calculated_value_1110_MTC_OBS_1_float64_float64_float64_float64 =
        kcg_lit_Result_MTC(0);
    }
  }
  /* _L45=(Calculated_value#3)/ */
  Calculated_value(
    _L39,
    _L40,
    _L41,
    Delta_Redox,
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Calculated_value_3);
  outC->Redox = outC->Context_Calculated_value_3.Output1;
  /* _L34=(Calculated_value#2)/ */
  Calculated_value(
    _L28,
    _L29,
    _L30,
    Delta_Temperature,
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Calculated_value_2);
  outC->Temperature = outC->Context_Calculated_value_2.Output1;
  /* _L18=(Calculated_value#1)/ */
  Calculated_value(
    _L12,
    _L13,
    _L14,
    Delta_pH,
    MTC_AC_Outputs,
    MTC_INSTRU,
    &outC->Context_Calculated_value_1);
  outC->pH = outC->Context_Calculated_value_1.Output1;
}

#ifndef KCG_USER_DEFINED_INIT
void Vote_Alog_init(outC_Vote_Alog *outC)
{
  outC->every = kcg_true;
  outC->every40 = kcg_true;
  outC->every41 = kcg_true;
  outC->every42 = kcg_true;
  outC->every43 = kcg_true;
  outC->every44 = kcg_true;
  outC->every45 = kcg_true;
  outC->every46 = kcg_true;
  outC->every47 = kcg_true;
  outC->every48 = kcg_true;
  outC->every49 = kcg_true;
  outC->every50 = kcg_true;
  Result_MTC_init(
    &outC->_8_MTC_ALL1_Calculated_value_1110_MTC_OBS_1_float64_float64_float64_float64);
  Result_MTC_init(&outC->_7_MTC_ALL1_Check_interval_pH_1_MTC_OBS_1_float64);
  Result_MTC_init(&outC->_6_MTC_ALL1_Check_interval_pH_1_MTC_OBS_2_float64);
  Result_MTC_init(&outC->MTC_ALL1_Check_interval_pH_1_MTC_OBS_3_float64);
  Result_MTC_init(
    &outC->_5_MTC_ALL1_Calculated_value_1110_MTC_OBS_2_float64_float64_float64_float64);
  Result_MTC_init(
    &outC->_4_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_1_float64);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_2_float64);
  Result_MTC_init(&outC->MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_3_float64);
  Result_MTC_init(
    &outC->MTC_ALL1_Calculated_value_1110_MTC_OBS_3_float64_float64_float64_float64);
  Result_MTC_init(&outC->_2_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_1_float64);
  Result_MTC_init(&outC->_1_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_2_float64);
  Result_MTC_init(&outC->MTC_ALL1_Check_interval_Redox_1_MTC_OBS_3_float64);
  Result_MTC_init(&outC->MTC_ALL1_Vote_Alog_PATHS6_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Vote_Alog_PATHS5_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Vote_Alog_PATHS4_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Vote_Alog_PATHS3_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Vote_Alog_PATHS2_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Vote_Alog_PATHS1_MTC_OBS_1);
  outC->Redox = kcg_lit_float64(0.0);
  outC->Temperature = kcg_lit_float64(0.0);
  outC->pH = kcg_lit_float64(0.0);
  /* _L18=(Calculated_value#1)/ */
  Calculated_value_init(&outC->Context_Calculated_value_1);
  /* _L34=(Calculated_value#2)/ */
  Calculated_value_init(&outC->Context_Calculated_value_2);
  /* _L45=(Calculated_value#3)/ */
  Calculated_value_init(&outC->Context_Calculated_value_3);
  /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_1);
  /* @1/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_1);
  /* @1/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_1);
  /* @1/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_1);
  /* @2/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_9_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_10_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_2);
  /* @3/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_11_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_2);
  /* @4/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_12_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_3);
  /* @4/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_13_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_3);
  /* @5/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->_14_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_2);
  /* @5/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_15_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_2);
  /* @5/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_16_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_2);
  /* @5/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_17_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_2);
  /* @6/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_18_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_1);
  /* @6/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_19_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_20_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_2);
  /* @7/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_21_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_2);
  /* @8/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_22_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_3);
  /* @8/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_23_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_3);
  /* @9/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->_24_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_3);
  /* @9/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_25_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_3);
  /* @9/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_26_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_3);
  /* @9/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_27_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_3);
  /* @10/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_28_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_1);
  /* @10/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_29_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_1);
  /* @11/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_30_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_2);
  /* @11/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_31_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_2);
  /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_init(
    &outC->_32_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_3);
  /* @12/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_init_MTC_Utils_float64(
    &outC->_33_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_3);
  /* @18/MTC_ALL1=(MTC::LATCHALL12#1)/ */
  LATCHALL12_MTC_init(
    &outC->Context_LATCHALL12_MTC_1_Vote_Alog_PATHS6_MTC_OBS_1);
  /* @17/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_1_Vote_Alog_PATHS5_MTC_OBS_1);
  /* _L5=(Check_interval_Redox#1)/ */
  Check_interval_Redox_init(&outC->Context_Check_interval_Redox_1);
  /* _L37=(Check_interval_Redox#2)/ */
  Check_interval_Redox_init(&outC->Context_Check_interval_Redox_2);
  /* _L38=(Check_interval_Redox#3)/ */
  Check_interval_Redox_init(&outC->Context_Check_interval_Redox_3);
  /* @16/MTC_ALL1=(MTC::LATCHALL12#1)/ */
  LATCHALL12_MTC_init(
    &outC->_34_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS4_MTC_OBS_1);
  /* @15/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_35_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS3_MTC_OBS_1);
  /* _L6=(Check_interval_Temperature#1)/ */
  Check_interval_Temperature_init(&outC->Context_Check_interval_Temperature_1);
  /* _L26=(Check_interval_Temperature#2)/ */
  Check_interval_Temperature_init(
    &outC->_36_Context_Check_interval_Temperature_2);
  /* _L27=(Check_interval_Temperature#3)/ */
  Check_interval_Temperature_init(
    &outC->_37_Context_Check_interval_Temperature_3);
  /* @14/MTC_ALL1=(MTC::LATCHALL12#1)/ */
  LATCHALL12_MTC_init(
    &outC->_38_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS2_MTC_OBS_1);
  /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_39_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS1_MTC_OBS_1);
  /* _L4=(Check_interval_pH#1)/ */
  Check_interval_pH_init(&outC->Context_Check_interval_pH_1);
  /* _L10=(Check_interval_pH#2)/ */
  Check_interval_pH_init(&outC->Context_Check_interval_pH_2);
  /* _L11=(Check_interval_pH#3)/ */
  Check_interval_pH_init(&outC->Context_Check_interval_pH_3);
}
#endif /* KCG_USER_DEFINED_INIT */


void Vote_Alog_reset(outC_Vote_Alog *outC)
{
  /* _L18=(Calculated_value#1)/ */
  Calculated_value_reset(&outC->Context_Calculated_value_1);
  /* _L34=(Calculated_value#2)/ */
  Calculated_value_reset(&outC->Context_Calculated_value_2);
  /* _L45=(Calculated_value#3)/ */
  Calculated_value_reset(&outC->Context_Calculated_value_3);
  /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_1);
  /* @1/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_1);
  /* @1/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_1);
  /* @1/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_1);
  /* @2/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_9_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_10_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_2);
  /* @3/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_11_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_2);
  /* @4/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_12_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_3);
  /* @4/MTC_pH_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_13_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_3);
  /* @5/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->_14_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_2);
  /* @5/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_15_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_2);
  /* @5/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_16_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_2);
  /* @5/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_17_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_2);
  /* @6/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_18_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_1);
  /* @6/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_19_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_20_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_2);
  /* @7/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_21_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_2);
  /* @8/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_22_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_3);
  /* @8/MTC_temperature_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_23_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_3);
  /* @9/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->_24_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_3);
  /* @9/MTC_value3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_25_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_3);
  /* @9/MTC_value2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_26_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_3);
  /* @9/MTC_value1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_27_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_3);
  /* @10/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_28_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_1);
  /* @10/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_29_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_1);
  /* @11/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_30_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_2);
  /* @11/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_31_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_2);
  /* @12/MTC_ALL1=(MTC::LATCHALL02#1)/ */
  LATCHALL02_MTC_reset(
    &outC->_32_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_3);
  /* @12/MTC_Redox_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */
  GenericInputChanged_reset_MTC_Utils_float64(
    &outC->_33_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_3);
  /* @18/MTC_ALL1=(MTC::LATCHALL12#1)/ */
  LATCHALL12_MTC_reset(
    &outC->Context_LATCHALL12_MTC_1_Vote_Alog_PATHS6_MTC_OBS_1);
  /* @17/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_1_Vote_Alog_PATHS5_MTC_OBS_1);
  /* _L5=(Check_interval_Redox#1)/ */
  Check_interval_Redox_reset(&outC->Context_Check_interval_Redox_1);
  /* _L37=(Check_interval_Redox#2)/ */
  Check_interval_Redox_reset(&outC->Context_Check_interval_Redox_2);
  /* _L38=(Check_interval_Redox#3)/ */
  Check_interval_Redox_reset(&outC->Context_Check_interval_Redox_3);
  /* @16/MTC_ALL1=(MTC::LATCHALL12#1)/ */
  LATCHALL12_MTC_reset(
    &outC->_34_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS4_MTC_OBS_1);
  /* @15/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_35_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS3_MTC_OBS_1);
  /* _L6=(Check_interval_Temperature#1)/ */
  Check_interval_Temperature_reset(&outC->Context_Check_interval_Temperature_1);
  /* _L26=(Check_interval_Temperature#2)/ */
  Check_interval_Temperature_reset(
    &outC->_36_Context_Check_interval_Temperature_2);
  /* _L27=(Check_interval_Temperature#3)/ */
  Check_interval_Temperature_reset(
    &outC->_37_Context_Check_interval_Temperature_3);
  /* @14/MTC_ALL1=(MTC::LATCHALL12#1)/ */
  LATCHALL12_MTC_reset(
    &outC->_38_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS2_MTC_OBS_1);
  /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_39_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS1_MTC_OBS_1);
  /* _L4=(Check_interval_pH#1)/ */
  Check_interval_pH_reset(&outC->Context_Check_interval_pH_1);
  /* _L10=(Check_interval_pH#2)/ */
  Check_interval_pH_reset(&outC->Context_Check_interval_pH_2);
  /* _L11=(Check_interval_pH#3)/ */
  Check_interval_pH_reset(&outC->Context_Check_interval_pH_3);
}

/*
  Expanded instances for: Vote_Alog/
  @1: (MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS#2)
  @4: (MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS#3)
  @5: (MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS#2)
  @6: (MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS#2)
  @8: (MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS#3)
  @9: (MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS#3)
  @10: (MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS#1)
  @11: (MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS#2)
  @12: (MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS#3)
  @18: (MTCEx::MTC_Observers::Vote_Alog_PATHS6_MTC_OBS#1)
  @17: (MTCEx::MTC_Observers::Vote_Alog_PATHS5_MTC_OBS#1)
  @16: (MTCEx::MTC_Observers::Vote_Alog_PATHS4_MTC_OBS#1)
  @15: (MTCEx::MTC_Observers::Vote_Alog_PATHS3_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::Vote_Alog_PATHS2_MTC_OBS#1)
  @13: (MTCEx::MTC_Observers::Vote_Alog_PATHS1_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Vote_Alog.c
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

