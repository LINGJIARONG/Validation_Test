/* Modelisation_Surveillance_mapping.c */

#include "Modelisation_Surveillance_type.h"
#include "Modelisation_Surveillance_interface.h"
#include "Modelisation_Surveillance_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_9);
DECL_ITER(array_1);
DECL_ITER(array_10);
DECL_ITER(array_3);
DECL_ITER(array_2);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_77, 1);
DECL_SCOPE(scope_76, 8);
DECL_SCOPE(scope_75, 1);
DECL_SCOPE(scope_74, 1);
DECL_SCOPE(scope_73, 4);
DECL_SCOPE(scope_71, 1);
DECL_SCOPE(scope_70, 1);
DECL_SCOPE(scope_69, 6);
DECL_SCOPE(scope_68, 1);
DECL_SCOPE(scope_67, 14);
DECL_SCOPE(scope_66, 3);
DECL_SCOPE(scope_65, 6);
DECL_SCOPE(scope_64, 6);
DECL_SCOPE(scope_63, 6);
DECL_SCOPE(scope_62, 53);
DECL_SCOPE(scope_61, 1);
DECL_SCOPE(scope_60, 1);
DECL_SCOPE(scope_59, 38);
DECL_SCOPE(scope_57, 6);
DECL_SCOPE(scope_56, 6);
DECL_SCOPE(scope_55, 7);
DECL_SCOPE(scope_54, 5);
DECL_SCOPE(scope_53, 1);
DECL_SCOPE(scope_52, 1);
DECL_SCOPE(scope_51, 1);
DECL_SCOPE(scope_50, 6);
DECL_SCOPE(scope_49, 4);
DECL_SCOPE(scope_48, 6);
DECL_SCOPE(scope_47, 4);
DECL_SCOPE(scope_46, 6);
DECL_SCOPE(scope_45, 4);
DECL_SCOPE(scope_44, 7);
DECL_SCOPE(scope_43, 5);
DECL_SCOPE(scope_42, 3);
DECL_SCOPE(scope_41, 3);
DECL_SCOPE(scope_40, 3);
DECL_SCOPE(scope_39, 3);
DECL_SCOPE(scope_38, 3);
DECL_SCOPE(scope_37, 3);
DECL_SCOPE(scope_36, 3);
DECL_SCOPE(scope_35, 7);
DECL_SCOPE(scope_34, 6);
DECL_SCOPE(scope_33, 27);
DECL_SCOPE(scope_32, 6);
DECL_SCOPE(scope_31, 6);
DECL_SCOPE(scope_30, 4);
DECL_SCOPE(scope_29, 6);
DECL_SCOPE(scope_28, 4);
DECL_SCOPE(scope_27, 6);
DECL_SCOPE(scope_26, 4);
DECL_SCOPE(scope_25, 1);
DECL_SCOPE(scope_24, 1);
DECL_SCOPE(scope_23, 1);
DECL_SCOPE(scope_22, 1);
DECL_SCOPE(scope_21, 3);
DECL_SCOPE(scope_20, 3);
DECL_SCOPE(scope_19, 3);
DECL_SCOPE(scope_18, 3);
DECL_SCOPE(scope_17, 3);
DECL_SCOPE(scope_16, 3);
DECL_SCOPE(scope_15, 3);
DECL_SCOPE(scope_14, 14);
DECL_SCOPE(scope_13, 7);
DECL_SCOPE(scope_12, 7);
DECL_SCOPE(scope_11, 7);
DECL_SCOPE(scope_10, 60);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 16);
DECL_SCOPE(scope_6, 12);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 1);
DECL_SCOPE(scope_2, 5);
DECL_SCOPE(scope_1, 13);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_Calculate_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Calculate_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Defaillance_Station_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Defaillance_Station_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Normal_Station_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Pollution_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Pollution_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Timer_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Timer_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Calculate_Pollution_1_Calculate_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Calculate_Pollution_1_Calculate_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Calculate_Timer_2_Calculate_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Calculate_Timer_2_Calculate_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Normal_Station_Calculate_2_Normal_Station_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Normal_Station_Calculate_2_Normal_Station_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Normal_Station_Defaillance_Station_1_Normal_Station_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Normal_Station_Defaillance_Station_1_Normal_Station_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Pollution_Defaillance_Station_1_Pollution_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Pollution_Defaillance_Station_1_Pollution_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Pollution_Timer_2_Pollution_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Pollution_Timer_2_Pollution_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Timer_Normal_Station_1_Timer_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Timer_Normal_Station_1_Timer_SM1; }
static int isActive_kcg_bool_kcg_false(void* pHandle) { return *(kcg_bool*)pHandle == kcg_false; }
static int isActive_kcg_bool_kcg_true(void* pHandle) { return *(kcg_bool*)pHandle == kcg_true; }

