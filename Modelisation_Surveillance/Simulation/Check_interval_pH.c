/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_interval_pH.h"

/* Check_interval_pH/ */
void Check_interval_pH(/* pH/ */ kcg_float64 pH, outC_Check_interval_pH *outC)
{
  outC->_L6 = pH_low;
  outC->_L5 = pH_High;
  outC->_L4 = pH;
  outC->_L3 = outC->_L4 < outC->_L5;
  outC->_L1 = outC->_L6 > outC->_L4;
  outC->_L2 = outC->_L1 & outC->_L3;
  outC->Output1 = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void Check_interval_pH_init(outC_Check_interval_pH *outC)
{
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Check_interval_pH_reset(outC_Check_interval_pH *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_interval_pH.c
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

