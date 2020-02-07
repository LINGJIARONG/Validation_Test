/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* Temperature_Normal_Low/ */
#define Temperature_Normal_Low (kcg_lit_float64(-1.0))

/* Temperature_Normal_High/ */
#define Temperature_Normal_High (kcg_lit_float64(35.0))

/* pH_Normal_Low/ */
#define pH_Normal_Low (kcg_lit_float64(6.5))

/* pH_Normal_High/ */
#define pH_Normal_High (kcg_lit_float64(9.0))

/* Redox_Normal_Low/ */
#define Redox_Normal_Low (kcg_lit_float64(700.0))

/* Redox_Normal_High/ */
#define Redox_Normal_High (kcg_lit_float64(900.0))

/* Redox_High/ */
#define Redox_High (kcg_lit_float64(3000.0))

/* Redox_Low/ */
#define Redox_Low (kcg_lit_float64(-3000.0))

/* pH_low/ */
#define pH_low (kcg_lit_float64(0.0))

/* pH_High/ */
#define pH_High (kcg_lit_float64(14.0))

/* Temperature_High/ */
#define Temperature_High (kcg_lit_float64(50.0))

/* Temperature_Low/ */
#define Temperature_Low (kcg_lit_float64(-10.0))

/* Delta_Redox/ */
#define Delta_Redox (kcg_lit_float64(50.0))

/* Delta_Temperature/ */
#define Delta_Temperature (kcg_lit_float64(5.0))

/* Delta_pH/ */
#define Delta_pH (kcg_lit_float64(1.0))

/* Beyond_Interval_value/ */
#define Beyond_Interval_value (kcg_lit_float64(999.85419))

/* Normal_Send_Data/ */
extern const Statation_data Normal_Send_Data;

/* Normal_Value/ */
extern const Ten_Values_Table Normal_Value;

/* Notification_Defaillance/ */
#define Notification_Defaillance (kcg_lit_float64(-999.4156))

#endif /* _KCG_CONSTS_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_consts.h
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */

