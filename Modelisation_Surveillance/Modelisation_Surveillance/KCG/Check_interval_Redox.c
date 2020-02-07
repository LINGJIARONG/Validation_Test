/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_interval_Redox.h"

/* Check_interval_Redox/ */
kcg_bool Check_interval_Redox(/* Redox/, _L4/ */ kcg_float64 Redox)
{
  /* Output1/, _L1/ */
  kcg_bool Output1;

  Output1 = (Redox >= Redox_Low) & (Redox <= Redox_High);
  return Output1;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_interval_Redox.c
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */

