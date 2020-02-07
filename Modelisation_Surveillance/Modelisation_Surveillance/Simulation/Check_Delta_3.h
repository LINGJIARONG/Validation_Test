/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */
#ifndef _Check_Delta_3_H_
#define _Check_Delta_3_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
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
  kcg_float64 /* @1/A_Output/ */ A_Output_Abs_1_float64;
  kcg_float64 /* @1/A_Input/ */ A_Input_Abs_1_float64;
  kcg_float64 /* @1/_L8/ */ _L8_Abs_1_float64;
  kcg_float64 /* @1/_L5/ */ _L5_Abs_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_Abs_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Abs_1_float64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_float64;
  kcg_float64 /* @2/Me3_Output/ */ Me3_Output_Mean3_1_float64;
  kcg_float64 /* @2/I3/ */ I3_Mean3_1_float64;
  kcg_float64 /* @2/I2/ */ I2_Mean3_1_float64;
  kcg_float64 /* @2/I1/ */ I1_Mean3_1_float64;
  kcg_float64 /* @2/_L7/ */ _L7_Mean3_1_float64;
  kcg_float64 /* @2/_L5/ */ _L5_Mean3_1_float64;
  kcg_float64 /* @2/_L4/ */ _L4_Mean3_1_float64;
  kcg_float64 /* @2/_L3/ */ _L3_Mean3_1_float64;
  kcg_float64 /* @2/_L2/ */ _L2_Mean3_1_float64;
  kcg_float64 /* @2/_L1/ */ _L1_Mean3_1_float64;
  kcg_float64 /* @3/Me3_Output/ */ Me3_Output_Mean3_4_float64;
  kcg_float64 /* @3/I3/ */ I3_Mean3_4_float64;
  kcg_float64 /* @3/I2/ */ I2_Mean3_4_float64;
  kcg_float64 /* @3/I1/ */ I1_Mean3_4_float64;
  kcg_float64 /* @3/_L7/ */ _L7_Mean3_4_float64;
  kcg_float64 /* @3/_L5/ */ _L5_Mean3_4_float64;
  kcg_float64 /* @3/_L4/ */ _L4_Mean3_4_float64;
  kcg_float64 /* @3/_L3/ */ _L3_Mean3_4_float64;
  kcg_float64 /* @3/_L2/ */ _L2_Mean3_4_float64;
  kcg_float64 /* @3/_L1/ */ _L1_Mean3_4_float64;
  kcg_float64 /* @4/Me_output/ */ Me_output_Mean_1_float64;
  kcg_float64 /* @4/I2/ */ I2_Mean_1_float64;
  kcg_float64 /* @4/I1/ */ I1_Mean_1_float64;
  kcg_float64 /* @4/_L6/ */ _L6_Mean_1_float64;
  kcg_float64 /* @4/_L4/ */ _L4_Mean_1_float64;
  kcg_float64 /* @4/_L3/ */ _L3_Mean_1_float64;
  kcg_float64 /* @4/_L2/ */ _L2_Mean_1_float64;
  kcg_float64 /* @4/_L1/ */ _L1_Mean_1_float64;
  kcg_float64 /* @5/Me_output/ */ Me_output_Mean_2_float64;
  kcg_float64 /* @5/I2/ */ I2_Mean_2_float64;
  kcg_float64 /* @5/I1/ */ I1_Mean_2_float64;
  kcg_float64 /* @5/_L6/ */ _L6_Mean_2_float64;
  kcg_float64 /* @5/_L4/ */ _L4_Mean_2_float64;
  kcg_float64 /* @5/_L3/ */ _L3_Mean_2_float64;
  kcg_float64 /* @5/_L2/ */ _L2_Mean_2_float64;
  kcg_float64 /* @5/_L1/ */ _L1_Mean_2_float64;
  kcg_float64 /* @6/Me_output/ */ Me_output_Mean_3_float64;
  kcg_float64 /* @6/I2/ */ I2_Mean_3_float64;
  kcg_float64 /* @6/I1/ */ I1_Mean_3_float64;
  kcg_float64 /* @6/_L6/ */ _L6_Mean_3_float64;
  kcg_float64 /* @6/_L4/ */ _L4_Mean_3_float64;
  kcg_float64 /* @6/_L3/ */ _L3_Mean_3_float64;
  kcg_float64 /* @6/_L2/ */ _L2_Mean_3_float64;
  kcg_float64 /* @6/_L1/ */ _L1_Mean_3_float64;
  kcg_float64 /* @7/Me3_Output/ */ Me3_Output_Mean3_6_float64;
  kcg_float64 /* @7/I3/ */ I3_Mean3_6_float64;
  kcg_float64 /* @7/I2/ */ I2_Mean3_6_float64;
  kcg_float64 /* @7/I1/ */ I1_Mean3_6_float64;
  kcg_float64 /* @7/_L7/ */ _L7_Mean3_6_float64;
  kcg_float64 /* @7/_L5/ */ _L5_Mean3_6_float64;
  kcg_float64 /* @7/_L4/ */ _L4_Mean3_6_float64;
  kcg_float64 /* @7/_L3/ */ _L3_Mean3_6_float64;
  kcg_float64 /* @7/_L2/ */ _L2_Mean3_6_float64;
  kcg_float64 /* @7/_L1/ */ _L1_Mean3_6_float64;
  kcg_float64 /* @8/A_Output/ */ A_Output_Abs_2_float64;
  kcg_float64 /* @8/A_Input/ */ A_Input_Abs_2_float64;
  kcg_float64 /* @8/_L8/ */ _L8_Abs_2_float64;
  kcg_float64 /* @8/_L5/ */ _L5_Abs_2_float64;
  kcg_float64 /* @8/_L3/ */ _L3_Abs_2_float64;
  kcg_float64 /* @8/_L2/ */ _L2_Abs_2_float64;
  kcg_bool /* @8/_L1/ */ _L1_Abs_2_float64;
  kcg_float64 /* @9/A_Output/ */ A_Output_Abs_3_float64;
  kcg_float64 /* @9/A_Input/ */ A_Input_Abs_3_float64;
  kcg_float64 /* @9/_L8/ */ _L8_Abs_3_float64;
  kcg_float64 /* @9/_L5/ */ _L5_Abs_3_float64;
  kcg_float64 /* @9/_L3/ */ _L3_Abs_3_float64;
  kcg_float64 /* @9/_L2/ */ _L2_Abs_3_float64;
  kcg_bool /* @9/_L1/ */ _L1_Abs_3_float64;
  kcg_float64 /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:else:_L4/ */ _L4_else_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:else:_L3/ */ _L3_else_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:else:_L2/ */ _L2_else_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L12_then_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:then:_L2/ */ _L23_then_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L34_then_else_else_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* fail2/ */ fail2;
  kcg_bool /* fail1/ */ fail1;
  kcg_bool /* fail3/ */ fail3;
  kcg_bool /* all_fail/ */ all_fail;
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_float64 /* _L14/ */ _L14;
  kcg_float64 /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_float64 /* _L11/ */ _L11;
  kcg_bool /* _L19/ */ _L19;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L16/ */ _L16;
  kcg_bool /* _L20/ */ _L20;
} outC_Check_Delta_3;

/* ===========  node initialization and cycle functions  =========== */
/* Check_Delta_3/ */
extern void Check_Delta_3(
  /* Input1/ */
  kcg_float64 Input1,
  /* Input2/ */
  kcg_float64 Input2,
  /* Input3/ */
  kcg_float64 Input3,
  /* Delta/ */
  kcg_float64 Delta,
  outC_Check_Delta_3 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Check_Delta_3_reset(outC_Check_Delta_3 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Check_Delta_3_init(outC_Check_Delta_3 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Check_Delta_3/
  @1: (math::Abs#1)
  @2: (math::Mean3#1)
  @3: (math::Mean3#4)
  @4: (math::Mean#1)
  @5: (math::Mean#2)
  @6: (math::Mean#3)
  @7: (math::Mean3#6)
  @8: (math::Abs#2)
  @9: (math::Abs#3)
*/

#endif /* _Check_Delta_3_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_Delta_3.h
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

