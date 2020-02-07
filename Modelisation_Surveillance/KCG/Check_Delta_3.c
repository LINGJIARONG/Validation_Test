/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check_Delta_3.h"

/* Check_Delta_3/ */
kcg_float64 Check_Delta_3(
  /* @1/I1/, @1/_L1/, Input1/, _L1/ */
  kcg_float64 Input1,
  /* @1/I2/, @1/_L2/, Input2/, _L2/ */
  kcg_float64 Input2,
  /* @1/I3/, @1/_L3/, Input3/, _L3/ */
  kcg_float64 Input3,
  /* Delta/, _L13/, _L18/, _L4/ */
  kcg_float64 Delta)
{
  kcg_float64 tmp;
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
  /* _L12/, fail2/ */
  kcg_bool fail2;
  /* _L10/, fail1/ */
  kcg_bool fail1;
  /* _L19/, fail3/ */
  kcg_bool fail3;
  /* IfBlock1:, _L20/, all_fail/ */
  kcg_bool all_fail;
  /* @1/Me3_Output/, @1/_L5/, _L8/ */
  kcg_float64 _L8;
  /* @2/A_Input/,
     @2/_L5/,
     @3/A_Input/,
     @3/_L5/,
     @4/A_Input/,
     @4/_L5/,
     _L11/,
     _L16/,
     _L9/ */
  kcg_float64 _L11;
  /* Output1/ */
  kcg_float64 Output1;

  _L8 = (Input1 + Input2 + Input3) / kcg_lit_float64(3.);
  _L11 = _L8 - Input3;
  /* @2/_L2= */
  if (kcg_lit_float64(0.) <= _L11) {
    tmp = _L11;
  }
  else {
    tmp = - _L11;
  }
  fail3 = tmp > Delta;
  _L11 = _L8 - Input2;
  /* @3/_L2= */
  if (kcg_lit_float64(0.) <= _L11) {
    tmp = _L11;
  }
  else {
    tmp = - _L11;
  }
  fail2 = tmp > Delta;
  _L11 = Input1 - _L8;
  /* @4/_L2= */
  if (kcg_lit_float64(0.) <= _L11) {
    tmp = _L11;
  }
  else {
    tmp = - _L11;
  }
  fail1 = tmp > Delta;
  all_fail = fail1 & fail2 & fail3;
  /* IfBlock1: */
  if (all_fail) {
    Output1 = (Input1 + Input2 + Input3) / kcg_lit_float64(3.);
  }
  else {
    else_clock_IfBlock1 = fail1 & fail2 & (!fail3);
    /* IfBlock1:else: */
    if (else_clock_IfBlock1) {
      Output1 = Input3;
    }
    else {
      else_clock_else_IfBlock1 = fail1 & (!fail2) & fail3;
      /* IfBlock1:else:else: */
      if (else_clock_else_IfBlock1) {
        Output1 = Input2;
      }
      else {
        else_clock_else_else_IfBlock1 = (!fail1) & fail2 & fail3;
        /* IfBlock1:else:else:else: */
        if (else_clock_else_else_IfBlock1) {
          Output1 = Input1;
        }
        else {
          else_clock_else_else_else_IfBlock1 = fail1 & (!fail2) & (!fail3);
          /* IfBlock1:else:else:else:else: */
          if (else_clock_else_else_else_IfBlock1) {
            Output1 = (Input2 + Input3) / kcg_lit_float64(2.);
          }
          else {
            else_clock_else_else_else_else_IfBlock1 = (!fail1) & (!fail2) & fail3;
            /* IfBlock1:else:else:else:else:else: */
            if (else_clock_else_else_else_else_IfBlock1) {
              Output1 = (Input1 + Input2) / kcg_lit_float64(2.);
            }
            else {
              _1_else_clock_else_else_else_else_else_IfBlock1 = (!fail1) & fail2 & (!fail3);
              /* IfBlock1:else:else:else:else:else:else: */
              if (_1_else_clock_else_else_else_else_else_IfBlock1) {
                Output1 = (Input3 + Input1) / kcg_lit_float64(2.);
              }
              else {
                Output1 = (Input1 + Input2 + Input3) / kcg_lit_float64(3.);
              }
            }
          }
        }
      }
    }
  }
  return Output1;
}

/*
  Expanded instances for: Check_Delta_3/
  @1: (math::Mean3#1)
  @2: (math::Abs#3)
  @3: (math::Abs#2)
  @4: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Check_Delta_3.c
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

