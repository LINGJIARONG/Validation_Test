/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */
#ifndef _Calculated_value_H_
#define _Calculated_value_H_

#include "kcg_types.h"
#include "Check_Delta_3.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Check_Delta_3 /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */ Context_Check_Delta_3_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ _1_else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Me_output/ */ Me_output_Mean_1_float64;
  kcg_float64 /* @1/I2/ */ I2_Mean_1_float64;
  kcg_float64 /* @1/I1/ */ I1_Mean_1_float64;
  kcg_float64 /* @1/_L6/ */ _L6_Mean_1_float64;
  kcg_float64 /* @1/_L4/ */ _L4_Mean_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_Mean_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Mean_1_float64;
  kcg_float64 /* @1/_L1/ */ _L1_Mean_1_float64;
  kcg_float64 /* @2/Me_output/ */ Me_output_Mean_3_float64;
  kcg_float64 /* @2/I2/ */ I2_Mean_3_float64;
  kcg_float64 /* @2/I1/ */ I1_Mean_3_float64;
  kcg_float64 /* @2/_L6/ */ _L6_Mean_3_float64;
  kcg_float64 /* @2/_L4/ */ _L4_Mean_3_float64;
  kcg_float64 /* @2/_L3/ */ _L3_Mean_3_float64;
  kcg_float64 /* @2/_L2/ */ _L2_Mean_3_float64;
  kcg_float64 /* @2/_L1/ */ _L1_Mean_3_float64;
  kcg_float64 /* @3/Me_output/ */ Me_output_Mean_5_float64;
  kcg_float64 /* @3/I2/ */ I2_Mean_5_float64;
  kcg_float64 /* @3/I1/ */ I1_Mean_5_float64;
  kcg_float64 /* @3/_L6/ */ _L6_Mean_5_float64;
  kcg_float64 /* @3/_L4/ */ _L4_Mean_5_float64;
  kcg_float64 /* @3/_L3/ */ _L3_Mean_5_float64;
  kcg_float64 /* @3/_L2/ */ _L2_Mean_5_float64;
  kcg_float64 /* @3/_L1/ */ _L1_Mean_5_float64;
  kcg_float64 /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:then:_L5/ */ _L5_then_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L12_then_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:then:_L3/ */ _L3_then_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:then:_L4/ */ _L4_then_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* a/ */ a;
  kcg_bool /* b/ */ b;
  kcg_bool /* c/ */ c;
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
} outC_Calculated_value;

/* ===========  node initialization and cycle functions  =========== */
/* Calculated_value/ */
extern void Calculated_value(
  /* value1/ */
  kcg_float64 value1,
  /* value2/ */
  kcg_float64 value2,
  /* value3/ */
  kcg_float64 value3,
  /* delta/ */
  kcg_float64 delta,
  outC_Calculated_value *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Calculated_value_reset(outC_Calculated_value *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Calculated_value_init(outC_Calculated_value *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Calculated_value/
  @1: (math::Mean#1)
  @2: (math::Mean#3)
  @3: (math::Mean#5)
*/

#endif /* _Calculated_value_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Calculated_value.h
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

