/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Push_Table.h"

/* Push_Table/ */
void Push_Table(
  /* Input1/, _L1/ */
  Ten_Values_Table *Input1,
  /* _L13/, newData/ */
  Data *newData,
  /* Output1/, _L15/ */
  Ten_Values_Table *Output1)
{
  kcg_copy_array_float64_3_9(&(*Output1)[0], (array_float64_3_9 *) &(*Input1)[1]);
  kcg_copy_Data(&(*Output1)[9], newData);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Push_Table.c
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

