/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_interval_pH.h"

/* Check_interval_pH/ */
kcg_bool Check_interval_pH(/* _L4/, pH/ */ kcg_float64 pH)
{
  /* Output1/, _L2/ */
  kcg_bool Output1;

  Output1 = (pH_low > pH) & (pH < pH_High);
  return Output1;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_interval_pH.c
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

