/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_interval_Temperature.h"

/* Check_interval_Temperature/ */
kcg_bool Check_interval_Temperature(
  /* _L1/, temperature/ */
  kcg_float64 temperature)
{
  /* Output1/, _L4/ */
  kcg_bool Output1;

  Output1 = (Redox_Normal_Low > temperature) & (temperature < Temperature_High);
  return Output1;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_interval_Temperature.c
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