/* mapping definition */

const MappingIterator iter_array_9 = { "array", 9, 9, NULL };
const MappingIterator iter_array_1 = { "array", 1, 1, NULL };
const MappingIterator iter_array_10 = { "array", 10, 10, NULL };
const MappingIterator iter_array_3 = { "array", 3, 3, NULL };
const MappingIterator iter_array_2 = { "array", 2, 2, NULL };

const MappingEntry scope_77_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Timer_Normal_Station_1_Timer_SM1, NULL, 1, 0 }
};
const MappingScope scope_77 = {
    "Controller/ ControllerSM1:Timer:<1",
    scope_77_entries, 1
};

const MappingEntry scope_76_entries[8] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Timer_Normal_Station_1_Timer_SM1, &scope_77, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L2_Timer_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L7_Timer_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L8_Timer_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L10_Timer_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11_Timer_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L12_Timer_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L13_Timer_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 7 }
};
const MappingScope scope_76 = {
    "Controller/ ControllerSM1:Timer:",
    scope_76_entries, 8
};

const MappingEntry scope_75_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Pollution_Timer_2_Pollution_SM1, NULL, 1, 0 }
};
const MappingScope scope_75 = {
    "Controller/ ControllerSM1:Pollution:<2",
    scope_75_entries, 1
};

const MappingEntry scope_74_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Pollution_Defaillance_Station_1_Pollution_SM1, NULL, 1, 0 }
};
const MappingScope scope_74 = {
    "Controller/ ControllerSM1:Pollution:<1",
    scope_74_entries, 1
};

const MappingEntry scope_73_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Pollution_Defaillance_Station_1_Pollution_SM1, &scope_74, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Pollution_Timer_2_Pollution_SM1, &scope_75, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Pollution_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L2_Pollution_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 1, 3 }
};
const MappingScope scope_73 = {
    "Controller/ ControllerSM1:Pollution:",
    scope_73_entries, 4
};

const MappingEntry scope_71_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(Data), 0, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 0 }
};
const MappingScope scope_71 = {
    "array_float64_3_1",
    scope_71_entries, 1
};

const MappingEntry scope_70_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_9, sizeof(Data), 0, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 0 }
};
const MappingScope scope_70 = {
    "array_float64_3_9",
    scope_70_entries, 1
};

const MappingEntry scope_69_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Ten_Values_Table), offsetof(outC_Push_Table, Output1), &_Type_Ten_Values_Table_Utils, NULL, NULL, &scope_5, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Ten_Values_Table), offsetof(outC_Push_Table, _L1), &_Type_Ten_Values_Table_Utils, NULL, NULL, &scope_5, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(Data), offsetof(outC_Push_Table, _L13), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(Ten_Values_Table), offsetof(outC_Push_Table, _L15), &_Type_Ten_Values_Table_Utils, NULL, NULL, &scope_5, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_float64_3_9), offsetof(outC_Push_Table, _L18), &_Type_array_float64_3_9_Utils, NULL, NULL, &scope_70, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(array_float64_3_1), offsetof(outC_Push_Table, _L19), &_Type_array_float64_3_1_Utils, NULL, NULL, &scope_71, 1, 5 }
};
const MappingScope scope_69 = {
    "Push_Table/ Push_Table",
    scope_69_entries, 6
};

const MappingEntry scope_68_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_68 = {
    "array_float64_1",
    scope_68_entries, 1
};

