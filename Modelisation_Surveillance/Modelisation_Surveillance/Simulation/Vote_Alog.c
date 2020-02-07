/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Vote_Alog.h"

/* Vote_Alog/ */
void Vote_Alog(
  /* pH_Data/ */
  Data *pH_Data,
  /* Temperature_Data/ */
  Data *Temperature_Data,
  /* Redox_Data/ */
  Data *Redox_Data,
  outC_Vote_Alog *outC)
{
  outC->_L42 = Beyond_Interval_value;
  kcg_copy_Data(&outC->_L3, Redox_Data);
  outC->_L25 = outC->_L3[0];
  /* _L5=(Check_interval_Redox#1)/ */
  Check_interval_Redox(outC->_L25, &outC->Context_Check_interval_Redox_1);
  outC->_L5 = outC->Context_Check_interval_Redox_1.Output1;
  /* _L39= */
  if (outC->_L5) {
    outC->_L39 = outC->_L25;
  }
  else {
    outC->_L39 = outC->_L42;
  }
  outC->_L43 = Beyond_Interval_value;
  outC->_L24 = outC->_L3[1];
  /* _L37=(Check_interval_Redox#2)/ */
  Check_interval_Redox(outC->_L24, &outC->Context_Check_interval_Redox_2);
  outC->_L37 = outC->Context_Check_interval_Redox_2.Output1;
  /* _L40= */
  if (outC->_L37) {
    outC->_L40 = outC->_L24;
  }
  else {
    outC->_L40 = outC->_L43;
  }
  outC->_L44 = Beyond_Interval_value;
  outC->_L23 = outC->_L3[2];
  /* _L38=(Check_interval_Redox#3)/ */
  Check_interval_Redox(outC->_L23, &outC->Context_Check_interval_Redox_3);
  outC->_L38 = outC->Context_Check_interval_Redox_3.Output1;
  /* _L41= */
  if (outC->_L38) {
    outC->_L41 = outC->_L23;
  }
  else {
    outC->_L41 = outC->_L44;
  }
  outC->_L46 = Delta_Redox;
  /* _L45=(Calculated_value#3)/ */
  Calculated_value(
    outC->_L39,
    outC->_L40,
    outC->_L41,
    outC->_L46,
    &outC->Context_Calculated_value_3);
  outC->_L45 = outC->Context_Calculated_value_3.Output1;
  outC->Redox = outC->_L45;
  outC->_L31 = Beyond_Interval_value;
  kcg_copy_Data(&outC->_L2, Temperature_Data);
  outC->_L22 = outC->_L2[0];
  /* _L6=(Check_interval_Temperature#1)/ */
  Check_interval_Temperature(
    outC->_L22,
    &outC->_2_Context_Check_interval_Temperature_1);
  outC->_L6 = outC->_2_Context_Check_interval_Temperature_1.Output1;
  /* _L28= */
  if (outC->_L6) {
    outC->_L28 = outC->_L22;
  }
  else {
    outC->_L28 = outC->_L31;
  }
  outC->_L32 = Beyond_Interval_value;
  outC->_L21 = outC->_L2[1];
  /* _L26=(Check_interval_Temperature#2)/ */
  Check_interval_Temperature(
    outC->_L21,
    &outC->_1_Context_Check_interval_Temperature_2);
  outC->_L26 = outC->_1_Context_Check_interval_Temperature_2.Output1;
  /* _L29= */
  if (outC->_L26) {
    outC->_L29 = outC->_L21;
  }
  else {
    outC->_L29 = outC->_L32;
  }
  outC->_L33 = Beyond_Interval_value;
  outC->_L20 = outC->_L2[2];
  /* _L27=(Check_interval_Temperature#3)/ */
  Check_interval_Temperature(
    outC->_L20,
    &outC->Context_Check_interval_Temperature_3);
  outC->_L27 = outC->Context_Check_interval_Temperature_3.Output1;
  /* _L30= */
  if (outC->_L27) {
    outC->_L30 = outC->_L20;
  }
  else {
    outC->_L30 = outC->_L33;
  }
  outC->_L36 = Delta_Temperature;
  /* _L34=(Calculated_value#2)/ */
  Calculated_value(
    outC->_L28,
    outC->_L29,
    outC->_L30,
    outC->_L36,
    &outC->Context_Calculated_value_2);
  outC->_L34 = outC->Context_Calculated_value_2.Output1;
  outC->Temperature = outC->_L34;
  outC->_L15 = Beyond_Interval_value;
  kcg_copy_Data(&outC->_L1, pH_Data);
  outC->_L9 = outC->_L1[0];
  /* _L4=(Check_interval_pH#1)/ */
  Check_interval_pH(outC->_L9, &outC->Context_Check_interval_pH_1);
  outC->_L4 = outC->Context_Check_interval_pH_1.Output1;
  /* _L12= */
  if (outC->_L4) {
    outC->_L12 = outC->_L9;
  }
  else {
    outC->_L12 = outC->_L15;
  }
  outC->_L16 = Beyond_Interval_value;
  outC->_L8 = outC->_L1[1];
  /* _L10=(Check_interval_pH#2)/ */
  Check_interval_pH(outC->_L8, &outC->Context_Check_interval_pH_2);
  outC->_L10 = outC->Context_Check_interval_pH_2.Output1;
  /* _L13= */
  if (outC->_L10) {
    outC->_L13 = outC->_L8;
  }
  else {
    outC->_L13 = outC->_L16;
  }
  outC->_L17 = Beyond_Interval_value;
  outC->_L7 = outC->_L1[2];
  /* _L11=(Check_interval_pH#3)/ */
  Check_interval_pH(outC->_L7, &outC->Context_Check_interval_pH_3);
  outC->_L11 = outC->Context_Check_interval_pH_3.Output1;
  /* _L14= */
  if (outC->_L11) {
    outC->_L14 = outC->_L7;
  }
  else {
    outC->_L14 = outC->_L17;
  }
  outC->_L19 = Delta_pH;
  /* _L18=(Calculated_value#1)/ */
  Calculated_value(
    outC->_L12,
    outC->_L13,
    outC->_L14,
    outC->_L19,
    &outC->Context_Calculated_value_1);
  outC->_L18 = outC->Context_Calculated_value_1.Output1;
  outC->pH = outC->_L18;
}

