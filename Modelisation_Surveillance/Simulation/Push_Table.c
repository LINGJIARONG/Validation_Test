/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Push_Table.h"

/* Push_Table/ */
void Push_Table(
  /* Input1/ */
  Ten_Values_Table *Input1,
  /* newData/ */
  Data *newData,
  outC_Push_Table *outC)
{
  kcg_size idx;

  kcg_copy_Data(&outC->_L13, newData);
  /* _L19/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_Data(&outC->_L19[idx], &outC->_L13);
  }
  kcg_copy_Ten_Values_Table(&outC->_L1, Input1);
  kcg_copy_array_float64_3_9(&outC->_L18, (array_float64_3_9 *) &outC->_L1[1]);
  kcg_copy_array_float64_3_9(&outC->_L15[0], &outC->_L18);
  kcg_copy_Data(&outC->_L15[9], &outC->_L19[0]);
  kcg_copy_Ten_Values_Table(&outC->Output1, &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void Push_Table_init(outC_Push_Table *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;

  for (idx1 = 0; idx1 < 1; idx1++) {
    for (idx = 0; idx < 3; idx++) {
      outC->_L19[idx1][idx] = kcg_lit_float64(0.0);
    }
  }
  for (idx3 = 0; idx3 < 9; idx3++) {
    for (idx2 = 0; idx2 < 3; idx2++) {
      outC->_L18[idx3][idx2] = kcg_lit_float64(0.0);
    }
  }
  for (idx5 = 0; idx5 < 10; idx5++) {
    for (idx4 = 0; idx4 < 3; idx4++) {
      outC->_L15[idx5][idx4] = kcg_lit_float64(0.0);
    }
  }
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L13[idx6] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    for (idx7 = 0; idx7 < 3; idx7++) {
      outC->_L1[idx8][idx7] = kcg_lit_float64(0.0);
    }
  }
  for (idx10 = 0; idx10 < 10; idx10++) {
    for (idx9 = 0; idx9 < 3; idx9++) {
      outC->Output1[idx10][idx9] = kcg_lit_float64(0.0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Push_Table_reset(outC_Push_Table *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Push_Table.c
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