const MappingEntry scope_67_entries[14] = {
    /* 0 */ { MAP_LOCAL, "_L5", NULL, sizeof(Data), (size_t)&outputs_ctx._L5_else_IfBlock1_Calculate_SM1, &_Type_Data_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_4, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(Data), (size_t)&outputs_ctx._L6_else_IfBlock1_Calculate_SM1, &_Type_Data_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_4, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(Data), (size_t)&outputs_ctx._L7_else_IfBlock1_Calculate_SM1, &_Type_Data_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_4, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L11_else_IfBlock1_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L12_else_IfBlock1_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L13_else_IfBlock1_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(Ten_Values_Table), (size_t)&outputs_ctx._L15_else_IfBlock1_Calculate_SM1, &_Type_Ten_Values_Table_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_5, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(Data), (size_t)&outputs_ctx._L19_else_IfBlock1_Calculate_SM1, &_Type_Data_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_4, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(array_float64_1), (size_t)&outputs_ctx._L20_else_IfBlock1_Calculate_SM1, &_Type_array_float64_1_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_68, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(array_float64_1), (size_t)&outputs_ctx._L21_else_IfBlock1_Calculate_SM1, &_Type_array_float64_1_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_68, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(array_float64_1), (size_t)&outputs_ctx._L23_else_IfBlock1_Calculate_SM1, &_Type_array_float64_1_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_68, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L29", NULL, sizeof(Ten_Values_Table), (size_t)&outputs_ctx._L29_else_IfBlock1_Calculate_SM1, &_Type_Ten_Values_Table_Utils, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_5, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "Vote_Alog 7", NULL, sizeof(outC_Vote_Alog), (size_t)&outputs_ctx.Context_Vote_Alog_7, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_10, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "Push_Table 1", NULL, sizeof(outC_Push_Table), (size_t)&outputs_ctx.Context_Push_Table_1, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_69, 1, 13 }
};
const MappingScope scope_67 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:else:",
    scope_67_entries, 14
};

const MappingEntry scope_66_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.IfBlock1_clock_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_false, &scope_67, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 }
};
const MappingScope scope_66 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:",
    scope_66_entries, 3
};

const MappingEntry scope_65_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx.A_Output_Abs_3_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Abs_3_float64, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L2_Abs_3_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L3_Abs_3_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L5_Abs_3_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L8_Abs_3_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 5 }
};
const MappingScope scope_65 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 3",
    scope_65_entries, 6
};

const MappingEntry scope_64_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx.A_Output_Abs_2_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Abs_2_float64, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L2_Abs_2_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L3_Abs_2_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L5_Abs_2_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L8_Abs_2_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 5 }
};
const MappingScope scope_64 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 2",
    scope_64_entries, 6
};

const MappingEntry scope_63_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx.A_Output_Abs_1_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Abs_1_float64, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L2_Abs_1_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L3_Abs_1_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L5_Abs_1_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L8_Abs_1_float64, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 5 }
};
const MappingScope scope_63 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 1",
    scope_63_entries, 6
};

const MappingEntry scope_62_entries[53] = {
    /* 0 */ { MAP_OUTPUT, "Temperature", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, Temperature), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "pH", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, pH), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Redox", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, Redox), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(Ten_Values_Table), offsetof(outC_Mean_10_Table, _L1), &_Type_Ten_Values_Table_Utils, NULL, NULL, &scope_5, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L11), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L10), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L9), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L8), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L7), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L6), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L5), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L4), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L3), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(Data), offsetof(outC_Mean_10_Table, _L2), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L22), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L26), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L24), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L29), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L28), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L27), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L32), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L31), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L30), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L35), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L34), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L33), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L38), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L37), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L36), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L41), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L40), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L39), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L42), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L43), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L44), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L45), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L46), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L47), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L48), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L49), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, _L50), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 52 }
};
const MappingScope scope_62 = {
    "Mean_10_Table/ Mean_10_Table",
    scope_62_entries, 53
};

const MappingEntry scope_61_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Calculate_Timer_2_Calculate_SM1, NULL, 1, 0 }
};
const MappingScope scope_61 = {
    "Controller/ ControllerSM1:Calculate:<2",
    scope_61_entries, 1
};

const MappingEntry scope_60_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Calculate_Pollution_1_Calculate_SM1, NULL, 1, 0 }
};
const MappingScope scope_60 = {
    "Controller/ ControllerSM1:Calculate:<1",
    scope_60_entries, 1
};

