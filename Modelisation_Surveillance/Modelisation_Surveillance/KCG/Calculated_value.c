/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculated_value.h"

/* Calculated_value/ */
kcg_float64 Calculated_value(
  /* _L1/, value1/ */
  kcg_float64 value1,
  /* _L2/, value2/ */
  kcg_float64 value2,
  /* _L3/, value3/ */
  kcg_float64 value3,
  /* delta/ */
  kcg_float64 delta)
{
  /* IfBlock1:else: */
  kcg_bool else_clock_IfBlock1;
  /* IfBlock1:else:else:else: */
  kcg_bool else_clock_else_else_IfBlock1;
  /* IfBlock1:else:else:else:else:else: */
  kcg_bool else_clock_else_else_else_else_IfBlock1;
  /* IfBlock1:else:else:else:else:else:else: */
  kcg_bool _1_else_clock_else_else_else_else_else_IfBlock1;
  /* IfBlock1:else:else:else:else: */
  kcg_bool else_clock_else_else_else_IfBlock1;
  /* IfBlock1:else:else: */
  kcg_bool else_clock_else_IfBlock1;
  /* IfBlock1: */
  kcg_bool IfBlock1_clock;
  /* _L16/, a/ */
  kcg_bool a;
  /* _L17/, b/ */
  kcg_bool b;
  /* _L18/, c/ */
  kcg_bool c;
  /* Output1/ */
  kcg_float64 Output1;

  c = value3 != Beyond_Interval_value;
  b = value2 != Beyond_Interval_value;
  a = value1 != Beyond_Interval_value;
  IfBlock1_clock = a & b & c;
  /* IfBlock1: */
  if (IfBlock1_clock) {
    Output1 = /* IfBlock1:then:_L7=(Check_Delta_3#1)/ */
      Check_Delta_3(value1, value2, value3, delta);
  }
  else {
    else_clock_IfBlock1 = (!a) & b & c;
    /* IfBlock1:else: */
    if (else_clock_IfBlock1) {
      Output1 = (value2 + value3) / kcg_lit_float64(2.);
    }
    else {
      else_clock_else_IfBlock1 = (!b) & a & c;
      /* IfBlock1:else:else: */
      if (else_clock_else_IfBlock1) {
        Output1 = (value1 + value3) / kcg_lit_float64(2.);
      }
      else {
        else_clock_else_else_IfBlock1 = (!c) & a & b;
        /* IfBlock1:else:else:else: */
        if (else_clock_else_else_IfBlock1) {
          Output1 = (value1 + value2) / kcg_lit_float64(2.);
        }
        else {
          else_clock_else_else_else_IfBlock1 = (!a) & (!b) & c;
          /* IfBlock1:else:else:else:else: */
          if (else_clock_else_else_else_IfBlock1) {
            Output1 = value3;
          }
          else {
            else_clock_else_else_else_else_IfBlock1 = (!b) & (!c) & a;
            /* IfBlock1:else:else:else:else:else: */
            if (else_clock_else_else_else_else_IfBlock1) {
              Output1 = value1;
            }
            else {
              _1_else_clock_else_else_else_else_else_IfBlock1 = (!a) & (!c) & b;
              /* IfBlock1:else:else:else:else:else:else: */
              if (_1_else_clock_else_else_else_else_else_IfBlock1) {
                Output1 = value2;
              }
              else {
                Output1 = Notification_Defaillance;
              }
            }
          }
        }
      }
    }
  }
  return Output1;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Calculated_value.c
** Generation date: 2020-02-07T17:11:26
*************************************************************$ */

