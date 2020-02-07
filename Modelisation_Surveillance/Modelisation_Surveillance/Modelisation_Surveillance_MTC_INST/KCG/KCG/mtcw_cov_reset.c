/* MTC Instrumenter Wrapper generated file */
/* DO NOT EDIT                             */

#include "mtcw_cov_reset.h"

#include "Controller.h"
#include "Vote_Alog.h"
#include "Check_Delta_3.h"
#include "Mean_10_Table.h"
#include "Check_interval_Redox.h"
#include "Check_interval_pH.h"
#include "Calculated_value.h"
#include "Check_interval_Temperature.h"

#include <SmuVTable.h>
#include <kcg_types.h>

static void Controller_Cov_Reset(outC_Controller*);
static void Vote_Alog_Cov_Reset(outC_Vote_Alog*);
static void Check_Delta_3_Cov_Reset(outC_Check_Delta_3*);
static void Mean_10_Table_Cov_Reset(outC_Mean_10_Table*);
static void Check_interval_Redox_Cov_Reset(outC_Check_interval_Redox*);
static void Check_interval_pH_Cov_Reset(outC_Check_interval_pH*);
static void Calculated_value_Cov_Reset(outC_Calculated_value*);
static void Check_interval_Temperature_Cov_Reset(outC_Check_interval_Temperature*);

void Controller_Cov_Reset(outC_Controller* outC)
{
    outC->MTC_ALL1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1);
    outC->MTC_ALL1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_33_Context_LATCHALL02_MTC_1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1);
    outC->MTC_ALL1_TRANSITION_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_35_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_1);
    outC->MTC_ALL1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_32_Context_LATCHALL02_MTC_1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1);
    outC->MTC_ALL1_TRANSITION_MTC_OBS_2 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_34_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_2);
    Vote_Alog_Cov_Reset(&outC->Context_Vote_Alog_1);
    outC->MTC_ALL1_STATE_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_38_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_1);
    outC->MTC_ALL1_Controller_PATHS9_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->_37_Context_LATCHALL03_MTC_1_Controller_PATHS9_MTC_OBS_1);
    outC->_4_MTC_ALL1_Vote_Alog_111_MTC_OBS_1_float643_float643_float643 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_1);
    outC->MTC_ALL1_Controller_PATHS10_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_36_Context_LATCHALL02_MTC_1_Controller_PATHS10_MTC_OBS_1);
    outC->MTC_ALL1_Controller_PATHS11_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL07_MTC_init(&outC->Context_LATCHALL07_MTC_1_Controller_PATHS11_MTC_OBS_1);
    outC->MTC_ALL1_STATE_MTC_OBS_2 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_31_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_2);
    outC->MTC_ALL1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_22_Context_LATCHALL02_MTC_1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1);
    outC->MTC_ALL1_TRANSITION_MTC_OBS_3 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_24_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_3);
    outC->MTC_ALL1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_21_Context_LATCHALL02_MTC_1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2);
    outC->MTC_ALL1_TRANSITION_MTC_OBS_4 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_23_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_4);
    Vote_Alog_Cov_Reset(&outC->Context_Vote_Alog_3);
    Mean_10_Table_Cov_Reset(&outC->Context_Mean_10_Table_1);
    outC->MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->_30_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
    outC->_1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->_29_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
    outC->_2_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
    Vote_Alog_Cov_Reset(&outC->Context_Vote_Alog_7);
    outC->MTC_ALL1_CONTROL_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
    outC->_3_MTC_ALL1_Vote_Alog_111_MTC_OBS_7_float643_float643_float643 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->_5_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_7);
    outC->MTC_ALL1_Push_Table_11_MTC_OBS_1_float643_float64310 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->Context_LATCHALL03_MTC_1_Push_Table_11_MTC_OBS_1);
    outC->MTC_ALL1_CONTROL_MTC_OBS_2 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
    outC->MTC_ALL1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_28_Context_LATCHALL02_MTC_1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1);
    outC->MTC_ALL1_STATE_MTC_OBS_3 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_26_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_3);
    outC->MTC_ALL1_Vote_Alog_111_MTC_OBS_3_float643_float643_float643 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->_9_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_3);
    outC->MTC_ALL1_Controller_PATHS13_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->Context_LATCHALL06_MTC_1_Controller_PATHS13_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_1_MTC_OBS_1_float64310 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_1_Mean_10_Table_1_MTC_OBS_1);
    outC->MTC_ALL1_math_Abs_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1);
    outC->MTC_ALL1_math_Abs_MTC_OBS_2 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2);
    outC->MTC_ALL1_math_Abs_MTC_OBS_3 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3);
    outC->MTC_ALL1_Controller_PATHS14_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_25_Context_LATCHALL01_MTC_1_Controller_PATHS14_MTC_OBS_1);
    outC->MTC_ALL1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_16_Context_LATCHALL02_MTC_1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1);
    outC->MTC_ALL1_TRANSITION_MTC_OBS_5 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_18_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_5);
    outC->MTC_ALL1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2);
    outC->MTC_ALL1_TRANSITION_MTC_OBS_6 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_17_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_6);
    outC->MTC_ALL1_STATE_MTC_OBS_4 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_20_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_4);
    outC->MTC_ALL1_Controller_PATHS15_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_Controller_PATHS15_MTC_OBS_1);
    outC->MTC_ALL1_Controller_PATHS16_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->_19_Context_LATCHALL03_MTC_1_Controller_PATHS16_MTC_OBS_1);
    outC->MTC_ALL1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_15_Context_LATCHALL02_MTC_1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1);
    outC->MTC_ALL1_TRANSITION_MTC_OBS_7 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_7);
    outC->MTC_ALL1_STATE_MTC_OBS_5 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_1_STATE_MTC_OBS_5);
    outC->MTC_ALL1_Controller_PATHS17_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->Context_LATCHALL03_MTC_1_Controller_PATHS17_MTC_OBS_1);
}