const MappingEntry scope_59_entries[38] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Calculate_Pollution_1_Calculate_SM1, &scope_60, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Calculate_Timer_2_Calculate_SM1, &scope_61, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L9_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(Data), (size_t)&outputs_ctx._L8_Calculate_SM1, &_Type_Data_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_4, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(position), (size_t)&outputs_ctx._L7_Calculate_SM1, &_Type_position_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_3, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L4_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L5_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L6_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(Data), (size_t)&outputs_ctx._L3_Calculate_SM1, &_Type_Data_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_4, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(Statation_data), (size_t)&outputs_ctx._L2_Calculate_SM1, &_Type_Statation_data_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_2, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(Data), (size_t)&outputs_ctx._L1_Calculate_SM1, &_Type_Data_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_4, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L14_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L13_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L12_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L15_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L16_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L17_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L18_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L19_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L20_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L21_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L22_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L23_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L24_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L25_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L26_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L27_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L28_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L30_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L42", NULL, sizeof(Ten_Values_Table), (size_t)&outputs_ctx._L42_Calculate_SM1, &_Type_Ten_Values_Table_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_5, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L43_Calculate_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 31 },
    /* 32 */ { MAP_INSTANCE, "Vote_Alog 3", NULL, sizeof(outC_Vote_Alog), (size_t)&outputs_ctx.Context_Vote_Alog_3, NULL, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_10, 1, 32 },
    /* 33 */ { MAP_INSTANCE, "Mean_10_Table 1", NULL, sizeof(outC_Mean_10_Table), (size_t)&outputs_ctx.Context_Mean_10_Table_1, NULL, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_62, 1, 33 },
    /* 34 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_63, 1, 34 },
    /* 35 */ { MAP_EXPANDED, "math::Abs 2", NULL, 0, 0, NULL, NULL, NULL, &scope_64, 1, 35 },
    /* 36 */ { MAP_EXPANDED, "math::Abs 3", NULL, 0, 0, NULL, NULL, NULL, &scope_65, 1, 36 },
    /* 37 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_66, 1, 37 }
};
const MappingScope scope_59 = {
    "Controller/ ControllerSM1:Calculate:",
    scope_59_entries, 38
};

const MappingEntry scope_57_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, A_Output_Abs_3_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _L1_Abs_3_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Abs_3_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Abs_3_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L5_Abs_3_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L8_Abs_3_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_57 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 3",
    scope_57_entries, 6
};

const MappingEntry scope_56_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, A_Output_Abs_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _L1_Abs_2_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Abs_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Abs_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L5_Abs_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L8_Abs_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_56 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 2",
    scope_56_entries, 6
};

const MappingEntry scope_55_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Me3_Output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, Me3_Output_Mean3_4_float64), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_Mean3_4_float64), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Mean3_4_float64), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Mean3_4_float64), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L4_Mean3_4_float64), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L5_Mean3_4_float64), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L7_Mean3_4_float64), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6 }
};
const MappingScope scope_55 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:then:/math::Mean3 4",
    scope_55_entries, 7
};

const MappingEntry scope_54_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L6_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_EXPANDED, "math::Mean3 4", NULL, 0, 0, NULL, NULL, NULL, &scope_55, 1, 4 }
};
const MappingScope scope_54 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:then:",
    scope_54_entries, 5
};

const MappingEntry scope_53_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_53 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:then:",
    scope_53_entries, 1
};

const MappingEntry scope_52_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_then_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_38_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_52 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:then:",
    scope_52_entries, 1
};

const MappingEntry scope_51_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_then_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_39_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_51 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:then:",
    scope_51_entries, 1
};

const MappingEntry scope_50_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Me_output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, Me_output_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L4_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L6_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_50 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:then:/math::Mean 1",
    scope_50_entries, 6
};

const MappingEntry scope_49_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_then_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_then_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_then_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "math::Mean 1", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 3 }
};
const MappingScope scope_49 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:then:",
    scope_49_entries, 4
};

const MappingEntry scope_48_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Me_output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, Me_output_Mean_2_float64), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_Mean_2_float64), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Mean_2_float64), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Mean_2_float64), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L4_Mean_2_float64), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L6_Mean_2_float64), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_48 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:then:/math::Mean 2",
    scope_48_entries, 6
};

const MappingEntry scope_47_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L12_then_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L23_then_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L34_then_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "math::Mean 2", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 3 }
};
const MappingScope scope_47 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:then:",
    scope_47_entries, 4
};

const MappingEntry scope_46_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Me_output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, Me_output_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L4_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L6_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_46 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:then:/math::Mean 3",
    scope_46_entries, 6
};

const MappingEntry scope_45_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_then_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_then_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_then_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "math::Mean 3", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 3 }
};
const MappingScope scope_45 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:then:",
    scope_45_entries, 4
};

const MappingEntry scope_44_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Me3_Output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, Me3_Output_Mean3_6_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_Mean3_6_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Mean3_6_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Mean3_6_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L4_Mean3_6_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L5_Mean3_6_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L7_Mean3_6_float64), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 6 }
};
const MappingScope scope_44 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:else:/math::Mean3 6",
    scope_44_entries, 7
};

const MappingEntry scope_43_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_else_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_else_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_else_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L4_else_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3 },
    /* 4 */ { MAP_EXPANDED, "math::Mean3 6", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 4 }
};
const MappingScope scope_43 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:else:",
    scope_43_entries, 5
};

