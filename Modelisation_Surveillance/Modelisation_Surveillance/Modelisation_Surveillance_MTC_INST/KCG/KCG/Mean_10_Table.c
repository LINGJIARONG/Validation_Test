/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Mean_10_Table.h"

/* Mean_10_Table/ */
void Mean_10_Table(
  /* Input1/, _L1/ */
  Ten_Values_Table *Input1,
  /* @10/MTC_CC_10_A/,
     @11/MTC_CC_11_A/,
     @2/MTC_CC_2_A/,
     @3/MTC_CC_3_A/,
     @4/MTC_CC_4_A/,
     @5/MTC_CC_5_A/,
     @6/MTC_CC_6_A/,
     @7/MTC_CC_7_A/,
     @8/MTC_CC_8_A/,
     @9/MTC_CC_9_A/,
     MTC_AC_1/,
     MTC_AC_10/,
     MTC_AC_11/,
     MTC_AC_13/,
     MTC_AC_14/,
     MTC_AC_2/,
     MTC_AC_3/,
     MTC_AC_4/,
     MTC_AC_5/,
     MTC_AC_6/,
     MTC_AC_7/,
     MTC_AC_8/,
     MTC_AC_9/,
     MTC_AC_Outputs/,
     MTC_CC_10_A/,
     MTC_CC_11_A/,
     MTC_CC_2_A/,
     MTC_CC_3_A/,
     MTC_CC_4_A/,
     MTC_CC_5_A/,
     MTC_CC_6_A/,
     MTC_CC_7_A/,
     MTC_CC_8_A/,
     MTC_CC_9_A/ */
  kcg_bool MTC_AC_Outputs,
  /* @1/MTC_INSTRU/,
     @10/MTC_INSTRU/,
     @11/MTC_INSTRU/,
     @2/MTC_INSTRU/,
     @3/MTC_INSTRU/,
     @4/MTC_INSTRU/,
     @5/MTC_INSTRU/,
     @6/MTC_INSTRU/,
     @7/MTC_INSTRU/,
     @8/MTC_INSTRU/,
     @9/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Mean_10_Table *outC)
{
  if (MTC_INSTRU) {
    /* @1/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_10_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS1_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS1_MTC_OBS_1 =
      outC->_10_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS1_MTC_OBS_1.Output1;
    /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_9_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS2_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS2_MTC_OBS_1 =
      outC->_9_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS2_MTC_OBS_1.Output1;
    /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_8_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS3_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS3_MTC_OBS_1 =
      outC->_8_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS3_MTC_OBS_1.Output1;
    /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_7_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS4_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS4_MTC_OBS_1 =
      outC->_7_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS4_MTC_OBS_1.Output1;
    /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_6_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS5_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS5_MTC_OBS_1 =
      outC->_6_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS5_MTC_OBS_1.Output1;
    /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_5_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS6_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS6_MTC_OBS_1 =
      outC->_5_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS6_MTC_OBS_1.Output1;
    /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_4_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS7_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS7_MTC_OBS_1 =
      outC->_4_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS7_MTC_OBS_1.Output1;
    /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_3_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS8_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS8_MTC_OBS_1 =
      outC->_3_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS8_MTC_OBS_1.Output1;
    /* @9/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_2_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS9_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS9_MTC_OBS_1 =
      outC->_2_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS9_MTC_OBS_1.Output1;
    /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->_1_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS10_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS10_MTC_OBS_1 =
      outC->_1_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS10_MTC_OBS_1.Output1;
    /* @11/MTC_ALL1=(MTC::LATCHALL01#1)/ */
    LATCHALL01_MTC(
      MTC_AC_Outputs,
      &outC->Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS11_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS11_MTC_OBS_1 =
      outC->Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS11_MTC_OBS_1.Output1;
  }
  else {
    outC->MTC_ALL1_Mean_10_Table_PATHS1_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS2_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS3_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS4_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS5_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS6_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS7_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS8_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS9_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS10_MTC_OBS_1 = kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Mean_10_Table_PATHS11_MTC_OBS_1 = kcg_lit_Result_MTC(0);
  }
  outC->Redox = ((*Input1)[0][2] + (*Input1)[1][2] + (*Input1)[2][2] +
      (*Input1)[3][2] + (*Input1)[4][2] + (*Input1)[5][2] + (*Input1)[6][2] +
      (*Input1)[7][2] + (*Input1)[8][2] + (*Input1)[9][2]) / kcg_lit_float64(
      10.0);
  outC->pH = ((*Input1)[0][1] + (*Input1)[1][1] + (*Input1)[2][1] +
      (*Input1)[3][1] + (*Input1)[4][1] + (*Input1)[5][1] + (*Input1)[6][1] +
      (*Input1)[7][1] + (*Input1)[8][1] + (*Input1)[9][1]) / kcg_lit_float64(
      10.0);
  outC->Temperature = ((*Input1)[0][0] + (*Input1)[1][0] + (*Input1)[2][0] +
      (*Input1)[3][0] + (*Input1)[4][0] + (*Input1)[5][0] + (*Input1)[6][0] +
      (*Input1)[7][0] + (*Input1)[8][0] + (*Input1)[9][0]) / kcg_lit_float64(
      10.0);
}

