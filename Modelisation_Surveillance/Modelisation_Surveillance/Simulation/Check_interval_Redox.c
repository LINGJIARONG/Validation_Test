/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_interval_Redox.h"

/* Check_interval_Redox/ */
void Check_interval_Redox(
  /* Redox/ */
  kcg_float64 Redox,
  outC_Check_interval_Redox *outC)
{
  outC->_L6 = Redox_High;
  outC->_L4 = Redox;
  outC->_L8 = outC->_L4 <= outC->_L6;
  outC->_L5 = Redox_Low;
  outC->_L7 = outC->_L4 >= outC->_L5;
  outC->_L1 = outC->_L7 & outC->_L8;
  outC->Output1 = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void Check_interval_Redox_init(outC_Check_interval_Redox *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_true;
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Check_interval_Redox_reset(outC_Check_interval_Redox *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_interval_Redox.c
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