const MappingEntry scope_42_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _1_else_clock_else_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_false, &scope_43, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_45, 1, 2 }
};
const MappingScope scope_42 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:",
    scope_42_entries, 3
};

const MappingEntry scope_41_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_40_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_41_entries[0], isActive_kcg_bool_kcg_false, &scope_42, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_41_entries[0], isActive_kcg_bool_kcg_true, &scope_47, 1, 2 }
};
const MappingScope scope_41 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:",
    scope_41_entries, 3
};

const MappingEntry scope_40_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_39_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_kcg_bool_kcg_false, &scope_41, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_kcg_bool_kcg_true, &scope_49, 1, 2 }
};
const MappingScope scope_40 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:",
    scope_40_entries, 3
};

const MappingEntry scope_39_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_38_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_39_entries[0], isActive_kcg_bool_kcg_false, &scope_40, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_39_entries[0], isActive_kcg_bool_kcg_true, &scope_51, 1, 2 }
};
const MappingScope scope_39 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:",
    scope_39_entries, 3
};

const MappingEntry scope_38_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_38_entries[0], isActive_kcg_bool_kcg_false, &scope_39, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_38_entries[0], isActive_kcg_bool_kcg_true, &scope_52, 1, 2 }
};
const MappingScope scope_38 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:",
    scope_38_entries, 3
};

const MappingEntry scope_37_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_37_entries[0], isActive_kcg_bool_kcg_false, &scope_38, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_37_entries[0], isActive_kcg_bool_kcg_true, &scope_53, 1, 2 }
};
const MappingScope scope_37 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:",
    scope_37_entries, 3
};

const MappingEntry scope_36_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_kcg_bool_kcg_false, &scope_37, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_kcg_bool_kcg_true, &scope_54, 1, 2 }
};
const MappingScope scope_36 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:",
    scope_36_entries, 3
};

const MappingEntry scope_35_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Me3_Output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, Me3_Output_Mean3_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1_Mean3_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Mean3_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Mean3_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L4_Mean3_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L5_Mean3_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L7_Mean3_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_35 = {
    "Check_Delta_3/ Check_Delta_3/math::Mean3 1",
    scope_35_entries, 7
};

const MappingEntry scope_34_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_34 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 1",
    scope_34_entries, 6
};

const MappingEntry scope_33_entries[27] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, Output1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "fail2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, fail2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "fail1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, fail1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "fail3", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, fail3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "all_fail", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, all_fail), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 22 },
    /* 23 */ { MAP_EXPANDED, "math::Mean3 1", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 23 },
    /* 24 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 24 },
    /* 25 */ { MAP_EXPANDED, "math::Abs 2", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 25 },
    /* 26 */ { MAP_EXPANDED, "math::Abs 3", NULL, 0, 0, NULL, NULL, NULL, &scope_57, 1, 26 }
};
const MappingScope scope_33 = {
    "Check_Delta_3/ Check_Delta_3",
    scope_33_entries, 27
};

const MappingEntry scope_32_entries[6] = {
    /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L4_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L5_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L6_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L7_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L8_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "Check_Delta_3 1", NULL, sizeof(outC_Check_Delta_3), offsetof(outC_Calculated_value, Context_Check_Delta_3_1), NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_true, &scope_33, 1, 5 }
};
const MappingScope scope_32 = {
    "Calculated_value/ Calculated_valueIfBlock1:then:",
    scope_32_entries, 6
};

