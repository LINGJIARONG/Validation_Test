/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config J:/Modelisation_Surveillance/KCG/config.txt
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Controller.h"

/* Controller/ */
void Controller(inC_Controller *inC, outC_Controller *outC)
{
  kcg_float64 tmp;
  kcg_float64 tmp1;
  kcg_float64 tmp2;
  Data tmp3;
  /* SM1:Normal_Station:<1>, SM1:Normal_Station:_L8/, SM1:Normal_Station:notif/ */
  kcg_bool _L8_Normal_Station_SM1;
  /* SM1:Normal_Station:_L5/ */
  kcg_float64 _L5_Normal_Station_SM1;
  /* SM1:Normal_Station:_L6/ */
  kcg_float64 _L6_Normal_Station_SM1;
  /* SM1:Normal_Station:_L7/ */
  kcg_float64 _L7_Normal_Station_SM1;
  /* @3/A_Input/, @3/_L5/, SM1:Calculate:_L24/ */
  kcg_float64 _L24_Calculate_SM1;
  /* @2/A_Input/, @2/_L5/, SM1:Calculate:_L23/ */
  kcg_float64 _L23_Calculate_SM1;
  /* SM1:Calculate:<1>, SM1:Calculate:IfBlock1:, SM1:Calculate:_L20/, alarm/ */
  kcg_bool _L20_Calculate_SM1;
  /* @1/A_Input/, @1/_L5/, SM1:Calculate:_L18/ */
  kcg_float64 _L18_Calculate_SM1;
  /* SM1:Calculate:_L12/ */
  kcg_float64 _L12_Calculate_SM1;
  /* SM1:Calculate:_L13/ */
  kcg_float64 _L13_Calculate_SM1;
  /* SM1:Calculate:_L14/ */
  kcg_float64 _L14_Calculate_SM1;
  /* SM1:Calculate:_L6/ */
  kcg_float64 _L6_Calculate_SM1;
  /* SM1:Calculate:_L5/ */
  kcg_float64 _L5_Calculate_SM1;
  /* SM1:Calculate:_L4/ */
  kcg_float64 _L4_Calculate_SM1;
  /* SM1:Calculate:IfBlock1:else:_L12/ */
  kcg_float64 _L12_else_IfBlock1_Calculate_SM1;
  /* SM1:Calculate:IfBlock1:else:_L13/ */
  kcg_float64 _L13_else_IfBlock1_Calculate_SM1;
  /* SM1: */
  SSM_ST_SM1 SM1_state_sel;
  /* store/ */
  Ten_Values_Table store;

  kcg_copy_Ten_Values_Table(&store, &outC->store);
  SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (SM1_state_sel) {
    case SSM_st_Timer_SM1 :
      kcg_copy_Statation_data(&outC->Send_Data, (Statation_data *) &Normal_Send_Data);
      kcg_copy_Ten_Values_Table(&outC->store, &store);
      if (inC->Time - kcg_lit_float64(0.0) >= kcg_lit_float64(1.0) /
        inC->Frequency) {
        outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Timer_SM1;
      }
      break;
    case SSM_st_Pollution_SM1 :
      kcg_copy_Statation_data(&outC->Send_Data, (Statation_data *) &Normal_Send_Data);
      kcg_copy_Ten_Values_Table(&outC->store, &store);
      if (inC->Stop) {
        outC->SM1_state_nxt = SSM_st_Defaillance_Station_SM1;
      }
      else if (inC->Frequency >= kcg_lit_float64(0.)) {
        outC->SM1_state_nxt = SSM_st_Timer_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Pollution_SM1;
      }
      break;
    case SSM_st_Calculate_SM1 :
      kcg_copy_position(&outC->Send_Data.Position, &inC->Sensor_GPS);
      outC->Send_Data.Time = inC->Time;
      /* SM1:Calculate:_L4=(Vote_Alog#3)/ */
      Vote_Alog(
        &inC->Sensor_pH,
        &inC->Sensor_Temperature,
        &inC->Sensor_Redox,
        &_L4_Calculate_SM1,
        &_L5_Calculate_SM1,
        &_L6_Calculate_SM1);
      outC->Send_Data.Temperature = _L5_Calculate_SM1;
      outC->Send_Data.pH = _L4_Calculate_SM1;
      outC->Send_Data.Redox = _L6_Calculate_SM1;
      /* SM1:Calculate:_L12=(Mean_10_Table#1)/ */
      Mean_10_Table(
        &store,
        &_L12_Calculate_SM1,
        &_L13_Calculate_SM1,
        &_L14_Calculate_SM1);
      _L24_Calculate_SM1 = _L14_Calculate_SM1 - _L6_Calculate_SM1;
      _L23_Calculate_SM1 = _L13_Calculate_SM1 - _L4_Calculate_SM1;
      _L18_Calculate_SM1 = _L12_Calculate_SM1 - _L5_Calculate_SM1;
      /* @1/_L2= */
      if (kcg_lit_float64(0.) <= _L18_Calculate_SM1) {
        tmp = _L18_Calculate_SM1;
      }
      else {
        tmp = - _L18_Calculate_SM1;
      }
      /* @2/_L2= */
      if (kcg_lit_float64(0.) <= _L23_Calculate_SM1) {
        tmp1 = _L23_Calculate_SM1;
      }
      else {
        tmp1 = - _L23_Calculate_SM1;
      }
      /* @3/_L2= */
      if (kcg_lit_float64(0.) <= _L24_Calculate_SM1) {
        tmp2 = _L24_Calculate_SM1;
      }
      else {
        tmp2 = - _L24_Calculate_SM1;
      }
      _L20_Calculate_SM1 = (_L12_Calculate_SM1 * kcg_lit_float64(0.5) < tmp) |
        (_L13_Calculate_SM1 * kcg_lit_float64(0.5) < tmp1) |
        (_L14_Calculate_SM1 * kcg_lit_float64(0.5) < tmp2);
      outC->alarm = _L20_Calculate_SM1;
      /* SM1:Calculate:IfBlock1: */
      if (_L20_Calculate_SM1) {
        kcg_copy_Ten_Values_Table(&outC->store, &store);
        outC->SM1_state_nxt = SSM_st_Pollution_SM1;
      }
      else {
        /* SM1:Calculate:IfBlock1:else:_L11=(Vote_Alog#7)/ */
        Vote_Alog(
          &inC->Sensor_Temperature,
          &inC->Sensor_pH,
          &inC->Sensor_Redox,
          &tmp3[0],
          &_L12_else_IfBlock1_Calculate_SM1,
          &_L13_else_IfBlock1_Calculate_SM1);
        tmp3[1] = _L12_else_IfBlock1_Calculate_SM1;
        tmp3[2] = _L13_else_IfBlock1_Calculate_SM1;
        /* SM1:Calculate:IfBlock1:else:_L15=(Push_Table#1)/ */
        Push_Table(&store, &tmp3, &outC->store);
        outC->SM1_state_nxt = SSM_st_Timer_SM1;
      }
      break;
    case SSM_st_Defaillance_Station_SM1 :
      kcg_copy_Statation_data(&outC->Send_Data, (Statation_data *) &Normal_Send_Data);
      kcg_copy_Ten_Values_Table(&outC->store, &store);
      outC->SM1_state_nxt = SSM_st_Defaillance_Station_SM1;
      break;
    case SSM_st_Normal_Station_SM1 :
      outC->alarm = kcg_false;
      /* SM1:Normal_Station:_L5=(Vote_Alog#1)/ */
      Vote_Alog(
        &inC->Sensor_pH,
        &inC->Sensor_Temperature,
        &inC->Sensor_Redox,
        &_L5_Normal_Station_SM1,
        &_L6_Normal_Station_SM1,
        &_L7_Normal_Station_SM1);
      _L8_Normal_Station_SM1 = (_L5_Normal_Station_SM1 ==
          Notification_Defaillance) | (_L6_Normal_Station_SM1 ==
          Notification_Defaillance) | (Notification_Defaillance ==
          _L7_Normal_Station_SM1);
      kcg_copy_Statation_data(&outC->Send_Data, (Statation_data *) &Normal_Send_Data);
      kcg_copy_Ten_Values_Table(&outC->store, &store);
      if (_L8_Normal_Station_SM1) {
        outC->SM1_state_nxt = SSM_st_Defaillance_Station_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Calculate_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Controller_init(outC_Controller *outC)
{
  kcg_size idx;

  outC->alarm = kcg_true;
  outC->Send_Data.Temperature = kcg_lit_float64(0.0);
  outC->Send_Data.pH = kcg_lit_float64(0.0);
  outC->Send_Data.Redox = kcg_lit_float64(0.0);
  for (idx = 0; idx < 2; idx++) {
    outC->Send_Data.Position[idx] = kcg_lit_float64(0.0);
  }
  outC->Send_Data.Time = kcg_lit_float64(0.0);
  outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
  kcg_copy_Ten_Values_Table(&outC->store, (Ten_Values_Table *) &Normal_Value);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Controller_reset(outC_Controller *outC)
{
  outC->SM1_state_nxt = SSM_st_Normal_Station_SM1;
  kcg_copy_Ten_Values_Table(&outC->store, (Ten_Values_Table *) &Normal_Value);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Controller/
  @1: (math::Abs#1)
  @2: (math::Abs#2)
  @3: (math::Abs#3)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Controller.c
** Generation date: 2020-02-06T17:29:09
*************************************************************$ */