void Vote_Alog_Cov_Reset(outC_Vote_Alog* outC)
{
    Check_interval_Redox_Cov_Reset(&outC->Context_Check_interval_Redox_1);
    Check_interval_Temperature_Cov_Reset(&outC->Context_Check_interval_Temperature_1);
    Check_interval_pH_Cov_Reset(&outC->Context_Check_interval_pH_3);
    Check_interval_pH_Cov_Reset(&outC->Context_Check_interval_pH_2);
    Check_interval_pH_Cov_Reset(&outC->Context_Check_interval_pH_1);
    Calculated_value_Cov_Reset(&outC->Context_Calculated_value_1);
    Check_interval_Temperature_Cov_Reset(&outC->_36_Context_Check_interval_Temperature_2);
    Check_interval_Temperature_Cov_Reset(&outC->_37_Context_Check_interval_Temperature_3);
    Calculated_value_Cov_Reset(&outC->Context_Calculated_value_2);
    Check_interval_Redox_Cov_Reset(&outC->Context_Check_interval_Redox_2);
    Check_interval_Redox_Cov_Reset(&outC->Context_Check_interval_Redox_3);
    Calculated_value_Cov_Reset(&outC->Context_Calculated_value_3);
    outC->MTC_ALL1_Vote_Alog_PATHS1_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_39_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS1_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS2_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL12_MTC_init(&outC->_38_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS2_MTC_OBS_1);
    outC->_8_MTC_ALL1_Calculated_value_1110_MTC_OBS_1_float64_float64_float64_float64 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_1);
    outC->_7_MTC_ALL1_Check_interval_pH_1_MTC_OBS_1_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_1);
    outC->_6_MTC_ALL1_Check_interval_pH_1_MTC_OBS_2_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_10_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_2);
    outC->MTC_ALL1_Check_interval_pH_1_MTC_OBS_3_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_12_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_3);
    outC->MTC_ALL1_Vote_Alog_PATHS3_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_35_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS3_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS4_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL12_MTC_init(&outC->_34_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS4_MTC_OBS_1);
    outC->_5_MTC_ALL1_Calculated_value_1110_MTC_OBS_2_float64_float64_float64_float64 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->_14_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_2);
    outC->_4_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_1_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_18_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_1);
    outC->_3_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_2_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_20_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_2);
    outC->MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_3_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_22_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_3);
    outC->MTC_ALL1_Vote_Alog_PATHS5_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_Vote_Alog_PATHS5_MTC_OBS_1);
    outC->MTC_ALL1_Vote_Alog_PATHS6_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL12_MTC_init(&outC->Context_LATCHALL12_MTC_1_Vote_Alog_PATHS6_MTC_OBS_1);
    outC->MTC_ALL1_Calculated_value_1110_MTC_OBS_3_float64_float64_float64_float64 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->_24_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_3);
    outC->_2_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_1_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_28_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_1);
    outC->_1_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_2_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_30_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_2);
    outC->MTC_ALL1_Check_interval_Redox_1_MTC_OBS_3_float64 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->_32_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_3);
}

