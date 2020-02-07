/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_interval_pH.h"

/* Check_interval_pH/ */
void Check_interval_pH(
  /* _L4/, pH/ */
  kcg_float64 pH,
  /* MTC_AC_1/, MTC_AC_Outputs/ */
  kcg_bool MTC_AC_Outputs,
  /* @1/MTC_INSTRU/, MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Check_interval_pH *outC)
{
  /* MTC_AC_2/, _L8/ */
  kcg_bool MTC_AC_2;
  /* MTC_AC_3/, _L9/ */
  kcg_bool MTC_AC_3;
  /* MTC_AC_4/ */
  kcg_bool MTC_AC_4;
  /* MTC_AC_5/ */
  kcg_bool MTC_AC_5;

  MTC_AC_2 = pH_High >= pH;
  MTC_AC_4 = MTC_AC_2 & MTC_AC_Outputs;
  MTC_AC_3 = pH_low <= pH;
  MTC_AC_5 = MTC_AC_3 & MTC_AC_Outputs;
  if (MTC_INSTRU) {
    /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
    LATCHALL04_MTC(
      (kcg_bool) (MTC_AC_3 & MTC_AC_4),
      (kcg_bool) ((!MTC_AC_3) & MTC_AC_4),
      (kcg_bool) (MTC_AC_2 & MTC_AC_5),
      (kcg_bool) ((!MTC_AC_2) & MTC_AC_5),
      &outC->Context_LATCHALL04_MTC_1_Check_interval_pH_PATHS1_MTC_OBS_1);
    outC->MTC_ALL1_Check_interval_pH_PATHS1_MTC_OBS_1 =
      outC->Context_LATCHALL04_MTC_1_Check_interval_pH_PATHS1_MTC_OBS_1.Output1;
  }
  else {
    outC->MTC_ALL1_Check_interval_pH_PATHS1_MTC_OBS_1 = kcg_lit_Result_MTC(0);
  }
  outC->Output1 = MTC_AC_3 & MTC_AC_2;
}

#ifndef KCG_USER_DEFINED_INIT
void Check_interval_pH_init(outC_Check_interval_pH *outC)
{
  outC->Output1 = kcg_true;
  Result_MTC_init(&outC->MTC_ALL1_Check_interval_pH_PATHS1_MTC_OBS_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_1_Check_interval_pH_PATHS1_MTC_OBS_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void Check_interval_pH_reset(outC_Check_interval_pH *outC)
{
  /* @1/MTC_ALL1=(MTC::LATCHALL04#1)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_1_Check_interval_pH_PATHS1_MTC_OBS_1);
}

/*
  Expanded instances for: Check_interval_pH/
  @1: (MTCEx::MTC_Observers::Check_interval_pH_PATHS1_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Check_interval_pH.c
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