#ifndef KCG_USER_DEFINED_INIT
void Mean_10_Table_init(outC_Mean_10_Table *outC)
{
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS11_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS10_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS9_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS8_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS7_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS6_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS5_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS4_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS3_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS2_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Mean_10_Table_PATHS1_MTC_OBS_1);
  outC->Redox = kcg_lit_float64(0.0);
  outC->pH = kcg_lit_float64(0.0);
  outC->Temperature = kcg_lit_float64(0.0);
  /* @11/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS11_MTC_OBS_1);
  /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_1_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS10_MTC_OBS_1);
  /* @9/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_2_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS9_MTC_OBS_1);
  /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_3_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS8_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_4_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS7_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_5_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS6_MTC_OBS_1);
  /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_6_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS5_MTC_OBS_1);
  /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_7_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS4_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_8_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS3_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_9_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS2_MTC_OBS_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_init(
    &outC->_10_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS1_MTC_OBS_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Mean_10_Table_reset(outC_Mean_10_Table *outC)
{
  /* @11/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS11_MTC_OBS_1);
  /* @10/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_1_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS10_MTC_OBS_1);
  /* @9/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_2_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS9_MTC_OBS_1);
  /* @8/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_3_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS8_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_4_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS7_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_5_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS6_MTC_OBS_1);
  /* @5/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_6_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS5_MTC_OBS_1);
  /* @4/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_7_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS4_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_8_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS3_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_9_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS2_MTC_OBS_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL01#1)/ */
  LATCHALL01_MTC_reset(
    &outC->_10_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS1_MTC_OBS_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Mean_10_Table/
  @11: (MTCEx::MTC_Observers::Mean_10_Table_PATHS11_MTC_OBS#1)
  @10: (MTCEx::MTC_Observers::Mean_10_Table_PATHS10_MTC_OBS#1)
  @9: (MTCEx::MTC_Observers::Mean_10_Table_PATHS9_MTC_OBS#1)
  @8: (MTCEx::MTC_Observers::Mean_10_Table_PATHS8_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::Mean_10_Table_PATHS7_MTC_OBS#1)
  @6: (MTCEx::MTC_Observers::Mean_10_Table_PATHS6_MTC_OBS#1)
  @5: (MTCEx::MTC_Observers::Mean_10_Table_PATHS5_MTC_OBS#1)
  @4: (MTCEx::MTC_Observers::Mean_10_Table_PATHS4_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::Mean_10_Table_PATHS3_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Mean_10_Table_PATHS2_MTC_OBS#1)
  @1: (MTCEx::MTC_Observers::Mean_10_Table_PATHS1_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Mean_10_Table.c
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