void Check_Delta_3_Cov_Reset(outC_Check_Delta_3* outC)
{
    outC->_7_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->_38_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1);
    outC->MTC_ALL1_CONTROL_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
    outC->MTC_ALL1_math_Mean3_MTC_OBS_6 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_11_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_6);
    outC->MTC_ALL1_CONTROL_MTC_OBS_2 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
    outC->MTC_ALL1_math_Mean_MTC_OBS_3 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_10_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3);
    outC->MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
    outC->MTC_ALL1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11);
    outC->MTC_ALL1_CONTROL_MTC_OBS_3 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3);
    outC->MTC_ALL1_math_Mean_MTC_OBS_2 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_9_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_2);
    outC->_2_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_23_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
    outC->MTC_ALL1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_24_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10);
    outC->MTC_ALL1_CONTROL_MTC_OBS_4 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4);
    outC->MTC_ALL1_math_Mean_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_8_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1);
    outC->_3_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_26_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
    outC->MTC_ALL1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_27_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9);
    outC->MTC_ALL1_CONTROL_MTC_OBS_5 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5);
    outC->_4_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_29_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
    outC->MTC_ALL1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_30_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8);
    outC->MTC_ALL1_CONTROL_MTC_OBS_6 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6);
    outC->_5_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_32_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
    outC->MTC_ALL1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_33_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7);
    outC->MTC_ALL1_CONTROL_MTC_OBS_7 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7);
    outC->_6_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_35_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
    outC->MTC_ALL1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_36_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6);
    outC->MTC_ALL1_CONTROL_MTC_OBS_8 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_37_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8);
    outC->MTC_ALL1_math_Mean3_MTC_OBS_4 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_4);
    outC->MTC_ALL1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1 = kcg_lit_int32(0);
    LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1);
    outC->_1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->_19_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2);
    outC->MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3);
    outC->MTC_ALL1_Check_Delta_3_PATHS8_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->_18_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS8_MTC_OBS_1);
    outC->MTC_ALL1_math_Abs_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1);
    outC->MTC_ALL1_math_Mean3_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_12_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS9_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->_17_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS9_MTC_OBS_1);
    outC->MTC_ALL1_math_Abs_MTC_OBS_2 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2);
    outC->MTC_ALL1_Check_Delta_3_PATHS10_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS10_MTC_OBS_1);
    outC->MTC_ALL1_math_Abs_MTC_OBS_3 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3);
    outC->MTC_ALL1_Check_Delta_3_PATHS11_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL07_MTC_init(&outC->Context_LATCHALL07_MTC_1_Check_Delta_3_PATHS11_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS12_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_16_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS12_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS13_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_15_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS13_MTC_OBS_1);
    outC->MTC_ALL1_Check_Delta_3_PATHS14_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS14_MTC_OBS_1);
}

void Mean_10_Table_Cov_Reset(outC_Mean_10_Table* outC)
{
    outC->MTC_ALL1_Mean_10_Table_PATHS1_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_10_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS1_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS2_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_9_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS2_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS3_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_8_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS3_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS4_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_7_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS4_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS5_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_6_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS5_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS6_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_5_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS6_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS7_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_4_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS7_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS8_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_3_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS8_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS9_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_2_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS9_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS10_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_1_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS10_MTC_OBS_1);
    outC->MTC_ALL1_Mean_10_Table_PATHS11_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS11_MTC_OBS_1);
}

void Check_interval_Redox_Cov_Reset(outC_Check_interval_Redox* outC)
{
    outC->MTC_ALL1_Check_interval_Redox_PATHS1_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_Check_interval_Redox_PATHS1_MTC_OBS_1);
}

