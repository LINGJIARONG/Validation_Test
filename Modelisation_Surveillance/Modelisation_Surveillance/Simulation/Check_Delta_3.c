/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_Delta_3.h"

/* Check_Delta_3/ */
void Check_Delta_3(
  /* Input1/ */
  kcg_float64 Input1,
  /* Input2/ */
  kcg_float64 Input2,
  /* Input3/ */
  kcg_float64 Input3,
  /* Delta/ */
  kcg_float64 Delta,
  outC_Check_Delta_3 *outC)
{
  /* Output1/ */
  kcg_float64 Output1_partial;
  /* Output1/ */
  kcg_float64 _1_Output1_partial;
  /* Output1/ */
  kcg_float64 _2_Output1_partial;
  /* Output1/ */
  kcg_float64 _3_Output1_partial;
  /* Output1/ */
  kcg_float64 _4_Output1_partial;
  /* Output1/ */
  kcg_float64 _5_Output1_partial;
  /* Output1/ */
  kcg_float64 _6_Output1_partial;
  /* Output1/ */
  kcg_float64 _7_Output1_partial;
  /* Output1/ */
  kcg_float64 _8_Output1_partial;
  /* Output1/ */
  kcg_float64 _9_Output1_partial;
  /* Output1/ */
  kcg_float64 _10_Output1_partial;
  /* Output1/ */
  kcg_float64 _11_Output1_partial;
  /* Output1/ */
  kcg_float64 _12_Output1_partial;
  /* Output1/ */
  kcg_float64 _13_Output1_partial;

  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.);
  outC->_L7_Mean3_1_float64 = kcg_lit_float64(3.);
  outC->_L3 = Input3;
  outC->I3_Mean3_1_float64 = outC->_L3;
  outC->_L3_Mean3_1_float64 = outC->I3_Mean3_1_float64;
  outC->_L2 = Input2;
  outC->I2_Mean3_1_float64 = outC->_L2;
  outC->_L2_Mean3_1_float64 = outC->I2_Mean3_1_float64;
  outC->_L1 = Input1;
  outC->I1_Mean3_1_float64 = outC->_L1;
  outC->_L1_Mean3_1_float64 = outC->I1_Mean3_1_float64;
  outC->_L4_Mean3_1_float64 = outC->_L1_Mean3_1_float64 +
    outC->_L2_Mean3_1_float64 + outC->_L3_Mean3_1_float64;
  outC->_L5_Mean3_1_float64 = outC->_L4_Mean3_1_float64 /
    outC->_L7_Mean3_1_float64;
  outC->Me3_Output_Mean3_1_float64 = outC->_L5_Mean3_1_float64;
  outC->_L8 = outC->Me3_Output_Mean3_1_float64;
  outC->_L9 = outC->_L1 - outC->_L8;
  outC->A_Input_Abs_1_float64 = outC->_L9;
  outC->_L5_Abs_1_float64 = outC->A_Input_Abs_1_float64;
  outC->_L3_Abs_1_float64 = - outC->_L5_Abs_1_float64;
  outC->_L1_Abs_1_float64 = outC->_L8_Abs_1_float64 <= outC->_L5_Abs_1_float64;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_float64) {
    outC->_L2_Abs_1_float64 = outC->_L5_Abs_1_float64;
  }
  else {
    outC->_L2_Abs_1_float64 = outC->_L3_Abs_1_float64;
  }
  outC->A_Output_Abs_1_float64 = outC->_L2_Abs_1_float64;
  outC->_L18 = Delta;
  outC->_L16 = outC->_L8 - outC->_L3;
  outC->A_Input_Abs_3_float64 = outC->_L16;
  outC->_L5_Abs_3_float64 = outC->A_Input_Abs_3_float64;
  outC->_L3_Abs_3_float64 = - outC->_L5_Abs_3_float64;
  outC->_L8_Abs_3_float64 = kcg_lit_float64(0.);
  outC->_L1_Abs_3_float64 = outC->_L8_Abs_3_float64 <= outC->_L5_Abs_3_float64;
  /* @9/_L2= */
  if (outC->_L1_Abs_3_float64) {
    outC->_L2_Abs_3_float64 = outC->_L5_Abs_3_float64;
  }
  else {
    outC->_L2_Abs_3_float64 = outC->_L3_Abs_3_float64;
  }
  outC->A_Output_Abs_3_float64 = outC->_L2_Abs_3_float64;
  outC->_L17 = outC->A_Output_Abs_3_float64;
  outC->_L19 = outC->_L17 > outC->_L18;
  outC->_L13 = Delta;
  outC->_L11 = outC->_L8 - outC->_L2;
  outC->A_Input_Abs_2_float64 = outC->_L11;
  outC->_L5_Abs_2_float64 = outC->A_Input_Abs_2_float64;
  outC->_L3_Abs_2_float64 = - outC->_L5_Abs_2_float64;
  outC->_L8_Abs_2_float64 = kcg_lit_float64(0.);
  outC->_L1_Abs_2_float64 = outC->_L8_Abs_2_float64 <= outC->_L5_Abs_2_float64;
  /* @8/_L2= */
  if (outC->_L1_Abs_2_float64) {
    outC->_L2_Abs_2_float64 = outC->_L5_Abs_2_float64;
  }
  else {
    outC->_L2_Abs_2_float64 = outC->_L3_Abs_2_float64;
  }
  outC->A_Output_Abs_2_float64 = outC->_L2_Abs_2_float64;
  outC->_L14 = outC->A_Output_Abs_2_float64;
  outC->_L12 = outC->_L14 > outC->_L13;
  outC->_L4 = Delta;
  outC->_L7 = outC->A_Output_Abs_1_float64;
  outC->_L10 = outC->_L7 > outC->_L4;
  outC->_L20 = outC->_L10 & outC->_L12 & outC->_L19;
  outC->all_fail = outC->_L20;
  outC->IfBlock1_clock = outC->all_fail;
  if (outC->IfBlock1_clock) {
    outC->_L7_Mean3_4_float64 = kcg_lit_float64(3.);
    outC->_L3_then_IfBlock1 = Input3;
    outC->I3_Mean3_4_float64 = outC->_L3_then_IfBlock1;
    outC->_L3_Mean3_4_float64 = outC->I3_Mean3_4_float64;
    outC->_L2_then_IfBlock1 = Input2;
    outC->I2_Mean3_4_float64 = outC->_L2_then_IfBlock1;
    outC->_L2_Mean3_4_float64 = outC->I2_Mean3_4_float64;
    outC->_L1_then_IfBlock1 = Input1;
    outC->I1_Mean3_4_float64 = outC->_L1_then_IfBlock1;
    outC->_L1_Mean3_4_float64 = outC->I1_Mean3_4_float64;
    outC->_L4_Mean3_4_float64 = outC->_L1_Mean3_4_float64 +
      outC->_L2_Mean3_4_float64 + outC->_L3_Mean3_4_float64;
    outC->_L5_Mean3_4_float64 = outC->_L4_Mean3_4_float64 /
      outC->_L7_Mean3_4_float64;
    outC->Me3_Output_Mean3_4_float64 = outC->_L5_Mean3_4_float64;
  }
  outC->fail3 = outC->_L19;
  outC->fail2 = outC->_L12;
  outC->fail1 = outC->_L10;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L6_then_IfBlock1 = outC->Me3_Output_Mean3_4_float64;
    Output1_partial = outC->_L6_then_IfBlock1;
    outC->Output1 = Output1_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->fail1 & outC->fail2 & (!outC->fail3);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = Input3;
      _13_Output1_partial = outC->_L1_then_else_IfBlock1;
      _1_Output1_partial = _13_Output1_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->fail1 & (!outC->fail2) & outC->fail3;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = Input2;
        _2_Output1_partial = outC->_L2_then_else_else_IfBlock1;
        _12_Output1_partial = _2_Output1_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = (!outC->fail1) & outC->fail2 &
          outC->fail3;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = Input1;
          _11_Output1_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_Output1_partial = _11_Output1_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->fail1 &
            (!outC->fail2) & (!outC->fail3);
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L6_Mean_1_float64 = kcg_lit_float64(2.);
            outC->_L2_then_else_else_else_else_IfBlock1 = Input3;
            outC->I2_Mean_1_float64 = outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L2_Mean_1_float64 = outC->I2_Mean_1_float64;
            outC->_L1_then_else_else_else_else_IfBlock1 = Input2;
            outC->I1_Mean_1_float64 = outC->_L1_then_else_else_else_else_IfBlock1;
            outC->_L1_Mean_1_float64 = outC->I1_Mean_1_float64;
            outC->_L4_Mean_1_float64 = outC->_L1_Mean_1_float64 + outC->_L2_Mean_1_float64;
            outC->_L3_Mean_1_float64 = outC->_L4_Mean_1_float64 / outC->_L6_Mean_1_float64;
            outC->Me_output_Mean_1_float64 = outC->_L3_Mean_1_float64;
            outC->_L3_then_else_else_else_else_IfBlock1 = outC->Me_output_Mean_1_float64;
            _4_Output1_partial = outC->_L3_then_else_else_else_else_IfBlock1;
            _10_Output1_partial = _4_Output1_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = (!outC->fail1) &
              (!outC->fail2) & outC->fail3;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L6_Mean_2_float64 = kcg_lit_float64(2.);
              outC->_L34_then_else_else_else_else_else_IfBlock1 = Input2;
              outC->I2_Mean_2_float64 = outC->_L34_then_else_else_else_else_else_IfBlock1;
              outC->_L2_Mean_2_float64 = outC->I2_Mean_2_float64;
              outC->_L23_then_else_else_else_else_else_IfBlock1 = Input1;
              outC->I1_Mean_2_float64 = outC->_L23_then_else_else_else_else_else_IfBlock1;
              outC->_L1_Mean_2_float64 = outC->I1_Mean_2_float64;
              outC->_L4_Mean_2_float64 = outC->_L1_Mean_2_float64 + outC->_L2_Mean_2_float64;
              outC->_L3_Mean_2_float64 = outC->_L4_Mean_2_float64 / outC->_L6_Mean_2_float64;
              outC->Me_output_Mean_2_float64 = outC->_L3_Mean_2_float64;
              outC->_L12_then_else_else_else_else_else_IfBlock1 =
                outC->Me_output_Mean_2_float64;
              _9_Output1_partial = outC->_L12_then_else_else_else_else_else_IfBlock1;
              _5_Output1_partial = _9_Output1_partial;
            }
            else {
              outC->_1_else_clock_else_else_else_else_else_IfBlock1 =
                (!outC->fail1) & outC->fail2 & (!outC->fail3);
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_1_else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L6_Mean_3_float64 = kcg_lit_float64(2.);
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 = Input1;
                outC->I2_Mean_3_float64 = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_Mean_3_float64 = outC->I2_Mean_3_float64;
                outC->_L3_then_else_else_else_else_else_else_IfBlock1 = Input3;
                outC->I1_Mean_3_float64 = outC->_L3_then_else_else_else_else_else_else_IfBlock1;
                outC->_L1_Mean_3_float64 = outC->I1_Mean_3_float64;
                outC->_L4_Mean_3_float64 = outC->_L1_Mean_3_float64 + outC->_L2_Mean_3_float64;
                outC->_L3_Mean_3_float64 = outC->_L4_Mean_3_float64 / outC->_L6_Mean_3_float64;
                outC->Me_output_Mean_3_float64 = outC->_L3_Mean_3_float64;
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  outC->Me_output_Mean_3_float64;
                _6_Output1_partial = outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _8_Output1_partial = _6_Output1_partial;
              }
              else {
                outC->_L7_Mean3_6_float64 = kcg_lit_float64(3.);
                outC->_L4_else_else_else_else_else_else_else_IfBlock1 = Input3;
                outC->I3_Mean3_6_float64 =
                  outC->_L4_else_else_else_else_else_else_else_IfBlock1;
                outC->_L3_Mean3_6_float64 = outC->I3_Mean3_6_float64;
                outC->_L3_else_else_else_else_else_else_else_IfBlock1 = Input2;
                outC->I2_Mean3_6_float64 =
                  outC->_L3_else_else_else_else_else_else_else_IfBlock1;
                outC->_L2_Mean3_6_float64 = outC->I2_Mean3_6_float64;
                outC->_L2_else_else_else_else_else_else_else_IfBlock1 = Input1;
                outC->I1_Mean3_6_float64 =
                  outC->_L2_else_else_else_else_else_else_else_IfBlock1;
                outC->_L1_Mean3_6_float64 = outC->I1_Mean3_6_float64;
                outC->_L4_Mean3_6_float64 = outC->_L1_Mean3_6_float64 +
                  outC->_L2_Mean3_6_float64 + outC->_L3_Mean3_6_float64;
                outC->_L5_Mean3_6_float64 = outC->_L4_Mean3_6_float64 /
                  outC->_L7_Mean3_6_float64;
                outC->Me3_Output_Mean3_6_float64 = outC->_L5_Mean3_6_float64;
                outC->_L1_else_else_else_else_else_else_else_IfBlock1 =
                  outC->Me3_Output_Mean3_6_float64;
                _7_Output1_partial = outC->_L1_else_else_else_else_else_else_else_IfBlock1;
                _8_Output1_partial = _7_Output1_partial;
              }
              _5_Output1_partial = _8_Output1_partial;
            }
            _10_Output1_partial = _5_Output1_partial;
          }
          _3_Output1_partial = _10_Output1_partial;
        }
        _12_Output1_partial = _3_Output1_partial;
      }
      _1_Output1_partial = _12_Output1_partial;
    }
    outC->Output1 = _1_Output1_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Check_Delta_3_init(outC_Check_Delta_3 *outC)
{
  outC->_L20 = kcg_true;
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_true;
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->all_fail = kcg_true;
  outC->fail3 = kcg_true;
  outC->fail1 = kcg_true;
  outC->fail2 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L34_then_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L23_then_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L12_then_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_1_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L2_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L3_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L4_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L3_then_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L3_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L6_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_Abs_3_float64 = kcg_true;
  outC->_L2_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_3_float64 = kcg_lit_float64(0.0);
  outC->_L1_Abs_2_float64 = kcg_true;
  outC->_L2_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_2_float64 = kcg_lit_float64(0.0);
  outC->_L1_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->_L5_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->_L7_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->I3_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->Me3_Output_Mean3_6_float64 = kcg_lit_float64(0.0);
  outC->_L1_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L6_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->Me_output_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L1_Mean_2_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean_2_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean_2_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean_2_float64 = kcg_lit_float64(0.0);
  outC->_L6_Mean_2_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean_2_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean_2_float64 = kcg_lit_float64(0.0);
  outC->Me_output_Mean_2_float64 = kcg_lit_float64(0.0);
  outC->_L1_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L6_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->Me_output_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L1_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->_L5_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->_L7_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->I3_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->Me3_Output_Mean3_4_float64 = kcg_lit_float64(0.0);
  outC->_L1_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->_L7_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->I3_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->Me3_Output_Mean3_1_float64 = kcg_lit_float64(0.0);
  outC->_L1_Abs_1_float64 = kcg_true;
  outC->_L2_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->Output1 = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Check_Delta_3_reset(outC_Check_Delta_3 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Check_Delta_3/
  @1: (math::Abs#1)
  @9: (math::Abs#3)
  @8: (math::Abs#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_Delta_3.c
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

