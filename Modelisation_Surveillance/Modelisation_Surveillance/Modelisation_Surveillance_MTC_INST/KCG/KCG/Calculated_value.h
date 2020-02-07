/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */
#ifndef _Calculated_value_H_
#define _Calculated_value_H_

#include "kcg_types.h"
#include "LATCHALL05_MTC.h"
#include "GenericInputChanged_MTC_Utils_float64.h"
#include "Check_Delta_3.h"
#include "LATCHALL03_MTC.h"
#include "LATCHALL06_MTC.h"
#include "LATCHALL01_MTC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Output1/ */ Output1;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @32/MTC_ALL1/ */ MTC_ALL1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2;
  Result_MTC /* @30/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_8;
  Result_MTC /* @29/MTC_ALL1/ */ _1_MTC_ALL1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3;
  Result_MTC /* @28/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3;
  Result_MTC /* @26/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_7;
  Result_MTC /* @25/MTC_ALL1/ */ _2_MTC_ALL1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4;
  Result_MTC /* @24/MTC_ALL1/ */ _3_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4;
  Result_MTC /* @22/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_6;
  Result_MTC /* @21/MTC_ALL1/ */ _4_MTC_ALL1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5;
  Result_MTC /* @20/MTC_ALL1/ */ _5_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5;
  Result_MTC /* @18/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_5;
  Result_MTC /* @17/MTC_ALL1/ */ _6_MTC_ALL1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6;
  Result_MTC /* @16/MTC_ALL1/ */ _7_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6;
  Result_MTC /* @14/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_4;
  Result_MTC /* @13/MTC_ALL1/ */ _8_MTC_ALL1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7;
  Result_MTC /* @12/MTC_ALL1/ */ _9_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7;
  Result_MTC /* @10/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_3;
  Result_MTC /* @9/MTC_ALL1/ */ _10_MTC_ALL1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8;
  Result_MTC /* @8/MTC_ALL1/ */ _11_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8;
  Result_MTC /* @6/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_2;
  Result_MTC /* @5/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_1;
  Result_MTC /* @33/MTC_ALL1/ */ _12_MTC_ALL1_Calculated_value_PATHS8_MTC_OBS_1;
  Result_MTC /* @34/MTC_ALL1/ */ _13_MTC_ALL1_Calculated_value_PATHS9_MTC_OBS_1;
  Result_MTC /* @35/MTC_ALL1/ */ _14_MTC_ALL1_Calculated_value_PATHS10_MTC_OBS_1;
  Result_MTC /* @4/MTC_ALL1/ */ MTC_ALL1_math_Mean_MTC_OBS_5;
  Result_MTC /* @3/MTC_ALL1/ */ MTC_ALL1_math_Mean_MTC_OBS_3;
  Result_MTC /* @2/MTC_ALL1/ */ MTC_ALL1_math_Mean_MTC_OBS_1;
  Result_MTC /* @1/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_1111_MTC_OBS_1_float64_float64_float64_float64;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Check_Delta_3 /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */ Context_Check_Delta_3_1;
  outC_LATCHALL05_MTC /* @1/MTC_ALL1=(MTC::LATCHALL05#1)/ */ Context_LATCHALL05_MTC_1_Check_Delta_3_1111_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @1/MTC_Delta_CHANGED=(MTC_Utils::GenericInputChanged#4)/ */ Context_GenericInputChanged_4_Check_Delta_3_1111_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @1/MTC_Input3_CHANGED=(MTC_Utils::GenericInputChanged#3)/ */ Context_GenericInputChanged_3_Check_Delta_3_1111_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @1/MTC_Input2_CHANGED=(MTC_Utils::GenericInputChanged#2)/ */ Context_GenericInputChanged_2_Check_Delta_3_1111_MTC_OBS_1;
  outC_GenericInputChanged_MTC_Utils_float64 /* @1/MTC_Input1_CHANGED=(MTC_Utils::GenericInputChanged#1)/ */ Context_GenericInputChanged_1_Check_Delta_3_1111_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _15_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _16_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_5;
  outC_LATCHALL03_MTC /* @35/MTC_ALL1=(MTC::LATCHALL03#1)/ */ Context_LATCHALL03_MTC_1_Calculated_value_PATHS10_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @34/MTC_ALL1=(MTC::LATCHALL03#1)/ */ _17_Context_LATCHALL03_MTC_1_Calculated_value_PATHS9_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @33/MTC_ALL1=(MTC::LATCHALL03#1)/ */ _18_Context_LATCHALL03_MTC_1_Calculated_value_PATHS8_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _19_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8;
  outC_LATCHALL06_MTC /* @9/MTC_ALL1=(MTC::LATCHALL06#1)/ */ Context_LATCHALL06_MTC_1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8;
  outC_LATCHALL01_MTC /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @12/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7;
  outC_LATCHALL06_MTC /* @13/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _23_Context_LATCHALL06_MTC_1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7;
  outC_LATCHALL01_MTC /* @14/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _24_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4;
  outC_LATCHALL01_MTC /* @16/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6;
  outC_LATCHALL06_MTC /* @17/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _26_Context_LATCHALL06_MTC_1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6;
  outC_LATCHALL01_MTC /* @18/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5;
  outC_LATCHALL01_MTC /* @20/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5;
  outC_LATCHALL06_MTC /* @21/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _29_Context_LATCHALL06_MTC_1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5;
  outC_LATCHALL01_MTC /* @22/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _30_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6;
  outC_LATCHALL01_MTC /* @24/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4;
  outC_LATCHALL06_MTC /* @25/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _32_Context_LATCHALL06_MTC_1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4;
  outC_LATCHALL01_MTC /* @26/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _33_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7;
  outC_LATCHALL01_MTC /* @28/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3;
  outC_LATCHALL06_MTC /* @29/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _35_Context_LATCHALL06_MTC_1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3;
  outC_LATCHALL01_MTC /* @30/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _36_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8;
  outC_LATCHALL06_MTC /* @32/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _37_Context_LATCHALL06_MTC_1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool /* @27/MTC_cond/, IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool every38;
  kcg_bool /* @19/MTC_cond/,
     IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* @11/MTC_cond/,
     IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* @7/MTC_cond/,
     IfBlock1:else:else:else:else:else:else: */ _39_else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* @15/MTC_cond/,
     IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool every40;
  kcg_bool /* @23/MTC_cond/, IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool every41;
  kcg_bool /* @31/MTC_cond/, IfBlock1: */ IfBlock1_clock;
} outC_Calculated_value;

/* ===========  node initialization and cycle functions  =========== */
/* Calculated_value/ */
extern void Calculated_value(
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
  outC_Calculated_value *outC);

extern void Calculated_value_reset(outC_Calculated_value *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Calculated_value_init(outC_Calculated_value *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Calculated_value/
  @1: (MTCEx::MTC_Observers::Check_Delta_3_1111_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#3)
  @4: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#5)
  @5: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @6: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#2)
  @7: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST#8)
  @8: @7/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @9: @7/(MTCEx::MTC_Observers::Calculated_value_PATHS7_MTC_OBS#1)
  @10: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#3)
  @11: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST#7)
  @12: @11/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @13: @11/(MTCEx::MTC_Observers::Calculated_value_PATHS6_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#4)
  @15: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_MTC_INST#6)
  @16: @15/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @17: @15/(MTCEx::MTC_Observers::Calculated_value_PATHS5_MTC_OBS#1)
  @18: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#5)
  @19: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_MTC_INST#5)
  @20: @19/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @21: @19/(MTCEx::MTC_Observers::Calculated_value_PATHS4_MTC_OBS#1)
  @22: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#6)
  @23: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_MTC_INST#4)
  @24: @23/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @25: @23/(MTCEx::MTC_Observers::Calculated_value_PATHS3_MTC_OBS#1)
  @26: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#7)
  @27: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_MTC_INST#3)
  @28: @27/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @29: @27/(MTCEx::MTC_Observers::Calculated_value_PATHS2_MTC_OBS#1)
  @30: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#8)
  @31: (MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_MTC_INST#2)
  @32: @31/(MTCEx::MTC_Observers::Calculated_value_PATHS1_MTC_OBS#1)
  @33: (MTCEx::MTC_Observers::Calculated_value_PATHS8_MTC_OBS#1)
  @34: (MTCEx::MTC_Observers::Calculated_value_PATHS9_MTC_OBS#1)
  @35: (MTCEx::MTC_Observers::Calculated_value_PATHS10_MTC_OBS#1)
*/

#endif /* _Calculated_value_H_ */
/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Calculated_value.h
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

