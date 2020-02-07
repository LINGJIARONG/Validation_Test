/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/Simulation/config.txt
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculated_value.h"

/* Calculated_value/ */
void Calculated_value(
  /* value1/ */
  kcg_float64 value1,
  /* value2/ */
  kcg_float64 value2,
  /* value3/ */
  kcg_float64 value3,
  /* delta/ */
  kcg_float64 delta,
  outC_Calculated_value *outC)
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

  outC->_L9 = Beyond_Interval_value;
  outC->_L3 = value3;
  outC->_L18 = outC->_L3 != outC->_L9;
  outC->c = outC->_L18;
  outC->_L8 = Beyond_Interval_value;
  outC->_L2 = value2;
  outC->_L17 = outC->_L2 != outC->_L8;
  outC->b = outC->_L17;
  outC->_L7 = Beyond_Interval_value;
  outC->_L1 = value1;
  outC->_L16 = outC->_L1 != outC->_L7;
  outC->a = outC->_L16;
  outC->IfBlock1_clock = outC->a & outC->b & outC->c;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = value1;
    outC->_L5_then_IfBlock1 = value2;
    outC->_L6_then_IfBlock1 = value3;
    outC->_L8_then_IfBlock1 = delta;
    /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */
    Check_Delta_3(
      outC->_L4_then_IfBlock1,
      outC->_L5_then_IfBlock1,
      outC->_L6_then_IfBlock1,
      outC->_L8_then_IfBlock1,
      &outC->Context_Check_Delta_3_1);
    outC->_L7_then_IfBlock1 = outC->Context_Check_Delta_3_1.Output1;
    Output1_partial = outC->_L7_then_IfBlock1;
    outC->Output1 = Output1_partial;
  }
  else {
    outC->else_clock_IfBlock1 = (!outC->a) & outC->b & outC->c;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L6_Mean_1_float64 = kcg_lit_float64(2.);
      outC->_L3_then_else_IfBlock1 = value3;
      outC->I2_Mean_1_float64 = outC->_L3_then_else_IfBlock1;
      outC->_L2_Mean_1_float64 = outC->I2_Mean_1_float64;
      outC->_L2_then_else_IfBlock1 = value2;
      outC->I1_Mean_1_float64 = outC->_L2_then_else_IfBlock1;
      outC->_L1_Mean_1_float64 = outC->I1_Mean_1_float64;
      outC->_L4_Mean_1_float64 = outC->_L1_Mean_1_float64 + outC->_L2_Mean_1_float64;
      outC->_L3_Mean_1_float64 = outC->_L4_Mean_1_float64 / outC->_L6_Mean_1_float64;
      outC->Me_output_Mean_1_float64 = outC->_L3_Mean_1_float64;
      outC->_L1_then_else_IfBlock1 = outC->Me_output_Mean_1_float64;
      _13_Output1_partial = outC->_L1_then_else_IfBlock1;
      _1_Output1_partial = _13_Output1_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = (!outC->b) & outC->a & outC->c;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L6_Mean_3_float64 = kcg_lit_float64(2.);
        outC->_L5_then_else_else_IfBlock1 = value3;
        outC->I2_Mean_3_float64 = outC->_L5_then_else_else_IfBlock1;
        outC->_L2_Mean_3_float64 = outC->I2_Mean_3_float64;
        outC->_L4_then_else_else_IfBlock1 = value1;
        outC->I1_Mean_3_float64 = outC->_L4_then_else_else_IfBlock1;
        outC->_L1_Mean_3_float64 = outC->I1_Mean_3_float64;
        outC->_L4_Mean_3_float64 = outC->_L1_Mean_3_float64 + outC->_L2_Mean_3_float64;
        outC->_L3_Mean_3_float64 = outC->_L4_Mean_3_float64 / outC->_L6_Mean_3_float64;
        outC->Me_output_Mean_3_float64 = outC->_L3_Mean_3_float64;
        outC->_L1_then_else_else_IfBlock1 = outC->Me_output_Mean_3_float64;
        _2_Output1_partial = outC->_L1_then_else_else_IfBlock1;
        _12_Output1_partial = _2_Output1_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = (!outC->c) & outC->a & outC->b;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L6_Mean_5_float64 = kcg_lit_float64(2.);
          outC->_L4_then_else_else_else_IfBlock1 = value2;
          outC->I2_Mean_5_float64 = outC->_L4_then_else_else_else_IfBlock1;
          outC->_L2_Mean_5_float64 = outC->I2_Mean_5_float64;
          outC->_L3_then_else_else_else_IfBlock1 = value1;
          outC->I1_Mean_5_float64 = outC->_L3_then_else_else_else_IfBlock1;
          outC->_L1_Mean_5_float64 = outC->I1_Mean_5_float64;
          outC->_L4_Mean_5_float64 = outC->_L1_Mean_5_float64 + outC->_L2_Mean_5_float64;
          outC->_L3_Mean_5_float64 = outC->_L4_Mean_5_float64 / outC->_L6_Mean_5_float64;
          outC->Me_output_Mean_5_float64 = outC->_L3_Mean_5_float64;
          outC->_L2_then_else_else_else_IfBlock1 = outC->Me_output_Mean_5_float64;
          _11_Output1_partial = outC->_L2_then_else_else_else_IfBlock1;
          _3_Output1_partial = _11_Output1_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = (!outC->a) & (!outC->b) & outC->c;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = value3;
            _4_Output1_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _10_Output1_partial = _4_Output1_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = (!outC->b) &
              (!outC->c) & outC->a;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L12_then_else_else_else_else_else_IfBlock1 = value1;
              _9_Output1_partial = outC->_L12_then_else_else_else_else_else_IfBlock1;
              _5_Output1_partial = _9_Output1_partial;
            }
            else {
              outC->_1_else_clock_else_else_else_else_else_IfBlock1 =
                (!outC->a) & (!outC->c) & outC->b;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_1_else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 = value2;
                _6_Output1_partial = outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _8_Output1_partial = _6_Output1_partial;
              }
              else {
                outC->_L1_else_else_else_else_else_else_else_IfBlock1 =
                  Notification_Defaillance;
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
void Calculated_value_init(outC_Calculated_value *outC)
{
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->c = kcg_true;
  outC->b = kcg_true;
  outC->a = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L2_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L3_then_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L12_then_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_1_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L4_then_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L5_then_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L5_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L6_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L7_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L8_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_Mean_5_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean_5_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean_5_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean_5_float64 = kcg_lit_float64(0.0);
  outC->_L6_Mean_5_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean_5_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean_5_float64 = kcg_lit_float64(0.0);
  outC->Me_output_Mean_5_float64 = kcg_lit_float64(0.0);
  outC->_L1_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L6_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->Me_output_Mean_3_float64 = kcg_lit_float64(0.0);
  outC->_L1_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L6_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->Me_output_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->Output1 = kcg_lit_float64(0.0);
  /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */
  Check_Delta_3_init(&outC->Context_Check_Delta_3_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Calculated_value_reset(outC_Calculated_value *outC)
{
  /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */
  Check_Delta_3_reset(&outC->Context_Check_Delta_3_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Calculated_value.c
** Generation date: 2020-02-07T15:37:19
*************************************************************$ */

