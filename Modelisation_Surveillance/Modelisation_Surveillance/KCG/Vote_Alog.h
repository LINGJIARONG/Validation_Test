/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */
#ifndef _Vote_Alog_H_
#define _Vote_Alog_H_

#include "kcg_types.h"
#include "Calculated_value.h"
#include "Check_interval_pH.h"
#include "Check_interval_Temperature.h"
#include "Check_interval_Redox.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* Vote_Alog/ */
extern void Vote_Alog(
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
  kcg_float64 *Redox);



#endif /* _Vote_Alog_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Vote_Alog.h
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */

