/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-06T17:29:09
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
  /* _L18/, pH/ */
  kcg_float64 *pH,
  /* Temperature/, _L34/ */
  kcg_float64 *Temperature,
  /* Redox/, _L45/ */
  kcg_float64 *Redox)
{
  kcg_bool tmp;
  kcg_float64 tmp1;
  kcg_float64 tmp2;
  kcg_float64 tmp3;

  tmp = /* _L5=(Check_interval_Redox#1)/ */
    Check_interval_Redox((*Redox_Data)[0]);
  /* _L39= */
  if (tmp) {
    tmp1 = (*Redox_Data)[0];
  }
  else {
    tmp1 = Beyond_Interval_value;
  }
  tmp = /* _L37=(Check_interval_Redox#2)/ */
    Check_interval_Redox((*Redox_Data)[1]);
  /* _L40= */
  if (tmp) {
    tmp2 = (*Redox_Data)[1];
  }
  else {
    tmp2 = Beyond_Interval_value;
  }
  tmp = /* _L38=(Check_interval_Redox#3)/ */
    Check_interval_Redox((*Redox_Data)[2]);
  /* _L41= */
  if (tmp) {
    tmp3 = (*Redox_Data)[2];
  }
  else {
    tmp3 = Beyond_Interval_value;
  }
  *Redox = /* _L45=(Calculated_value#3)/ */
    Calculated_value(tmp1, tmp2, tmp3, Delta_Redox);
  tmp = /* _L6=(Check_interval_Temperature#1)/ */
    Check_interval_Temperature((*Temperature_Data)[0]);
  /* _L28= */
  if (tmp) {
    tmp1 = (*Temperature_Data)[0];
  }
  else {
    tmp1 = Beyond_Interval_value;
  }
  tmp = /* _L26=(Check_interval_Temperature#2)/ */
    Check_interval_Temperature((*Temperature_Data)[1]);
  /* _L29= */
  if (tmp) {
    tmp2 = (*Temperature_Data)[1];
  }
  else {
    tmp2 = Beyond_Interval_value;
  }
  tmp = /* _L27=(Check_interval_Temperature#3)/ */
    Check_interval_Temperature((*Temperature_Data)[2]);
  /* _L30= */
  if (tmp) {
    tmp3 = (*Temperature_Data)[2];
  }
  else {
    tmp3 = Beyond_Interval_value;
  }
  *Temperature = /* _L34=(Calculated_value#2)/ */
    Calculated_value(tmp1, tmp2, tmp3, Delta_Temperature);
  tmp = /* _L4=(Check_interval_pH#1)/ */ Check_interval_pH((*pH_Data)[0]);
  /* _L12= */
  if (tmp) {
    tmp1 = (*pH_Data)[0];
  }
  else {
    tmp1 = Beyond_Interval_value;
  }
  tmp = /* _L10=(Check_interval_pH#2)/ */ Check_interval_pH((*pH_Data)[1]);
  /* _L13= */
  if (tmp) {
    tmp2 = (*pH_Data)[1];
  }
  else {
    tmp2 = Beyond_Interval_value;
  }
  tmp = /* _L11=(Check_interval_pH#3)/ */ Check_interval_pH((*pH_Data)[2]);
  /* _L14= */
  if (tmp) {
    tmp3 = (*pH_Data)[2];
  }
  else {
    tmp3 = Beyond_Interval_value;
  }
  *pH = /* _L18=(Calculated_value#1)/ */
    Calculated_value(tmp1, tmp2, tmp3, Delta_pH);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Vote_Alog.c
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