const MappingEntry scope_31_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Me_output", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, Me_output_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L2_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L3_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L4_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L6_Mean_1_float64), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_31 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:then:/math::Mean 1",
    scope_31_entries, 6
};

const MappingEntry scope_30_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L2_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L3_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "math::Mean 1", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 3 }
};
const MappingScope scope_30 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:then:",
    scope_30_entries, 4
};

const MappingEntry scope_29_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Me_output", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, Me_output_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L2_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L3_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L4_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L6_Mean_3_float64), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_29 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:then:/math::Mean 3",
    scope_29_entries, 6
};

const MappingEntry scope_28_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1_then_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L4_then_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L5_then_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "math::Mean 3", NULL, 0, 0, NULL, NULL, NULL, &scope_29, 1, 3 }
};
const MappingScope scope_28 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:then:",
    scope_28_entries, 4
};

const MappingEntry scope_27_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Me_output", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, Me_output_Mean_5_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1_Mean_5_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L2_Mean_5_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L3_Mean_5_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L4_Mean_5_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L6_Mean_5_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_27 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:then:/math::Mean 5",
    scope_27_entries, 6
};

const MappingEntry scope_26_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L2_then_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L3_then_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L4_then_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "math::Mean 5", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 3 }
};
const MappingScope scope_26 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:then:",
    scope_26_entries, 4
};

const MappingEntry scope_25_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1_then_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_25 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:then:",
    scope_25_entries, 1
};

const MappingEntry scope_24_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L12_then_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_24 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:then:",
    scope_24_entries, 1
};

const MappingEntry scope_23_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1_then_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_23 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:then:",
    scope_23_entries, 1
};

const MappingEntry scope_22_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1_else_else_else_else_else_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_21_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_22 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:else:",
    scope_22_entries, 1
};

const MappingEntry scope_21_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, _1_else_clock_else_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_20_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_false, &scope_22, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_21_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 2 }
};
const MappingScope scope_21 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:",
    scope_21_entries, 3
};

const MappingEntry scope_20_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_false, &scope_21, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 2 }
};
const MappingScope scope_20 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:",
    scope_20_entries, 3
};

const MappingEntry scope_19_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_18_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_false, &scope_20, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_true, &scope_25, 1, 2 }
};
const MappingScope scope_19 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:",
    scope_19_entries, 3
};

const MappingEntry scope_18_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_17_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_18_entries[0], isActive_kcg_bool_kcg_false, &scope_19, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_18_entries[0], isActive_kcg_bool_kcg_true, &scope_26, 1, 2 }
};
const MappingScope scope_18 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:",
    scope_18_entries, 3
};

const MappingEntry scope_17_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_16_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_17_entries[0], isActive_kcg_bool_kcg_false, &scope_18, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_17_entries[0], isActive_kcg_bool_kcg_true, &scope_28, 1, 2 }
};
const MappingScope scope_17 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:",
    scope_17_entries, 3
};

const MappingEntry scope_16_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_16_entries[0], isActive_kcg_bool_kcg_false, &scope_17, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_16_entries[0], isActive_kcg_bool_kcg_true, &scope_30, 1, 2 }
};
const MappingScope scope_16 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:",
    scope_16_entries, 3
};

const MappingEntry scope_15_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_false, &scope_16, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_true, &scope_32, 1, 2 }
};
const MappingScope scope_15 = {
    "Calculated_value/ Calculated_valueIfBlock1:",
    scope_15_entries, 3
};

const MappingEntry scope_14_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, Output1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "a", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, a), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "b", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, b), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "c", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, c), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 13 }
};
const MappingScope scope_14 = {
    "Calculated_value/ Calculated_value",
    scope_14_entries, 14
};

const MappingEntry scope_13_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_pH, Output1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_pH, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_pH, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_pH, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_pH, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_pH, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_pH, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_13 = {
    "Check_interval_pH/ Check_interval_pH",
    scope_13_entries, 7
};

const MappingEntry scope_12_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Temperature, Output1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_Temperature, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Temperature, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Temperature, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Temperature, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_Temperature, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_Temperature, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_12 = {
    "Check_interval_Temperature/ Check_interval_Temperature",
    scope_12_entries, 7
};