#ifndef KCG_USER_DEFINED_INIT
void Vote_Alog_init(outC_Vote_Alog *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L46 = kcg_lit_float64(0.0);
  outC->_L45 = kcg_lit_float64(0.0);
  outC->_L44 = kcg_lit_float64(0.0);
  outC->_L43 = kcg_lit_float64(0.0);
  outC->_L42 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L39 = kcg_lit_float64(0.0);
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L3[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L2[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L1[idx2] = kcg_lit_float64(0.0);
  }
  outC->Redox = kcg_lit_float64(0.0);
  outC->Temperature = kcg_lit_float64(0.0);
  outC->pH = kcg_lit_float64(0.0);
  /* _L18=(Calculated_value#1)/ */
  Calculated_value_init(&outC->Context_Calculated_value_1);
  /* _L11=(Check_interval_pH#3)/ */
  Check_interval_pH_init(&outC->Context_Check_interval_pH_3);
  /* _L10=(Check_interval_pH#2)/ */
  Check_interval_pH_init(&outC->Context_Check_interval_pH_2);
  /* _L4=(Check_interval_pH#1)/ */
  Check_interval_pH_init(&outC->Context_Check_interval_pH_1);
  /* _L34=(Calculated_value#2)/ */
  Calculated_value_init(&outC->Context_Calculated_value_2);
  /* _L27=(Check_interval_Temperature#3)/ */
  Check_interval_Temperature_init(&outC->Context_Check_interval_Temperature_3);
  /* _L26=(Check_interval_Temperature#2)/ */
  Check_interval_Temperature_init(
    &outC->_1_Context_Check_interval_Temperature_2);
  /* _L6=(Check_interval_Temperature#1)/ */
  Check_interval_Temperature_init(
    &outC->_2_Context_Check_interval_Temperature_1);
  /* _L45=(Calculated_value#3)/ */
  Calculated_value_init(&outC->Context_Calculated_value_3);
  /* _L38=(Check_interval_Redox#3)/ */
  Check_interval_Redox_init(&outC->Context_Check_interval_Redox_3);
  /* _L37=(Check_interval_Redox#2)/ */
  Check_interval_Redox_init(&outC->Context_Check_interval_Redox_2);
  /* _L5=(Check_interval_Redox#1)/ */
  Check_interval_Redox_init(&outC->Context_Check_interval_Redox_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Vote_Alog_reset(outC_Vote_Alog *outC)
{
  /* _L18=(Calculated_value#1)/ */
  Calculated_value_reset(&outC->Context_Calculated_value_1);
  /* _L11=(Check_interval_pH#3)/ */
  Check_interval_pH_reset(&outC->Context_Check_interval_pH_3);
  /* _L10=(Check_interval_pH#2)/ */
  Check_interval_pH_reset(&outC->Context_Check_interval_pH_2);
  /* _L4=(Check_interval_pH#1)/ */
  Check_interval_pH_reset(&outC->Context_Check_interval_pH_1);
  /* _L34=(Calculated_value#2)/ */
  Calculated_value_reset(&outC->Context_Calculated_value_2);
  /* _L27=(Check_interval_Temperature#3)/ */
  Check_interval_Temperature_reset(&outC->Context_Check_interval_Temperature_3);
  /* _L26=(Check_interval_Temperature#2)/ */
  Check_interval_Temperature_reset(
    &outC->_1_Context_Check_interval_Temperature_2);
  /* _L6=(Check_interval_Temperature#1)/ */
  Check_interval_Temperature_reset(
    &outC->_2_Context_Check_interval_Temperature_1);
  /* _L45=(Calculated_value#3)/ */
  Calculated_value_reset(&outC->Context_Calculated_value_3);
  /* _L38=(Check_interval_Redox#3)/ */
  Check_interval_Redox_reset(&outC->Context_Check_interval_Redox_3);
  /* _L37=(Check_interval_Redox#2)/ */
  Check_interval_Redox_reset(&outC->Context_Check_interval_Redox_2);
  /* _L5=(Check_interval_Redox#1)/ */
  Check_interval_Redox_reset(&outC->Context_Check_interval_Redox_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Vote_Alog.c
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

