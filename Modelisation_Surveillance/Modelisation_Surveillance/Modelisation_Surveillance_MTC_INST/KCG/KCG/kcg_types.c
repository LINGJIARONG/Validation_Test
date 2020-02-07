/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_Ten_Values_Table
kcg_bool kcg_comp_Ten_Values_Table(
  Ten_Values_Table *kcg_c1,
  Ten_Values_Table *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Data(&(*kcg_c1)[kcg_ci], &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Ten_Values_Table */

#ifdef kcg_use_Data
kcg_bool kcg_comp_Data(Data *kcg_c1, Data *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Data */

#ifdef kcg_use_array_float64_3_9
kcg_bool kcg_comp_array_float64_3_9(
  array_float64_3_9 *kcg_c1,
  array_float64_3_9 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Data(&(*kcg_c1)[kcg_ci], &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float64_3_9 */

#ifdef kcg_use_position
kcg_bool kcg_comp_position(position *kcg_c1, position *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_position */

#ifdef kcg_use_Statation_data
kcg_bool kcg_comp_Statation_data(Statation_data *kcg_c1, Statation_data *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Time == kcg_c2->Time);
  kcg_equ = kcg_equ & kcg_comp_position(&kcg_c1->Position, &kcg_c2->Position);
  kcg_equ = kcg_equ & (kcg_c1->Redox == kcg_c2->Redox);
  kcg_equ = kcg_equ & (kcg_c1->pH == kcg_c2->pH);
  kcg_equ = kcg_equ & (kcg_c1->Temperature == kcg_c2->Temperature);
  return kcg_equ;
}
#endif /* kcg_use_Statation_data */

/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