const MappingEntry scope_11_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Redox, Output1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Redox, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Redox, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Redox, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_Redox, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_Redox, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Check_interval_Redox, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_11 = {
    "Check_interval_Redox/ Check_interval_Redox",
    scope_11_entries, 7
};

const MappingEntry scope_10_entries[60] = {
    /* 0 */ { MAP_OUTPUT, "pH", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, pH), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Temperature", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, Temperature), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Redox", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, Redox), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(Data), offsetof(outC_Vote_Alog, _L1), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(Data), offsetof(outC_Vote_Alog, _L2), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(Data), offsetof(outC_Vote_Alog, _L3), &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L22), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L24), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L28), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L29), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L30), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L31), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L32), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L33), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L34), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L36), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, _L38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L39), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L40), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L41), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L42), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L43), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L44), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L45), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, _L46), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_INSTANCE, "Check_interval_Redox 1", NULL, sizeof(outC_Check_interval_Redox), offsetof(outC_Vote_Alog, Context_Check_interval_Redox_1), NULL, NULL, NULL, &scope_11, 1, 48 },
    /* 49 */ { MAP_INSTANCE, "Check_interval_Temperature 1", NULL, sizeof(outC_Check_interval_Temperature), offsetof(outC_Vote_Alog, _2_Context_Check_interval_Temperature_1), NULL, NULL, NULL, &scope_12, 1, 49 },
    /* 50 */ { MAP_INSTANCE, "Check_interval_pH 3", NULL, sizeof(outC_Check_interval_pH), offsetof(outC_Vote_Alog, Context_Check_interval_pH_3), NULL, NULL, NULL, &scope_13, 1, 50 },
    /* 51 */ { MAP_INSTANCE, "Check_interval_pH 2", NULL, sizeof(outC_Check_interval_pH), offsetof(outC_Vote_Alog, Context_Check_interval_pH_2), NULL, NULL, NULL, &scope_13, 1, 51 },
    /* 52 */ { MAP_INSTANCE, "Check_interval_pH 1", NULL, sizeof(outC_Check_interval_pH), offsetof(outC_Vote_Alog, Context_Check_interval_pH_1), NULL, NULL, NULL, &scope_13, 1, 52 },
    /* 53 */ { MAP_INSTANCE, "Calculated_value 1", NULL, sizeof(outC_Calculated_value), offsetof(outC_Vote_Alog, Context_Calculated_value_1), NULL, NULL, NULL, &scope_14, 1, 53 },
    /* 54 */ { MAP_INSTANCE, "Check_interval_Temperature 2", NULL, sizeof(outC_Check_interval_Temperature), offsetof(outC_Vote_Alog, _1_Context_Check_interval_Temperature_2), NULL, NULL, NULL, &scope_12, 1, 54 },
    /* 55 */ { MAP_INSTANCE, "Check_interval_Temperature 3", NULL, sizeof(outC_Check_interval_Temperature), offsetof(outC_Vote_Alog, Context_Check_interval_Temperature_3), NULL, NULL, NULL, &scope_12, 1, 55 },
    /* 56 */ { MAP_INSTANCE, "Calculated_value 2", NULL, sizeof(outC_Calculated_value), offsetof(outC_Vote_Alog, Context_Calculated_value_2), NULL, NULL, NULL, &scope_14, 1, 56 },
    /* 57 */ { MAP_INSTANCE, "Check_interval_Redox 2", NULL, sizeof(outC_Check_interval_Redox), offsetof(outC_Vote_Alog, Context_Check_interval_Redox_2), NULL, NULL, NULL, &scope_11, 1, 57 },
    /* 58 */ { MAP_INSTANCE, "Check_interval_Redox 3", NULL, sizeof(outC_Check_interval_Redox), offsetof(outC_Vote_Alog, Context_Check_interval_Redox_3), NULL, NULL, NULL, &scope_11, 1, 58 },
    /* 59 */ { MAP_INSTANCE, "Calculated_value 3", NULL, sizeof(outC_Calculated_value), offsetof(outC_Vote_Alog, Context_Calculated_value_3), NULL, NULL, NULL, &scope_14, 1, 59 }
};
const MappingScope scope_10 = {
    "Vote_Alog/ Vote_Alog",
    scope_10_entries, 60
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Normal_Station_Calculate_2_Normal_Station_SM1, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "Controller/ ControllerSM1:Normal_Station:<2",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Normal_Station_Defaillance_Station_1_Normal_Station_SM1, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "Controller/ ControllerSM1:Normal_Station:<1",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[16] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Normal_Station_Defaillance_Station_1_Normal_Station_SM1, &scope_8, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[6], isActive_SSM_TR_SM1_SSM_TR_Normal_Station_Calculate_2_Normal_Station_SM1, &scope_9, 1, 1 },
    /* 2 */ { MAP_LOCAL, "notif", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.notif_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(Data), (size_t)&outputs_ctx._L1_Normal_Station_SM1, &_Type_Data_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, &scope_4, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(Data), (size_t)&outputs_ctx._L2_Normal_Station_SM1, &_Type_Data_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, &scope_4, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(Data), (size_t)&outputs_ctx._L3_Normal_Station_SM1, &_Type_Data_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, &scope_4, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L7_Normal_Station_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L6_Normal_Station_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L5_Normal_Station_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L10_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L12_Normal_Station_SM1, &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "Vote_Alog 1", NULL, sizeof(outC_Vote_Alog), (size_t)&outputs_ctx.Context_Vote_Alog_1, NULL, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, &scope_10, 1, 15 }
};
const MappingScope scope_7 = {
    "Controller/ ControllerSM1:Normal_Station:",
    scope_7_entries, 16
};

