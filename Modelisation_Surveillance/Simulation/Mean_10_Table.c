/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Mean_10_Table.h"

/* Mean_10_Table/ */
void Mean_10_Table(
  /* Input1/ */
  Ten_Values_Table *Input1,
  outC_Mean_10_Table *outC)
{
  outC->_L50 = kcg_lit_float64(10.0);
  kcg_copy_Ten_Values_Table(&outC->_L1, Input1);
  kcg_copy_Data(&outC->_L2, &outC->_L1[9]);
  outC->_L39 = outC->_L2[2];
  kcg_copy_Data(&outC->_L3, &outC->_L1[8]);
  outC->_L36 = outC->_L3[2];
  kcg_copy_Data(&outC->_L4, &outC->_L1[7]);
  outC->_L33 = outC->_L4[2];
  kcg_copy_Data(&outC->_L5, &outC->_L1[6]);
  outC->_L30 = outC->_L5[2];
  kcg_copy_Data(&outC->_L6, &outC->_L1[5]);
  outC->_L27 = outC->_L6[2];
  kcg_copy_Data(&outC->_L7, &outC->_L1[4]);
  outC->_L24 = outC->_L7[2];
  kcg_copy_Data(&outC->_L8, &outC->_L1[3]);
  outC->_L21 = outC->_L8[2];
  kcg_copy_Data(&outC->_L9, &outC->_L1[2]);
  outC->_L18 = outC->_L9[2];
  kcg_copy_Data(&outC->_L10, &outC->_L1[1]);
  outC->_L15 = outC->_L10[2];
  kcg_copy_Data(&outC->_L11, &outC->_L1[0]);
  outC->_L12 = outC->_L11[2];
  outC->_L44 = outC->_L12 + outC->_L15 + outC->_L18 + outC->_L21 + outC->_L24 +
    outC->_L27 + outC->_L30 + outC->_L33 + outC->_L36 + outC->_L39;
  outC->_L49 = outC->_L44 / outC->_L50;
  outC->Redox = outC->_L49;
  outC->_L48 = kcg_lit_float64(10.0);
  outC->_L40 = outC->_L2[1];
  outC->_L37 = outC->_L3[1];
  outC->_L34 = outC->_L4[1];
  outC->_L31 = outC->_L5[1];
  outC->_L28 = outC->_L6[1];
  outC->_L25 = outC->_L7[1];
  outC->_L22 = outC->_L8[1];
  outC->_L19 = outC->_L9[1];
  outC->_L16 = outC->_L10[1];
  outC->_L13 = outC->_L11[1];
  outC->_L43 = outC->_L13 + outC->_L16 + outC->_L19 + outC->_L22 + outC->_L25 +
    outC->_L28 + outC->_L31 + outC->_L34 + outC->_L37 + outC->_L40;
  outC->_L47 = outC->_L43 / outC->_L48;
  outC->pH = outC->_L47;
  outC->_L46 = kcg_lit_float64(10.0);
  outC->_L41 = outC->_L2[0];
  outC->_L38 = outC->_L3[0];
  outC->_L35 = outC->_L4[0];
  outC->_L32 = outC->_L5[0];
  outC->_L29 = outC->_L6[0];
  outC->_L26 = outC->_L7[0];
  outC->_L23 = outC->_L8[0];
  outC->_L20 = outC->_L9[0];
  outC->_L17 = outC->_L10[0];
  outC->_L14 = outC->_L11[0];
  outC->_L42 = outC->_L14 + outC->_L17 + outC->_L20 + outC->_L23 + outC->_L26 +
    outC->_L29 + outC->_L32 + outC->_L35 + outC->_L38 + outC->_L41;
  outC->_L45 = outC->_L42 / outC->_L46;
  outC->Temperature = outC->_L45;
}

#ifndef KCG_USER_DEFINED_INIT
void Mean_10_Table_init(outC_Mean_10_Table *outC)
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
  kcg_size idx11;

  outC->_L50 = kcg_lit_float64(0.0);
  outC->_L49 = kcg_lit_float64(0.0);
  outC->_L48 = kcg_lit_float64(0.0);
  outC->_L47 = kcg_lit_float64(0.0);
  outC->_L46 = kcg_lit_float64(0.0);
  outC->_L45 = kcg_lit_float64(0.0);
  outC->_L44 = kcg_lit_float64(0.0);
  outC->_L43 = kcg_lit_float64(0.0);
  outC->_L42 = kcg_lit_float64(0.0);
  outC->_L39 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L37 = kcg_lit_float64(0.0);
  outC->_L38 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L2[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L3[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L4[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L5[idx3] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->_L6[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L7[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L8[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L9[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L10[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L11[idx9] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 10; idx11++) {
    for (idx10 = 0; idx10 < 3; idx10++) {
      outC->_L1[idx11][idx10] = kcg_lit_float64(0.0);
    }
  }
  outC->Redox = kcg_lit_float64(0.0);
  outC->pH = kcg_lit_float64(0.0);
  outC->Temperature = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Mean_10_Table_reset(outC_Mean_10_Table *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Mean_10_Table.c
** Generation date: 2020-02-06T16:38:07
*************************************************************$ */

