/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */
#ifndef _Check_Delta_3_H_
#define _Check_Delta_3_H_

#include "kcg_types.h"
#include "LATCHALL07_MTC.h"
#include "LATCHALL03_MTC.h"
#include "LATCHALL06_MTC.h"
#include "LATCHALL01_MTC.h"
#include "LATCHALL04_MTC.h"
#include "LATCHALL02_MTC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Output1/ */ Output1;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @1/MTC_ALL1/ */ MTC_ALL1_math_Mean3_MTC_OBS_4;
  Result_MTC /* @2/MTC_ALL1/ */ MTC_ALL1_math_Mean_MTC_OBS_1;
  Result_MTC /* @3/MTC_ALL1/ */ MTC_ALL1_math_Mean_MTC_OBS_2;
  Result_MTC /* @4/MTC_ALL1/ */ MTC_ALL1_math_Mean_MTC_OBS_3;
  Result_MTC /* @5/MTC_ALL1/ */ MTC_ALL1_math_Mean3_MTC_OBS_6;
  Result_MTC /* @6/MTC_ALL1/ */ MTC_ALL1_math_Abs_MTC_OBS_1;
  Result_MTC /* @7/MTC_ALL1/ */ MTC_ALL1_math_Mean3_MTC_OBS_1;
  Result_MTC /* @8/MTC_ALL1/ */ MTC_ALL1_math_Abs_MTC_OBS_2;
  Result_MTC /* @9/MTC_ALL1/ */ MTC_ALL1_math_Abs_MTC_OBS_3;
  Result_MTC /* @51/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS14_MTC_OBS_1;
  Result_MTC /* @50/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS13_MTC_OBS_1;
  Result_MTC /* @49/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS12_MTC_OBS_1;
  Result_MTC /* @48/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS11_MTC_OBS_1;
  Result_MTC /* @47/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS10_MTC_OBS_1;
  Result_MTC /* @46/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS9_MTC_OBS_1;
  Result_MTC /* @45/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS8_MTC_OBS_1;
  Result_MTC /* @44/MTC_ALL1/ */ MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3;
  Result_MTC /* @42/MTC_ALL1/ */ _1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2;
  Result_MTC /* @10/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_1;
  Result_MTC /* @11/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_2;
  Result_MTC /* @13/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11;
  Result_MTC /* @14/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11;
  Result_MTC /* @15/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_3;
  Result_MTC /* @17/MTC_ALL1/ */ _2_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10;
  Result_MTC /* @18/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10;
  Result_MTC /* @19/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_4;
  Result_MTC /* @21/MTC_ALL1/ */ _3_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9;
  Result_MTC /* @22/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9;
  Result_MTC /* @23/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_5;
  Result_MTC /* @25/MTC_ALL1/ */ _4_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8;
  Result_MTC /* @26/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8;
  Result_MTC /* @27/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_6;
  Result_MTC /* @29/MTC_ALL1/ */ _5_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7;
  Result_MTC /* @30/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7;
  Result_MTC /* @31/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_7;
  Result_MTC /* @33/MTC_ALL1/ */ _6_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6;
  Result_MTC /* @34/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6;
  Result_MTC /* @35/MTC_ALL1/ */ MTC_ALL1_CONTROL_MTC_OBS_8;
  Result_MTC /* @40/MTC_ALL1/ */ MTC_ALL1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1;
  Result_MTC /* @37/MTC_ALL1/ */ _7_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL01_MTC /* @1/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_4;
  outC_LATCHALL01_MTC /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _8_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _9_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _10_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _11_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_6;
  outC_LATCHALL01_MTC /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _12_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @9/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @51/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS14_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @50/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _15_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS13_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @49/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _16_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS12_MTC_OBS_1;
  outC_LATCHALL07_MTC /* @48/MTC_ALL1=(MTC::LATCHALL07#1)/ */ Context_LATCHALL07_MTC_1_Check_Delta_3_PATHS11_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @47/MTC_ALL1=(MTC::LATCHALL03#1)/ */ Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS10_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @46/MTC_ALL1=(MTC::LATCHALL03#1)/ */ _17_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS9_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @45/MTC_ALL1=(MTC::LATCHALL03#1)/ */ _18_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS8_MTC_OBS_1;
  outC_LATCHALL04_MTC /* @44/MTC_ALL1=(MTC::LATCHALL04#1)/ */ Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3;
  outC_LATCHALL04_MTC /* @42/MTC_ALL1=(MTC::LATCHALL04#1)/ */ _19_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2;
  outC_LATCHALL01_MTC /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */ Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @11/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @13/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11;
  outC_LATCHALL06_MTC /* @14/MTC_ALL1=(MTC::LATCHALL06#1)/ */ Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11;
  outC_LATCHALL01_MTC /* @15/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @17/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _23_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10;
  outC_LATCHALL06_MTC /* @18/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _24_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10;
  outC_LATCHALL01_MTC /* @19/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4;
  outC_LATCHALL01_MTC /* @21/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _26_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9;
  outC_LATCHALL06_MTC /* @22/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _27_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9;
  outC_LATCHALL01_MTC /* @23/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5;
  outC_LATCHALL01_MTC /* @25/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _29_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8;
  outC_LATCHALL06_MTC /* @26/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _30_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8;
  outC_LATCHALL01_MTC /* @27/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6;
  outC_LATCHALL01_MTC /* @29/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _32_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7;
  outC_LATCHALL06_MTC /* @30/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _33_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7;
  outC_LATCHALL01_MTC /* @31/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7;
  outC_LATCHALL01_MTC /* @33/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _35_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6;
  outC_LATCHALL06_MTC /* @34/MTC_ALL1=(MTC::LATCHALL06#1)/ */ _36_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6;
  outC_LATCHALL01_MTC /* @35/MTC_ALL1=(MTC::LATCHALL01#1)/ */ _37_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8;
  outC_LATCHALL02_MTC /* @40/MTC_ALL1=(MTC::LATCHALL02#1)/ */ Context_LATCHALL02_MTC_1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1;
  outC_LATCHALL04_MTC /* @37/MTC_ALL1=(MTC::LATCHALL04#1)/ */ _38_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @39/MTC_cond/,
     @39/all_fail/,
     IfBlock1:,
     _L20/,
     all_fail/ */ IfBlock1_clock;
  kcg_bool every;
  kcg_bool every39;
  kcg_bool every40;
  kcg_bool every41;
  kcg_bool /* @28/MTC_cond/, IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* @20/MTC_cond/,
     IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool every42;
  kcg_bool /* @12/MTC_cond/,
     IfBlock1:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool every43;
  kcg_bool every44;
  kcg_bool /* @16/MTC_cond/,
     IfBlock1:else:else:else:else:else: */ _45_else_clock_else_else_else_else_IfBlock1;
  kcg_bool every46;
  kcg_bool /* @24/MTC_cond/,
     IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* @32/MTC_cond/, IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool every47;
} outC_Check_Delta_3;

/* ===========  node initialization and cycle functions  =========== */
/* Check_Delta_3/ */
extern void Check_Delta_3(
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
  outC_Check_Delta_3 *outC);

extern void Check_Delta_3_reset(outC_Check_Delta_3 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Check_Delta_3_init(outC_Check_Delta_3 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Check_Delta_3/
  @1: (MTCEx::MTC_Observers::math_Mean3_MTC_OBS#4)
  @2: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#2)
  @4: (MTCEx::MTC_Observers::math_Mean_MTC_OBS#3)
  @5: (MTCEx::MTC_Observers::math_Mean3_MTC_OBS#6)
  @6: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::math_Mean3_MTC_OBS#1)
  @8: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#2)
  @9: (MTCEx::MTC_Observers::math_Abs_MTC_OBS#3)
  @10: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @11: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#2)
  @12: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST#11)
  @13: @12/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @14: @12/(MTCEx::MTC_Observers::Check_Delta_3_PATHS7_MTC_OBS#1)
  @15: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#3)
  @16: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST#10)
  @17: @16/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @18: @16/(MTCEx::MTC_Observers::Check_Delta_3_PATHS6_MTC_OBS#1)
  @19: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#4)
  @20: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST#9)
  @21: @20/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @22: @20/(MTCEx::MTC_Observers::Check_Delta_3_PATHS5_MTC_OBS#1)
  @23: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#5)
  @24: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_MTC_INST#8)
  @25: @24/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @26: @24/(MTCEx::MTC_Observers::Check_Delta_3_PATHS4_MTC_OBS#1)
  @27: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#6)
  @28: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_MTC_INST#7)
  @29: @28/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @30: @28/(MTCEx::MTC_Observers::Check_Delta_3_PATHS3_MTC_OBS#1)
  @31: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#7)
  @32: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_MTC_INST#6)
  @33: @32/(MTCEx::MTC_Observers::CONTROL_MTC_OBS#1)
  @34: @32/(MTCEx::MTC_Observers::Check_Delta_3_PATHS2_MTC_OBS#1)
  @35: (MTCEx::MTC_Observers::CONTROL_MTC_OBS#8)
  @36: (math::Abs#1)
  @37: @36/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @38: (math::Mean3#1)
  @39: (MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_MTC_INST#1)
  @40: @39/(MTCEx::MTC_Observers::Check_Delta_3_PATHS1_MTC_OBS#1)
  @41: (math::Abs#2)
  @42: @41/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @43: (math::Abs#3)
  @44: @43/(MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS#1)
  @45: (MTCEx::MTC_Observers::Check_Delta_3_PATHS8_MTC_OBS#1)
  @46: (MTCEx::MTC_Observers::Check_Delta_3_PATHS9_MTC_OBS#1)
  @47: (MTCEx::MTC_Observers::Check_Delta_3_PATHS10_MTC_OBS#1)
  @48: (MTCEx::MTC_Observers::Check_Delta_3_PATHS11_MTC_OBS#1)
  @49: (MTCEx::MTC_Observers::Check_Delta_3_PATHS12_MTC_OBS#1)
  @50: (MTCEx::MTC_Observers::Check_Delta_3_PATHS13_MTC_OBS#1)
  @51: (MTCEx::MTC_Observers::Check_Delta_3_PATHS14_MTC_OBS#1)
*/

#endif /* _Check_Delta_3_H_ */
/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Check_Delta_3.h
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