const MappingEntry scope_6_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Normal_Station:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, &scope_7, 1, 7 },
    /* 8 */ { MAP_STATE, "Defaillance_Station:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Defaillance_Station_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_STATE, "Calculate:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_59, 1, 9 },
    /* 10 */ { MAP_STATE, "Pollution:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, &scope_73, 1, 10 },
    /* 11 */ { MAP_STATE, "Timer:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, &scope_76, 1, 11 }
};
const MappingScope scope_6 = {
    "Controller/ ControllerSM1:",
    scope_6_entries, 12
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(Data), 0, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 0 }
};
const MappingScope scope_5 = {
    "Ten_Values_Table",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "Data",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_3 = {
    "position",
    scope_3_entries, 1
};

const MappingEntry scope_2_entries[5] = {
    /* 0 */ { MAP_FIELD, ".Temperature", NULL, sizeof(kcg_float64), offsetof(Statation_data, Temperature), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".pH", NULL, sizeof(kcg_float64), offsetof(Statation_data, pH), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".Redox", NULL, sizeof(kcg_float64), offsetof(Statation_data, Redox), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".Position", NULL, sizeof(position), offsetof(Statation_data, Position), &_Type_position_Utils, NULL, NULL, &scope_3, 1, 3 },
    /* 4 */ { MAP_FIELD, ".Time", NULL, sizeof(kcg_float64), offsetof(Statation_data, Time), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_2 = {
    "Statation_data",
    scope_2_entries, 5
};

const MappingEntry scope_1_entries[13] = {
    /* 0 */ { MAP_OUTPUT, "Send_Data", NULL, sizeof(Statation_data), (size_t)&outputs_ctx.Send_Data, &_Type_Statation_data_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "alarm", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.alarm, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "Sensor_Temperature", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_Temperature, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 2 },
    /* 3 */ { MAP_INPUT, "Sensor_pH", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_pH, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 3 },
    /* 4 */ { MAP_INPUT, "Sensor_Redox", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_Redox, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 4 },
    /* 5 */ { MAP_INPUT, "Sensor_GPS", NULL, sizeof(position), (size_t)&inputs_ctx.Sensor_GPS, &_Type_position_Utils, NULL, NULL, &scope_3, 1, 5 },
    /* 6 */ { MAP_INPUT, "Time", NULL, sizeof(kcg_float64), (size_t)&inputs_ctx.Time, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INPUT, "Stop", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Stop, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "Frequency", NULL, sizeof(kcg_float64), (size_t)&inputs_ctx.Frequency, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "store", NULL, sizeof(Ten_Values_Table), (size_t)&outputs_ctx.store, &_Type_Ten_Values_Table_Utils, NULL, NULL, &scope_5, 1, 9 },
    /* 10 */ { MAP_LOCAL, "Store_Time", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx.Store_Time, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "timeout", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.timeout, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 12 }
};
const MappingScope scope_1 = {
    "Controller/ Controller",
    scope_1_entries, 13
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Controller", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