void Check_interval_pH_Cov_Reset(outC_Check_interval_pH* outC)
{
    outC->MTC_ALL1_Check_interval_pH_PATHS1_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_Check_interval_pH_PATHS1_MTC_OBS_1);
}

void Calculated_value_Cov_Reset(outC_Calculated_value* outC)
{
    outC->MTC_ALL1_CONTROL_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1);
    outC->MTC_ALL1_CONTROL_MTC_OBS_2 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_19_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2);
    outC->_11_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
    outC->_10_MTC_ALL1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->Context_LATCHALL06_MTC_1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8);
    outC->MTC_ALL1_CONTROL_MTC_OBS_3 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3);
    outC->_9_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
    outC->_8_MTC_ALL1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_23_Context_LATCHALL06_MTC_1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7);
    outC->MTC_ALL1_CONTROL_MTC_OBS_4 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_24_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4);
    outC->_7_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
    outC->_6_MTC_ALL1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_26_Context_LATCHALL06_MTC_1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6);
    outC->MTC_ALL1_CONTROL_MTC_OBS_5 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5);
    outC->MTC_ALL1_math_Mean_MTC_OBS_5 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_16_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_5);
    outC->_5_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
    outC->_4_MTC_ALL1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_29_Context_LATCHALL06_MTC_1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5);
    outC->MTC_ALL1_CONTROL_MTC_OBS_6 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_30_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6);
    outC->MTC_ALL1_math_Mean_MTC_OBS_3 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_15_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3);
    outC->_3_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
    outC->_2_MTC_ALL1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_32_Context_LATCHALL06_MTC_1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4);
    outC->MTC_ALL1_CONTROL_MTC_OBS_7 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_33_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7);
    outC->MTC_ALL1_math_Mean_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1);
    outC->MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
    outC->_1_MTC_ALL1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_35_Context_LATCHALL06_MTC_1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3);
    Check_Delta_3_Cov_Reset(&outC->Context_Check_Delta_3_1);
    outC->MTC_ALL1_CONTROL_MTC_OBS_8 = kcg_lit_int32(0);
    LATCHALL01_MTC_init(&outC->_36_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8);
    outC->MTC_ALL1_Check_Delta_3_1111_MTC_OBS_1_float64_float64_float64_float64 = kcg_lit_int32(0);
    LATCHALL05_MTC_init(&outC->Context_LATCHALL05_MTC_1_Check_Delta_3_1111_MTC_OBS_1);
    outC->MTC_ALL1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2 = kcg_lit_int32(0);
    LATCHALL06_MTC_init(&outC->_37_Context_LATCHALL06_MTC_1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2);
    outC->_12_MTC_ALL1_Calculated_value_PATHS8_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->_18_Context_LATCHALL03_MTC_1_Calculated_value_PATHS8_MTC_OBS_1);
    outC->_13_MTC_ALL1_Calculated_value_PATHS9_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->_17_Context_LATCHALL03_MTC_1_Calculated_value_PATHS9_MTC_OBS_1);
    outC->_14_MTC_ALL1_Calculated_value_PATHS10_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL03_MTC_init(&outC->Context_LATCHALL03_MTC_1_Calculated_value_PATHS10_MTC_OBS_1);
}

void Check_interval_Temperature_Cov_Reset(outC_Check_interval_Temperature* outC)
{
    outC->MTC_ALL1_Check_interval_Temperature_PATHS1_MTC_OBS_1 = kcg_lit_int32(0);
    LATCHALL04_MTC_init(&outC->Context_LATCHALL04_MTC_1_Check_interval_Temperature_PATHS1_MTC_OBS_1);
}

int Mtcw_outC_Controller_Cov_Reset(void* outC)
{
    Controller_Cov_Reset((outC_Controller*)outC);
    return 1;
}

static struct SimCustomInitVTable outC_Controller_Cov_Reset_VTable = {ScvR17, &Mtcw_outC_Controller_Cov_Reset};
struct SimCustomInitVTable* pSimoutC_ControllerCIVTable = &outC_Controller_Cov_Reset_VTable;

/* end */
