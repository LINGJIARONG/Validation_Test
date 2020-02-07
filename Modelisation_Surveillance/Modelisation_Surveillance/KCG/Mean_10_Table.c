/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Mean_10_Table.h"

/* Mean_10_Table/ */
void Mean_10_Table(
  /* Input1/, _L1/ */
  Ten_Values_Table *Input1,
  /* Temperature/, _L45/ */
  kcg_float64 *Temperature,
  /* _L47/, pH/ */
  kcg_float64 *pH,
  /* Redox/, _L49/ */
  kcg_float64 *Redox)
{
  *Redox = ((*Input1)[0][2] + (*Input1)[1][2] + (*Input1)[2][2] +
      (*Input1)[3][2] + (*Input1)[4][2] + (*Input1)[5][2] + (*Input1)[6][2] +
      (*Input1)[7][2] + (*Input1)[8][2] + (*Input1)[9][2]) / kcg_lit_float64(
      10.0);
  *pH = ((*Input1)[0][1] + (*Input1)[1][1] + (*Input1)[2][1] + (*Input1)[3][1] +
      (*Input1)[4][1] + (*Input1)[5][1] + (*Input1)[6][1] + (*Input1)[7][1] +
      (*Input1)[8][1] + (*Input1)[9][1]) / kcg_lit_float64(10.0);
  *Temperature = ((*Input1)[0][0] + (*Input1)[1][0] + (*Input1)[2][0] +
      (*Input1)[3][0] + (*Input1)[4][0] + (*Input1)[5][0] + (*Input1)[6][0] +
      (*Input1)[7][0] + (*Input1)[8][0] + (*Input1)[9][0]) / kcg_lit_float64(
      10.0);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Mean_10_Table.c
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */

