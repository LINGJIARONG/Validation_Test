/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_interval_Temperature.h"

/* Check_interval_Temperature/ */
void Check_interval_Temperature(
  /* temperature/ */
  kcg_float64 temperature,
  outC_Check_interval_Temperature *outC)
{
  outC->_L5 = Temperature_High;
  outC->_L1 = temperature;
  outC->_L2 = outC->_L1 < outC->_L5;
  outC->_L6 = Redox_Normal_Low;
  outC->_L3 = outC->_L6 > outC->_L1;
  outC->_L4 = outC->_L3 & outC->_L2;
  outC->Output1 = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Check_interval_Temperature_init(outC_Check_interval_Temperature *outC)
{
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_lit_float64(0.0);
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Check_interval_Temperature_reset(outC_Check_interval_Temperature *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_interval_Temperature.c
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

