/* Modelisation_Surveillance_MTC_INST_mapping.c */

#include "Modelisation_Surveillance_MTC_INST_type.h"
#include "Modelisation_Surveillance_MTC_INST_interface.h"
#include "Modelisation_Surveillance_MTC_INST_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_3);
DECL_ITER(array_2);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_251, 2);
DECL_SCOPE(scope_250, 2);
DECL_SCOPE(scope_249, 2);
DECL_SCOPE(scope_248, 2);
DECL_SCOPE(scope_247, 2);
DECL_SCOPE(scope_246, 3);
DECL_SCOPE(scope_245, 3);
DECL_SCOPE(scope_244, 2);
DECL_SCOPE(scope_243, 2);
DECL_SCOPE(scope_242, 2);
DECL_SCOPE(scope_241, 2);
DECL_SCOPE(scope_240, 2);
DECL_SCOPE(scope_239, 1);
DECL_SCOPE(scope_238, 3);
DECL_SCOPE(scope_237, 2);
DECL_SCOPE(scope_236, 2);
DECL_SCOPE(scope_235, 2);
DECL_SCOPE(scope_234, 3);
DECL_SCOPE(scope_233, 5);
DECL_SCOPE(scope_232, 2);
DECL_SCOPE(scope_231, 2);
DECL_SCOPE(scope_230, 2);
DECL_SCOPE(scope_229, 2);
DECL_SCOPE(scope_228, 3);
DECL_SCOPE(scope_227, 2);
DECL_SCOPE(scope_226, 5);
DECL_SCOPE(scope_225, 2);
DECL_SCOPE(scope_224, 2);
DECL_SCOPE(scope_223, 2);
DECL_SCOPE(scope_222, 2);
DECL_SCOPE(scope_221, 1);
DECL_SCOPE(scope_220, 1);
DECL_SCOPE(scope_219, 4);
DECL_SCOPE(scope_218, 5);
DECL_SCOPE(scope_217, 2);
DECL_SCOPE(scope_216, 4);
DECL_SCOPE(scope_215, 4);
DECL_SCOPE(scope_214, 2);
DECL_SCOPE(scope_213, 1);
DECL_SCOPE(scope_212, 2);
DECL_SCOPE(scope_211, 1);
DECL_SCOPE(scope_210, 2);
DECL_SCOPE(scope_209, 1);
DECL_SCOPE(scope_208, 2);
DECL_SCOPE(scope_207, 2);
DECL_SCOPE(scope_206, 2);
DECL_SCOPE(scope_205, 2);
DECL_SCOPE(scope_204, 2);
DECL_SCOPE(scope_203, 2);
DECL_SCOPE(scope_202, 2);
DECL_SCOPE(scope_201, 2);
DECL_SCOPE(scope_200, 2);
DECL_SCOPE(scope_199, 2);
DECL_SCOPE(scope_198, 2);
DECL_SCOPE(scope_197, 14);
DECL_SCOPE(scope_196, 2);
DECL_SCOPE(scope_195, 2);
DECL_SCOPE(scope_194, 1);
DECL_SCOPE(scope_193, 3);
DECL_SCOPE(scope_192, 2);
DECL_SCOPE(scope_191, 2);
DECL_SCOPE(scope_190, 2);
DECL_SCOPE(scope_189, 3);
DECL_SCOPE(scope_188, 16);
DECL_SCOPE(scope_187, 2);
DECL_SCOPE(scope_186, 1);
DECL_SCOPE(scope_185, 2);
DECL_SCOPE(scope_184, 2);
DECL_SCOPE(scope_183, 1);
DECL_SCOPE(scope_182, 5);
DECL_SCOPE(scope_181, 2);
DECL_SCOPE(scope_180, 2);
DECL_SCOPE(scope_179, 3);
DECL_SCOPE(scope_178, 3);
DECL_SCOPE(scope_177, 3);
DECL_SCOPE(scope_176, 5);
DECL_SCOPE(scope_175, 2);
DECL_SCOPE(scope_174, 2);
DECL_SCOPE(scope_173, 3);
DECL_SCOPE(scope_172, 3);
DECL_SCOPE(scope_171, 3);
DECL_SCOPE(scope_170, 5);
DECL_SCOPE(scope_169, 2);
DECL_SCOPE(scope_168, 2);
DECL_SCOPE(scope_167, 3);
DECL_SCOPE(scope_166, 3);
DECL_SCOPE(scope_165, 3);
DECL_SCOPE(scope_164, 5);
DECL_SCOPE(scope_163, 1);
DECL_SCOPE(scope_162, 2);
DECL_SCOPE(scope_161, 2);
DECL_SCOPE(scope_160, 2);
DECL_SCOPE(scope_159, 2);
DECL_SCOPE(scope_158, 2);
DECL_SCOPE(scope_157, 2);
DECL_SCOPE(scope_156, 2);
DECL_SCOPE(scope_155, 1);
DECL_SCOPE(scope_154, 1);
DECL_SCOPE(scope_153, 6);
DECL_SCOPE(scope_152, 2);
DECL_SCOPE(scope_151, 2);
DECL_SCOPE(scope_150, 2);
DECL_SCOPE(scope_149, 2);
DECL_SCOPE(scope_148, 1);
DECL_SCOPE(scope_147, 2);
DECL_SCOPE(scope_146, 2);
DECL_SCOPE(scope_145, 2);
DECL_SCOPE(scope_144, 2);
DECL_SCOPE(scope_143, 2);
DECL_SCOPE(scope_142, 2);
DECL_SCOPE(scope_141, 2);
DECL_SCOPE(scope_140, 1);
DECL_SCOPE(scope_139, 2);
DECL_SCOPE(scope_138, 2);
DECL_SCOPE(scope_137, 1);
DECL_SCOPE(scope_136, 2);
DECL_SCOPE(scope_135, 1);
DECL_SCOPE(scope_134, 2);
DECL_SCOPE(scope_133, 2);
DECL_SCOPE(scope_132, 2);
DECL_SCOPE(scope_131, 2);
DECL_SCOPE(scope_130, 6);
DECL_SCOPE(scope_129, 3);
DECL_SCOPE(scope_128, 2);
DECL_SCOPE(scope_127, 2);
DECL_SCOPE(scope_126, 3);
DECL_SCOPE(scope_125, 2);
DECL_SCOPE(scope_124, 1);
DECL_SCOPE(scope_123, 2);
DECL_SCOPE(scope_122, 2);
DECL_SCOPE(scope_121, 3);
DECL_SCOPE(scope_120, 2);
DECL_SCOPE(scope_119, 1);
DECL_SCOPE(scope_118, 2);
DECL_SCOPE(scope_117, 2);
DECL_SCOPE(scope_116, 3);
DECL_SCOPE(scope_115, 2);
DECL_SCOPE(scope_114, 1);
DECL_SCOPE(scope_113, 2);
DECL_SCOPE(scope_112, 2);
DECL_SCOPE(scope_111, 3);
DECL_SCOPE(scope_110, 2);
DECL_SCOPE(scope_109, 2);
DECL_SCOPE(scope_108, 4);
DECL_SCOPE(scope_107, 3);
DECL_SCOPE(scope_106, 2);
DECL_SCOPE(scope_105, 2);
DECL_SCOPE(scope_104, 3);
DECL_SCOPE(scope_103, 2);
DECL_SCOPE(scope_102, 2);
DECL_SCOPE(scope_101, 4);
DECL_SCOPE(scope_100, 3);
DECL_SCOPE(scope_99, 2);
DECL_SCOPE(scope_98, 2);
DECL_SCOPE(scope_97, 3);
DECL_SCOPE(scope_96, 2);
DECL_SCOPE(scope_95, 2);
DECL_SCOPE(scope_94, 4);
DECL_SCOPE(scope_93, 3);
DECL_SCOPE(scope_92, 2);
DECL_SCOPE(scope_91, 2);
DECL_SCOPE(scope_90, 6);
DECL_SCOPE(scope_89, 3);
DECL_SCOPE(scope_88, 4);
DECL_SCOPE(scope_87, 4);
DECL_SCOPE(scope_86, 4);
DECL_SCOPE(scope_85, 4);
DECL_SCOPE(scope_84, 4);
DECL_SCOPE(scope_83, 4);
DECL_SCOPE(scope_82, 4);
DECL_SCOPE(scope_81, 6);
DECL_SCOPE(scope_80, 2);
DECL_SCOPE(scope_79, 1);
DECL_SCOPE(scope_78, 33);
DECL_SCOPE(scope_77, 3);
DECL_SCOPE(scope_76, 2);
DECL_SCOPE(scope_75, 2);
DECL_SCOPE(scope_74, 3);
DECL_SCOPE(scope_73, 2);
DECL_SCOPE(scope_72, 2);
DECL_SCOPE(scope_71, 4);
DECL_SCOPE(scope_70, 3);
DECL_SCOPE(scope_69, 2);
DECL_SCOPE(scope_68, 2);
DECL_SCOPE(scope_67, 3);
DECL_SCOPE(scope_66, 2);
DECL_SCOPE(scope_65, 2);
DECL_SCOPE(scope_64, 4);
DECL_SCOPE(scope_63, 3);
DECL_SCOPE(scope_62, 2);
DECL_SCOPE(scope_61, 2);
DECL_SCOPE(scope_60, 3);
DECL_SCOPE(scope_59, 2);
DECL_SCOPE(scope_58, 2);
DECL_SCOPE(scope_57, 4);
DECL_SCOPE(scope_56, 3);
DECL_SCOPE(scope_55, 2);
DECL_SCOPE(scope_54, 2);
DECL_SCOPE(scope_53, 3);
DECL_SCOPE(scope_52, 2);
DECL_SCOPE(scope_51, 1);
DECL_SCOPE(scope_50, 2);
DECL_SCOPE(scope_49, 2);
DECL_SCOPE(scope_48, 3);
DECL_SCOPE(scope_47, 2);
DECL_SCOPE(scope_46, 1);
DECL_SCOPE(scope_45, 1);
DECL_SCOPE(scope_44, 2);
DECL_SCOPE(scope_43, 2);
DECL_SCOPE(scope_42, 3);
DECL_SCOPE(scope_41, 2);
DECL_SCOPE(scope_40, 1);
DECL_SCOPE(scope_39, 2);
DECL_SCOPE(scope_38, 1);
DECL_SCOPE(scope_37, 4);
DECL_SCOPE(scope_36, 4);
DECL_SCOPE(scope_35, 4);
DECL_SCOPE(scope_34, 4);
DECL_SCOPE(scope_33, 4);
DECL_SCOPE(scope_32, 4);
DECL_SCOPE(scope_31, 4);
DECL_SCOPE(scope_30, 13);
DECL_SCOPE(scope_29, 2);
DECL_SCOPE(scope_28, 2);
DECL_SCOPE(scope_27, 2);
DECL_SCOPE(scope_26, 2);
DECL_SCOPE(scope_25, 1);
DECL_SCOPE(scope_24, 2);
DECL_SCOPE(scope_23, 2);
DECL_SCOPE(scope_22, 45);
DECL_SCOPE(scope_21, 2);
DECL_SCOPE(scope_20, 2);
DECL_SCOPE(scope_19, 1);
DECL_SCOPE(scope_18, 3);
DECL_SCOPE(scope_17, 1);
DECL_SCOPE(scope_16, 2);
DECL_SCOPE(scope_15, 2);
DECL_SCOPE(scope_14, 2);
DECL_SCOPE(scope_13, 3);
DECL_SCOPE(scope_12, 8);
DECL_SCOPE(scope_11, 8);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 2);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 1);
DECL_SCOPE(scope_2, 5);
DECL_SCOPE(scope_1, 33);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_Calculate_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Calculate_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Defaillance_Station_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Defaillance_Station_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Normal_Station_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Pollution_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Pollution_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Timer_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Timer_SM1; }
static int isActive_kcg_bool_kcg_false(void* pHandle) { return *(kcg_bool*)pHandle == kcg_false; }
static int isActive_kcg_bool_kcg_true(void* pHandle) { return *(kcg_bool*)pHandle == kcg_true; }

/* mapping definition */

const MappingIterator iter_array_3 = { "array", 3, 3, NULL };
const MappingIterator iter_array_2 = { "array", 2, 2, NULL };

const MappingEntry scope_251_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS17_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx.Context_LATCHALL03_MTC_1_Controller_PATHS17_MTC_OBS_1, NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_251 = {
    "Controller/ ControllerSM1:Timer:/MTCEx::MTC_Observers::Controller_PATHS17_MTC_OBS 1",
    scope_251_entries, 2
};

const MappingEntry scope_250_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_5, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx.Context_LATCHALL02_MTC_1_STATE_MTC_OBS_5, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_250 = {
    "Controller/ ControllerSM1:Timer:/MTCEx::MTC_Observers::STATE_MTC_OBS 5",
    scope_250_entries, 2
};

const MappingEntry scope_249_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_7, &_Type_Result_MTC_Utils, &scope_1_entries[32], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx.Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_7, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_249 = {
    "Controller/ ControllerSM1:Timer:<1/MTCEx::MTC_Observers::TRANSITION_MTC_OBS 7",
    scope_249_entries, 2
};

const MappingEntry scope_248_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._15_Context_LATCHALL02_MTC_1_Controller_PATHS8_MTC_OBS_1_Controller_SM1_Timer_1_MTC_INST_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_248 = {
    "Controller/ ControllerSM1:Timer:<1/MTCEx::MTC_Instrumenters::Controller_SM1_Timer_1_MTC_INST 1/MTCEx::MTC_Observers::Controller_PATHS8_MTC_OBS 1",
    scope_248_entries, 2
};

const MappingEntry scope_247_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Timer_SM1, &_Type_kcg_bool_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS8_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_248, 1, 1 }
};
const MappingScope scope_247 = {
    "Controller/ ControllerSM1:Timer:<1/MTCEx::MTC_Instrumenters::Controller_SM1_Timer_1_MTC_INST 1",
    scope_247_entries, 2
};

const MappingEntry scope_246_entries[3] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_SM1_Timer_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_247, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 7", NULL, 0, 0, NULL, NULL, NULL, &scope_249, 1, 2 }
};
const MappingScope scope_246 = {
    "Controller/ ControllerSM1:Timer:<1",
    scope_246_entries, 3
};

const MappingEntry scope_245_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_246, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 5", NULL, 0, 0, NULL, NULL, NULL, &scope_250, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS17_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_251, 1, 2 }
};
const MappingScope scope_245 = {
    "Controller/ ControllerSM1:Timer:",
    scope_245_entries, 3
};

const MappingEntry scope_244_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS16_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx._19_Context_LATCHALL03_MTC_1_Controller_PATHS16_MTC_OBS_1, NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_244 = {
    "Controller/ ControllerSM1:Pollution:/MTCEx::MTC_Observers::Controller_PATHS16_MTC_OBS 1",
    scope_244_entries, 2
};

const MappingEntry scope_243_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS15_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx.Context_LATCHALL01_MTC_1_Controller_PATHS15_MTC_OBS_1, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_243 = {
    "Controller/ ControllerSM1:Pollution:/MTCEx::MTC_Observers::Controller_PATHS15_MTC_OBS 1",
    scope_243_entries, 2
};

const MappingEntry scope_242_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_4, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._20_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_4, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_242 = {
    "Controller/ ControllerSM1:Pollution:/MTCEx::MTC_Observers::STATE_MTC_OBS 4",
    scope_242_entries, 2
};

const MappingEntry scope_241_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_6, &_Type_Result_MTC_Utils, &scope_1_entries[31], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._17_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_6, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_241 = {
    "Controller/ ControllerSM1:Pollution:<2/MTCEx::MTC_Observers::TRANSITION_MTC_OBS 6",
    scope_241_entries, 2
};

const MappingEntry scope_240_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx.Context_LATCHALL04_MTC_1_Controller_PATHS6_MTC_OBS_1_Controller_SM1_Pollution_2_MTC_INST_2, NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_240 = {
    "Controller/ ControllerSM1:Pollution:<2/MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_2_MTC_INST 2/MTCEx::MTC_Observers::Controller_PATHS6_MTC_OBS 1",
    scope_240_entries, 2
};

const MappingEntry scope_239_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS6_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_240, 1, 0 }
};
const MappingScope scope_239 = {
    "Controller/ ControllerSM1:Pollution:<2/MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_2_MTC_INST 2",
    scope_239_entries, 1
};

const MappingEntry scope_238_entries[3] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_2_MTC_INST 2", NULL, 0, 0, NULL, NULL, NULL, &scope_239, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 6", NULL, 0, 0, NULL, NULL, NULL, &scope_241, 1, 2 }
};
const MappingScope scope_238 = {
    "Controller/ ControllerSM1:Pollution:<2",
    scope_238_entries, 3
};

const MappingEntry scope_237_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_5, &_Type_Result_MTC_Utils, &scope_1_entries[30], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._18_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_5, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_237 = {
    "Controller/ ControllerSM1:Pollution:<1/MTCEx::MTC_Observers::TRANSITION_MTC_OBS 5",
    scope_237_entries, 2
};

const MappingEntry scope_236_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._16_Context_LATCHALL02_MTC_1_Controller_PATHS7_MTC_OBS_1_Controller_SM1_Pollution_1_MTC_INST_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_236 = {
    "Controller/ ControllerSM1:Pollution:<1/MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_1_MTC_INST 1/MTCEx::MTC_Observers::Controller_PATHS7_MTC_OBS 1",
    scope_236_entries, 2
};

const MappingEntry scope_235_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Pollution_SM1, &_Type_kcg_bool_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS7_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_236, 1, 1 }
};
const MappingScope scope_235 = {
    "Controller/ ControllerSM1:Pollution:<1/MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_1_MTC_INST 1",
    scope_235_entries, 2
};

const MappingEntry scope_234_entries[3] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_SM1_Pollution_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_235, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 5", NULL, 0, 0, NULL, NULL, NULL, &scope_237, 1, 2 }
};
const MappingScope scope_234 = {
    "Controller/ ControllerSM1:Pollution:<1",
    scope_234_entries, 3
};

const MappingEntry scope_233_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_234, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_238, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 4", NULL, 0, 0, NULL, NULL, NULL, &scope_242, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS15_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_243, 1, 3 },
    /* 4 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS16_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_244, 1, 4 }
};
const MappingScope scope_233 = {
    "Controller/ ControllerSM1:Pollution:",
    scope_233_entries, 5
};

const MappingEntry scope_232_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS14_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._25_Context_LATCHALL01_MTC_1_Controller_PATHS14_MTC_OBS_1, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_232 = {
    "Controller/ ControllerSM1:Calculate:/MTCEx::MTC_Observers::Controller_PATHS14_MTC_OBS 1",
    scope_232_entries, 2
};

const MappingEntry scope_231_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_math_Abs_MTC_OBS_3, &_Type_Result_MTC_Utils, &scope_1_entries[29], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_231 = {
    "Controller/ ControllerSM1:Calculate:/MTCEx::MTC_Observers::math_Abs_MTC_OBS 3",
    scope_231_entries, 2
};

const MappingEntry scope_230_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_math_Abs_MTC_OBS_2, &_Type_Result_MTC_Utils, &scope_1_entries[28], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_230 = {
    "Controller/ ControllerSM1:Calculate:/MTCEx::MTC_Observers::math_Abs_MTC_OBS 2",
    scope_230_entries, 2
};

const MappingEntry scope_229_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_math_Abs_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_1_entries[27], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx.Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_229 = {
    "Controller/ ControllerSM1:Calculate:/MTCEx::MTC_Observers::math_Abs_MTC_OBS 1",
    scope_229_entries, 2
};

const MappingEntry scope_228_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Mean_10_Table_1_MTC_OBS_1_float64310, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC__3_GenericInputChanged_MTC_Utils_float64310), (size_t)&outputs_ctx.Context_GenericInputChanged_1_Mean_10_Table_1_MTC_OBS_1, NULL, NULL, NULL, &scope_220, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx.Context_LATCHALL02_MTC_1_Mean_10_Table_1_MTC_OBS_1, NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_228 = {
    "Controller/ ControllerSM1:Calculate:/MTCEx::MTC_Observers::Mean_10_Table_1_MTC_OBS 1",
    scope_228_entries, 3
};

const MappingEntry scope_227_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS13_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), (size_t)&outputs_ctx.Context_LATCHALL06_MTC_1_Controller_PATHS13_MTC_OBS_1, NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_227 = {
    "Controller/ ControllerSM1:Calculate:/MTCEx::MTC_Observers::Controller_PATHS13_MTC_OBS 1",
    scope_227_entries, 2
};

const MappingEntry scope_226_entries[5] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Vote_Alog_111_MTC_OBS_3_float643_float643_float643, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx._12_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_3, NULL, NULL, NULL, &scope_183, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 2", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx._11_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_3, NULL, NULL, NULL, &scope_183, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 3", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx._10_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_3, NULL, NULL, NULL, &scope_183, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._9_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_3, NULL, NULL, NULL, &scope_25, 1, 4 }
};
const MappingScope scope_226 = {
    "Controller/ ControllerSM1:Calculate:/MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS 3",
    scope_226_entries, 5
};

const MappingEntry scope_225_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_3, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._26_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_3, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_225 = {
    "Controller/ ControllerSM1:Calculate:/MTCEx::MTC_Observers::STATE_MTC_OBS 3",
    scope_225_entries, 2
};

const MappingEntry scope_224_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._28_Context_LATCHALL02_MTC_1_Controller_PATHS12_MTC_OBS_1_Controller_SM1_Calculate_IfBlock1_MTC_INST_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_224 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:/MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_IfBlock1_MTC_INST 1/MTCEx::MTC_Observers::Controller_PATHS12_MTC_OBS 1",
    scope_224_entries, 2
};

const MappingEntry scope_223_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS12_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_224, 1, 1 }
};
const MappingScope scope_223 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:/MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_IfBlock1_MTC_INST 1",
    scope_223_entries, 2
};

const MappingEntry scope_222_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_CONTROL_MTC_OBS_2, &_Type_Result_MTC_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_222 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 2",
    scope_222_entries, 2
};

const MappingEntry scope_221_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_222, 1, 0 }
};
const MappingScope scope_221 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:then:",
    scope_221_entries, 1
};

const MappingEntry scope_220_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output", NULL, sizeof(kcg_bool), offsetof(outC__3_GenericInputChanged_MTC_Utils_float64310, Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_220 = {
    "MTC_Utils::GenericInputChanged/ _3_GenericInputChanged_MTC_Utils_float64310",
    scope_220_entries, 1
};

const MappingEntry scope_219_entries[4] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Push_Table_11_MTC_OBS_1_float643_float64310, &_Type_Result_MTC_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC__3_GenericInputChanged_MTC_Utils_float64310), (size_t)&outputs_ctx.Context_GenericInputChanged_1_Push_Table_11_MTC_OBS_1, NULL, NULL, NULL, &scope_220, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 2", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx.Context_GenericInputChanged_2_Push_Table_11_MTC_OBS_1, NULL, NULL, NULL, &scope_183, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx.Context_LATCHALL03_MTC_1_Push_Table_11_MTC_OBS_1, NULL, NULL, NULL, &scope_140, 1, 3 }
};
const MappingScope scope_219 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:else:/MTCEx::MTC_Observers::Push_Table_11_MTC_OBS 1",
    scope_219_entries, 4
};

const MappingEntry scope_218_entries[5] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._3_MTC_ALL1_Vote_Alog_111_MTC_OBS_7_float643_float643_float643, &_Type_Result_MTC_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx._8_Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_7, NULL, NULL, NULL, &scope_183, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 2", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx._7_Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_7, NULL, NULL, NULL, &scope_183, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 3", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx._6_Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_7, NULL, NULL, NULL, &scope_183, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._5_Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_7, NULL, NULL, NULL, &scope_25, 1, 4 }
};
const MappingScope scope_218 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:else:/MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS 7",
    scope_218_entries, 5
};

const MappingEntry scope_217_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_CONTROL_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx.Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_217 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:else:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_217_entries, 2
};

const MappingEntry scope_216_entries[4] = {
    /* 0 */ { MAP_INSTANCE, "Vote_Alog 7", NULL, sizeof(outC_Vote_Alog), (size_t)&outputs_ctx.Context_Vote_Alog_7, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_false, &scope_22, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_217, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS 7", NULL, 0, 0, NULL, NULL, NULL, &scope_218, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Push_Table_11_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_219, 1, 3 }
};
const MappingScope scope_216 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:else:",
    scope_216_entries, 4
};

const MappingEntry scope_215_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.IfBlock1_clock_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_false, &scope_216, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_true, &scope_221, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_IfBlock1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_223, 1, 3 }
};
const MappingScope scope_215 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:",
    scope_215_entries, 4
};

const MappingEntry scope_214_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._2_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx.Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3, NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_214 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 3/MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1",
    scope_214_entries, 2
};

const MappingEntry scope_213_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_214, 1, 0 }
};
const MappingScope scope_213 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 3",
    scope_213_entries, 1
};

const MappingEntry scope_212_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._29_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2, NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_212 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 2/MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1",
    scope_212_entries, 2
};

const MappingEntry scope_211_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_212, 1, 0 }
};
const MappingScope scope_211 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 2",
    scope_211_entries, 1
};

const MappingEntry scope_210_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._30_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1, NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_210 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 1/MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1",
    scope_210_entries, 2
};

const MappingEntry scope_209_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_210, 1, 0 }
};
const MappingScope scope_209 = {
    "Controller/ ControllerSM1:Calculate:/math::Abs 1",
    scope_209_entries, 1
};

const MappingEntry scope_208_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS11_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS11_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_208 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS11_MTC_OBS 1",
    scope_208_entries, 2
};

const MappingEntry scope_207_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS10_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _1_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS10_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_207 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS10_MTC_OBS 1",
    scope_207_entries, 2
};

const MappingEntry scope_206_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS9_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _2_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS9_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_206 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS9_MTC_OBS 1",
    scope_206_entries, 2
};

const MappingEntry scope_205_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS8_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _3_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS8_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_205 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS8_MTC_OBS 1",
    scope_205_entries, 2
};

const MappingEntry scope_204_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS7_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _4_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS7_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_204 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS7_MTC_OBS 1",
    scope_204_entries, 2
};

const MappingEntry scope_203_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS6_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _5_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS6_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_203 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS6_MTC_OBS 1",
    scope_203_entries, 2
};

const MappingEntry scope_202_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS5_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _6_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS5_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_202 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS5_MTC_OBS 1",
    scope_202_entries, 2
};

const MappingEntry scope_201_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS4_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _7_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS4_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_201 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS4_MTC_OBS 1",
    scope_201_entries, 2
};

const MappingEntry scope_200_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS3_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _8_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS3_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_200 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS3_MTC_OBS 1",
    scope_200_entries, 2
};

const MappingEntry scope_199_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS2_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _9_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS2_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_199 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS2_MTC_OBS 1",
    scope_199_entries, 2
};

const MappingEntry scope_198_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Mean_10_Table, MTC_ALL1_Mean_10_Table_PATHS1_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Mean_10_Table, _10_Context_LATCHALL01_MTC_1_Mean_10_Table_PATHS1_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_198 = {
    "Mean_10_Table/ Mean_10_Table/MTCEx::MTC_Observers::Mean_10_Table_PATHS1_MTC_OBS 1",
    scope_198_entries, 2
};

const MappingEntry scope_197_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "Temperature", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, Temperature), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "pH", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, pH), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Redox", NULL, sizeof(kcg_float64), offsetof(outC_Mean_10_Table, Redox), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_198, 1, 3 },
    /* 4 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS2_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_199, 1, 4 },
    /* 5 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS3_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_200, 1, 5 },
    /* 6 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS4_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_201, 1, 6 },
    /* 7 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS5_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_202, 1, 7 },
    /* 8 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS6_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_203, 1, 8 },
    /* 9 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS7_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_204, 1, 9 },
    /* 10 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS8_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_205, 1, 10 },
    /* 11 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS9_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_206, 1, 11 },
    /* 12 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS10_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_207, 1, 12 },
    /* 13 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_PATHS11_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_208, 1, 13 }
};
const MappingScope scope_197 = {
    "Mean_10_Table/ Mean_10_Table",
    scope_197_entries, 14
};

const MappingEntry scope_196_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_4, &_Type_Result_MTC_Utils, &scope_1_entries[26], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._23_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_4, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_196 = {
    "Controller/ ControllerSM1:Calculate:<2/MTCEx::MTC_Observers::TRANSITION_MTC_OBS 4",
    scope_196_entries, 2
};

const MappingEntry scope_195_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._21_Context_LATCHALL02_MTC_1_Controller_PATHS4_MTC_OBS_1_Controller_SM1_Calculate_2_MTC_INST_2, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_195 = {
    "Controller/ ControllerSM1:Calculate:<2/MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_2_MTC_INST 2/MTCEx::MTC_Observers::Controller_PATHS4_MTC_OBS 1",
    scope_195_entries, 2
};

const MappingEntry scope_194_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS4_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_195, 1, 0 }
};
const MappingScope scope_194 = {
    "Controller/ ControllerSM1:Calculate:<2/MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_2_MTC_INST 2",
    scope_194_entries, 1
};

const MappingEntry scope_193_entries[3] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_2_MTC_INST 2", NULL, 0, 0, NULL, NULL, NULL, &scope_194, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 4", NULL, 0, 0, NULL, NULL, NULL, &scope_196, 1, 2 }
};
const MappingScope scope_193 = {
    "Controller/ ControllerSM1:Calculate:<2",
    scope_193_entries, 3
};

const MappingEntry scope_192_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_3, &_Type_Result_MTC_Utils, &scope_1_entries[25], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._24_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_3, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_192 = {
    "Controller/ ControllerSM1:Calculate:<1/MTCEx::MTC_Observers::TRANSITION_MTC_OBS 3",
    scope_192_entries, 2
};

const MappingEntry scope_191_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._22_Context_LATCHALL02_MTC_1_Controller_PATHS5_MTC_OBS_1_Controller_SM1_Calculate_1_MTC_INST_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_191 = {
    "Controller/ ControllerSM1:Calculate:<1/MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_1_MTC_INST 1/MTCEx::MTC_Observers::Controller_PATHS5_MTC_OBS 1",
    scope_191_entries, 2
};

const MappingEntry scope_190_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS5_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_191, 1, 1 }
};
const MappingScope scope_190 = {
    "Controller/ ControllerSM1:Calculate:<1/MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_1_MTC_INST 1",
    scope_190_entries, 2
};

const MappingEntry scope_189_entries[3] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_SM1_Calculate_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_190, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_192, 1, 2 }
};
const MappingScope scope_189 = {
    "Controller/ ControllerSM1:Calculate:<1",
    scope_189_entries, 3
};

const MappingEntry scope_188_entries[16] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_189, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_193, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "Vote_Alog 3", NULL, sizeof(outC_Vote_Alog), (size_t)&outputs_ctx.Context_Vote_Alog_3, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_22, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Mean_10_Table 1", NULL, sizeof(outC_Mean_10_Table), (size_t)&outputs_ctx.Context_Mean_10_Table_1, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_197, 1, 3 },
    /* 4 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_209, 1, 4 },
    /* 5 */ { MAP_EXPANDED, "math::Abs 2", NULL, 0, 0, NULL, NULL, NULL, &scope_211, 1, 5 },
    /* 6 */ { MAP_EXPANDED, "math::Abs 3", NULL, 0, 0, NULL, NULL, NULL, &scope_213, 1, 6 },
    /* 7 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_215, 1, 7 },
    /* 8 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_225, 1, 8 },
    /* 9 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_226, 1, 9 },
    /* 10 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS13_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_227, 1, 10 },
    /* 11 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Mean_10_Table_1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_228, 1, 11 },
    /* 12 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_229, 1, 12 },
    /* 13 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_230, 1, 13 },
    /* 14 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_231, 1, 14 },
    /* 15 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS14_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_232, 1, 15 }
};
const MappingScope scope_188 = {
    "Controller/ ControllerSM1:Calculate:",
    scope_188_entries, 16
};

const MappingEntry scope_187_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_2, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Defaillance_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._31_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_2, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_187 = {
    "Controller/ ControllerSM1:Defaillance_Station:/MTCEx::MTC_Observers::STATE_MTC_OBS 2",
    scope_187_entries, 2
};

const MappingEntry scope_186_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_187, 1, 0 }
};
const MappingScope scope_186 = {
    "Controller/ ControllerSM1:Defaillance_Station:",
    scope_186_entries, 1
};

const MappingEntry scope_185_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS11_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL07 1", NULL, sizeof(outC_LATCHALL07_MTC), (size_t)&outputs_ctx.Context_LATCHALL07_MTC_1_Controller_PATHS11_MTC_OBS_1, NULL, NULL, NULL, &scope_148, 1, 1 }
};
const MappingScope scope_185 = {
    "Controller/ ControllerSM1:Normal_Station:/MTCEx::MTC_Observers::Controller_PATHS11_MTC_OBS 1",
    scope_185_entries, 2
};

const MappingEntry scope_184_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS10_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._36_Context_LATCHALL02_MTC_1_Controller_PATHS10_MTC_OBS_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_184 = {
    "Controller/ ControllerSM1:Normal_Station:/MTCEx::MTC_Observers::Controller_PATHS10_MTC_OBS 1",
    scope_184_entries, 2
};

const MappingEntry scope_183_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output", NULL, sizeof(kcg_bool), offsetof(outC__2_GenericInputChanged_MTC_Utils_float643, Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_183 = {
    "MTC_Utils::GenericInputChanged/ _2_GenericInputChanged_MTC_Utils_float643",
    scope_183_entries, 1
};

const MappingEntry scope_182_entries[5] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._4_MTC_ALL1_Vote_Alog_111_MTC_OBS_1_float643_float643_float643, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx.Context_GenericInputChanged_1_Vote_Alog_111_MTC_OBS_1, NULL, NULL, NULL, &scope_183, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 2", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx.Context_GenericInputChanged_2_Vote_Alog_111_MTC_OBS_1, NULL, NULL, NULL, &scope_183, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 3", NULL, sizeof(outC__2_GenericInputChanged_MTC_Utils_float643), (size_t)&outputs_ctx.Context_GenericInputChanged_3_Vote_Alog_111_MTC_OBS_1, NULL, NULL, NULL, &scope_183, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx.Context_LATCHALL04_MTC_1_Vote_Alog_111_MTC_OBS_1, NULL, NULL, NULL, &scope_25, 1, 4 }
};
const MappingScope scope_182 = {
    "Controller/ ControllerSM1:Normal_Station:/MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS 1",
    scope_182_entries, 5
};

const MappingEntry scope_181_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS9_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx._37_Context_LATCHALL03_MTC_1_Controller_PATHS9_MTC_OBS_1, NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_181 = {
    "Controller/ ControllerSM1:Normal_Station:/MTCEx::MTC_Observers::Controller_PATHS9_MTC_OBS 1",
    scope_181_entries, 2
};

const MappingEntry scope_180_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._38_Context_LATCHALL02_MTC_1_STATE_MTC_OBS_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_180 = {
    "Controller/ ControllerSM1:Normal_Station:/MTCEx::MTC_Observers::STATE_MTC_OBS 1",
    scope_180_entries, 2
};

const MappingEntry scope_179_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Check_interval_Redox_1_MTC_OBS_3_float64), &_Type_Result_MTC_Utils, &scope_22_entries[44], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _33_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_3), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, _32_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_3), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_179 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS 3",
    scope_179_entries, 3
};

const MappingEntry scope_178_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, _1_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_2_float64), &_Type_Result_MTC_Utils, &scope_22_entries[42], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _31_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_2), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, _30_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_2), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_178 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS 2",
    scope_178_entries, 3
};

const MappingEntry scope_177_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, _2_MTC_ALL1_Check_interval_Redox_1_MTC_OBS_1_float64), &_Type_Result_MTC_Utils, &scope_22_entries[40], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _29_Context_GenericInputChanged_1_Check_interval_Redox_1_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, _28_Context_LATCHALL02_MTC_1_Check_interval_Redox_1_MTC_OBS_1), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_177 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS 1",
    scope_177_entries, 3
};

const MappingEntry scope_176_entries[5] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Calculated_value_1110_MTC_OBS_3_float64_float64_float64_float64), &_Type_Result_MTC_Utils, &scope_22_entries[38], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _27_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_3), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 2", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _26_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_3), NULL, NULL, NULL, &scope_154, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 3", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _25_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_3), NULL, NULL, NULL, &scope_154, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Vote_Alog, _24_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_3), NULL, NULL, NULL, &scope_25, 1, 4 }
};
const MappingScope scope_176 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS 3",
    scope_176_entries, 5
};

const MappingEntry scope_175_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Vote_Alog_PATHS6_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL12 1", NULL, sizeof(outC_LATCHALL12_MTC), offsetof(outC_Vote_Alog, Context_LATCHALL12_MTC_1_Vote_Alog_PATHS6_MTC_OBS_1), NULL, NULL, NULL, &scope_163, 1, 1 }
};
const MappingScope scope_175 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Vote_Alog_PATHS6_MTC_OBS 1",
    scope_175_entries, 2
};

const MappingEntry scope_174_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Vote_Alog_PATHS5_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Vote_Alog, Context_LATCHALL01_MTC_1_Vote_Alog_PATHS5_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_174 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Vote_Alog_PATHS5_MTC_OBS 1",
    scope_174_entries, 2
};

const MappingEntry scope_173_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_3_float64), &_Type_Result_MTC_Utils, &scope_22_entries[34], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _23_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_3), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, _22_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_3), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_173 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS 3",
    scope_173_entries, 3
};

const MappingEntry scope_172_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, _3_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_2_float64), &_Type_Result_MTC_Utils, &scope_22_entries[32], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _21_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_2), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, _20_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_2), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_172 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS 2",
    scope_172_entries, 3
};

const MappingEntry scope_171_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, _4_MTC_ALL1_Check_interval_Temperature_1_MTC_OBS_1_float64), &_Type_Result_MTC_Utils, &scope_22_entries[30], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _19_Context_GenericInputChanged_1_Check_interval_Temperature_1_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, _18_Context_LATCHALL02_MTC_1_Check_interval_Temperature_1_MTC_OBS_1), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_171 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS 1",
    scope_171_entries, 3
};

const MappingEntry scope_170_entries[5] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, _5_MTC_ALL1_Calculated_value_1110_MTC_OBS_2_float64_float64_float64_float64), &_Type_Result_MTC_Utils, &scope_22_entries[28], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _17_Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_2), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 2", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _16_Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_2), NULL, NULL, NULL, &scope_154, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 3", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _15_Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_2), NULL, NULL, NULL, &scope_154, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Vote_Alog, _14_Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_2), NULL, NULL, NULL, &scope_25, 1, 4 }
};
const MappingScope scope_170 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS 2",
    scope_170_entries, 5
};

const MappingEntry scope_169_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Vote_Alog_PATHS4_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL12 1", NULL, sizeof(outC_LATCHALL12_MTC), offsetof(outC_Vote_Alog, _34_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS4_MTC_OBS_1), NULL, NULL, NULL, &scope_163, 1, 1 }
};
const MappingScope scope_169 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Vote_Alog_PATHS4_MTC_OBS 1",
    scope_169_entries, 2
};

const MappingEntry scope_168_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Vote_Alog_PATHS3_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Vote_Alog, _35_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS3_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_168 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Vote_Alog_PATHS3_MTC_OBS 1",
    scope_168_entries, 2
};

const MappingEntry scope_167_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Check_interval_pH_1_MTC_OBS_3_float64), &_Type_Result_MTC_Utils, &scope_22_entries[24], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _13_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_3), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, _12_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_3), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_167 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS 3",
    scope_167_entries, 3
};

const MappingEntry scope_166_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, _6_MTC_ALL1_Check_interval_pH_1_MTC_OBS_2_float64), &_Type_Result_MTC_Utils, &scope_22_entries[22], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _11_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_2), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, _10_Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_2), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_166 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS 2",
    scope_166_entries, 3
};

const MappingEntry scope_165_entries[3] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, _7_MTC_ALL1_Check_interval_pH_1_MTC_OBS_1_float64), &_Type_Result_MTC_Utils, &scope_22_entries[20], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, _9_Context_GenericInputChanged_1_Check_interval_pH_1_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Vote_Alog, Context_LATCHALL02_MTC_1_Check_interval_pH_1_MTC_OBS_1), NULL, NULL, NULL, &scope_7, 1, 2 }
};
const MappingScope scope_165 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS 1",
    scope_165_entries, 3
};

const MappingEntry scope_164_entries[5] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, _8_MTC_ALL1_Calculated_value_1110_MTC_OBS_1_float64_float64_float64_float64), &_Type_Result_MTC_Utils, &scope_22_entries[18], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, Context_GenericInputChanged_1_Calculated_value_1110_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 2", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, Context_GenericInputChanged_2_Calculated_value_1110_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 3", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Vote_Alog, Context_GenericInputChanged_3_Calculated_value_1110_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Vote_Alog, Context_LATCHALL04_MTC_1_Calculated_value_1110_MTC_OBS_1), NULL, NULL, NULL, &scope_25, 1, 4 }
};
const MappingScope scope_164 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS 1",
    scope_164_entries, 5
};

const MappingEntry scope_163_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL12_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_163 = {
    "MTC::LATCHALL12/ LATCHALL12_MTC",
    scope_163_entries, 1
};

const MappingEntry scope_162_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Vote_Alog_PATHS2_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL12 1", NULL, sizeof(outC_LATCHALL12_MTC), offsetof(outC_Vote_Alog, _38_Context_LATCHALL12_MTC_1_Vote_Alog_PATHS2_MTC_OBS_1), NULL, NULL, NULL, &scope_163, 1, 1 }
};
const MappingScope scope_162 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Vote_Alog_PATHS2_MTC_OBS 1",
    scope_162_entries, 2
};

const MappingEntry scope_161_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Vote_Alog, MTC_ALL1_Vote_Alog_PATHS1_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Vote_Alog, _39_Context_LATCHALL01_MTC_1_Vote_Alog_PATHS1_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_161 = {
    "Vote_Alog/ Vote_Alog/MTCEx::MTC_Observers::Vote_Alog_PATHS1_MTC_OBS 1",
    scope_161_entries, 2
};

const MappingEntry scope_160_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _14_MTC_ALL1_Calculated_value_PATHS10_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), offsetof(outC_Calculated_value, Context_LATCHALL03_MTC_1_Calculated_value_PATHS10_MTC_OBS_1), NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_160 = {
    "Calculated_value/ Calculated_value/MTCEx::MTC_Observers::Calculated_value_PATHS10_MTC_OBS 1",
    scope_160_entries, 2
};

const MappingEntry scope_159_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _13_MTC_ALL1_Calculated_value_PATHS9_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), offsetof(outC_Calculated_value, _17_Context_LATCHALL03_MTC_1_Calculated_value_PATHS9_MTC_OBS_1), NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_159 = {
    "Calculated_value/ Calculated_value/MTCEx::MTC_Observers::Calculated_value_PATHS9_MTC_OBS 1",
    scope_159_entries, 2
};

const MappingEntry scope_158_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _12_MTC_ALL1_Calculated_value_PATHS8_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), offsetof(outC_Calculated_value, _18_Context_LATCHALL03_MTC_1_Calculated_value_PATHS8_MTC_OBS_1), NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_158 = {
    "Calculated_value/ Calculated_value/MTCEx::MTC_Observers::Calculated_value_PATHS8_MTC_OBS 1",
    scope_158_entries, 2
};

const MappingEntry scope_157_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Calculated_value, _37_Context_LATCHALL06_MTC_1_Calculated_value_PATHS1_MTC_OBS_1_Calculated_value_IfBlock1_MTC_INST_2), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_157 = {
    "Calculated_value/ Calculated_valueIfBlock1:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_MTC_INST 2/MTCEx::MTC_Observers::Calculated_value_PATHS1_MTC_OBS 1",
    scope_157_entries, 2
};

const MappingEntry scope_156_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_157, 1, 1 }
};
const MappingScope scope_156 = {
    "Calculated_value/ Calculated_valueIfBlock1:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_MTC_INST 2",
    scope_156_entries, 2
};

const MappingEntry scope_155_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL05_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_155 = {
    "MTC::LATCHALL05/ LATCHALL05_MTC",
    scope_155_entries, 1
};

const MappingEntry scope_154_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output", NULL, sizeof(kcg_bool), offsetof(outC_GenericInputChanged_MTC_Utils_float64, Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_154 = {
    "MTC_Utils::GenericInputChanged/ GenericInputChanged_MTC_Utils_float64",
    scope_154_entries, 1
};

const MappingEntry scope_153_entries[6] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_Check_Delta_3_1111_MTC_OBS_1_float64_float64_float64_float64), &_Type_Result_MTC_Utils, &scope_30_entries[9], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 1", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Calculated_value, Context_GenericInputChanged_1_Check_Delta_3_1111_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 2", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Calculated_value, Context_GenericInputChanged_2_Check_Delta_3_1111_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 3", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Calculated_value, Context_GenericInputChanged_3_Check_Delta_3_1111_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "MTC_Utils::GenericInputChanged 4", NULL, sizeof(outC_GenericInputChanged_MTC_Utils_float64), offsetof(outC_Calculated_value, Context_GenericInputChanged_4_Check_Delta_3_1111_MTC_OBS_1), NULL, NULL, NULL, &scope_154, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "MTC::LATCHALL05 1", NULL, sizeof(outC_LATCHALL05_MTC), offsetof(outC_Calculated_value, Context_LATCHALL05_MTC_1_Check_Delta_3_1111_MTC_OBS_1), NULL, NULL, NULL, &scope_155, 1, 5 }
};
const MappingScope scope_153 = {
    "Calculated_value/ Calculated_valueIfBlock1:then:/MTCEx::MTC_Observers::Check_Delta_3_1111_MTC_OBS 1",
    scope_153_entries, 6
};

const MappingEntry scope_152_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_8), &_Type_Result_MTC_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _36_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_152 = {
    "Calculated_value/ Calculated_valueIfBlock1:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 8",
    scope_152_entries, 2
};

const MappingEntry scope_151_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS14_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS14_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_151 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::Check_Delta_3_PATHS14_MTC_OBS 1",
    scope_151_entries, 2
};

const MappingEntry scope_150_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS13_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _15_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS13_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_150 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::Check_Delta_3_PATHS13_MTC_OBS 1",
    scope_150_entries, 2
};

const MappingEntry scope_149_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS12_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _16_Context_LATCHALL01_MTC_1_Check_Delta_3_PATHS12_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_149 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::Check_Delta_3_PATHS12_MTC_OBS 1",
    scope_149_entries, 2
};

const MappingEntry scope_148_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL07_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_148 = {
    "MTC::LATCHALL07/ LATCHALL07_MTC",
    scope_148_entries, 1
};

const MappingEntry scope_147_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS11_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL07 1", NULL, sizeof(outC_LATCHALL07_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL07_MTC_1_Check_Delta_3_PATHS11_MTC_OBS_1), NULL, NULL, NULL, &scope_148, 1, 1 }
};
const MappingScope scope_147 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::Check_Delta_3_PATHS11_MTC_OBS 1",
    scope_147_entries, 2
};

const MappingEntry scope_146_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Abs_MTC_OBS_3), &_Type_Result_MTC_Utils, &scope_78_entries[28], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _14_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_3), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_146 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::math_Abs_MTC_OBS 3",
    scope_146_entries, 2
};

const MappingEntry scope_145_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS10_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS10_MTC_OBS_1), NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_145 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::Check_Delta_3_PATHS10_MTC_OBS 1",
    scope_145_entries, 2
};

const MappingEntry scope_144_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Abs_MTC_OBS_2), &_Type_Result_MTC_Utils, &scope_78_entries[25], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _13_Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_2), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_144 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::math_Abs_MTC_OBS 2",
    scope_144_entries, 2
};

const MappingEntry scope_143_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS9_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), offsetof(outC_Check_Delta_3, _17_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS9_MTC_OBS_1), NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_143 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::Check_Delta_3_PATHS9_MTC_OBS 1",
    scope_143_entries, 2
};

const MappingEntry scope_142_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Mean3_MTC_OBS_1), &_Type_Result_MTC_Utils, &scope_78_entries[22], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _12_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_142 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::math_Mean3_MTC_OBS 1",
    scope_142_entries, 2
};

const MappingEntry scope_141_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Abs_MTC_OBS_1), &_Type_Result_MTC_Utils, &scope_78_entries[20], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL01_MTC_1_math_Abs_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_141 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::math_Abs_MTC_OBS 1",
    scope_141_entries, 2
};

const MappingEntry scope_140_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL03_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_140 = {
    "MTC::LATCHALL03/ LATCHALL03_MTC",
    scope_140_entries, 1
};

const MappingEntry scope_139_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS8_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL03 1", NULL, sizeof(outC_LATCHALL03_MTC), offsetof(outC_Check_Delta_3, _18_Context_LATCHALL03_MTC_1_Check_Delta_3_PATHS8_MTC_OBS_1), NULL, NULL, NULL, &scope_140, 1, 1 }
};
const MappingScope scope_139 = {
    "Check_Delta_3/ Check_Delta_3/MTCEx::MTC_Observers::Check_Delta_3_PATHS8_MTC_OBS 1",
    scope_139_entries, 2
};

const MappingEntry scope_138_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_3), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_3), NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_138 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 3/MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1",
    scope_138_entries, 2
};

const MappingEntry scope_137_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_138, 1, 0 }
};
const MappingScope scope_137 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 3",
    scope_137_entries, 1
};

const MappingEntry scope_136_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, _1_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_2), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Check_Delta_3, _19_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_2), NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_136 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 2/MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1",
    scope_136_entries, 2
};

const MappingEntry scope_135_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_136, 1, 0 }
};
const MappingScope scope_135 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 2",
    scope_135_entries, 1
};

const MappingEntry scope_134_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL02_MTC_1_Check_Delta_3_PATHS1_MTC_OBS_1_Check_Delta_3_IfBlock1_MTC_INST_1), NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_134 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_MTC_INST 1/MTCEx::MTC_Observers::Check_Delta_3_PATHS1_MTC_OBS 1",
    scope_134_entries, 2
};

const MappingEntry scope_133_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_134, 1, 1 }
};
const MappingScope scope_133 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_MTC_INST 1",
    scope_133_entries, 2
};

const MappingEntry scope_132_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Mean3_MTC_OBS_4), &_Type_Result_MTC_Utils, &scope_78_entries[15], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_4), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_132 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:then:/MTCEx::MTC_Observers::math_Mean3_MTC_OBS 4",
    scope_132_entries, 2
};

const MappingEntry scope_131_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_8), &_Type_Result_MTC_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _37_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_8), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_131 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 8",
    scope_131_entries, 2
};

const MappingEntry scope_130_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every47), &_Type_kcg_bool_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every47), &_Type_kcg_bool_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "MTC_AC_I3", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every47), &_Type_kcg_bool_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_SIGNAL, "MTC_sig_3", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_130 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:then:/math::Mean3 4",
    scope_130_entries, 6
};

const MappingEntry scope_129_entries[3] = {
    /* 0 */ { MAP_EXPANDED, "math::Mean3 4", NULL, 0, 0, NULL, NULL, NULL, &scope_130, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 8", NULL, 0, 0, NULL, NULL, NULL, &scope_131, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean3_MTC_OBS 4", NULL, 0, 0, NULL, NULL, NULL, &scope_132, 1, 2 }
};
const MappingScope scope_129 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:then:",
    scope_129_entries, 3
};

const MappingEntry scope_128_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6), &_Type_Result_MTC_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Check_Delta_3, _36_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS2_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_128 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_MTC_INST 6/MTCEx::MTC_Observers::Check_Delta_3_PATHS2_MTC_OBS 1",
    scope_128_entries, 2
};

const MappingEntry scope_127_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, _6_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6), &_Type_Result_MTC_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _35_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_MTC_INST_6), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_127 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_MTC_INST 6/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_127_entries, 2
};

const MappingEntry scope_126_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_127, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS2_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_128, 1, 2 }
};
const MappingScope scope_126 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_MTC_INST 6",
    scope_126_entries, 3
};

const MappingEntry scope_125_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_7), &_Type_Result_MTC_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_125 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 7",
    scope_125_entries, 2
};

const MappingEntry scope_124_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 7", NULL, 0, 0, NULL, NULL, NULL, &scope_125, 1, 0 }
};
const MappingScope scope_124 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:then:",
    scope_124_entries, 1
};

const MappingEntry scope_123_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7), &_Type_Result_MTC_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Check_Delta_3, _33_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS3_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_123 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_MTC_INST 7/MTCEx::MTC_Observers::Check_Delta_3_PATHS3_MTC_OBS 1",
    scope_123_entries, 2
};

const MappingEntry scope_122_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, _5_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7), &_Type_Result_MTC_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _32_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_MTC_INST_7), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_122 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_MTC_INST 7/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_122_entries, 2
};

const MappingEntry scope_121_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_122, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS3_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_123, 1, 2 }
};
const MappingScope scope_121 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_MTC_INST 7",
    scope_121_entries, 3
};

const MappingEntry scope_120_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_6), &_Type_Result_MTC_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_120 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 6",
    scope_120_entries, 2
};

const MappingEntry scope_119_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 6", NULL, 0, 0, NULL, NULL, NULL, &scope_120, 1, 0 }
};
const MappingScope scope_119 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:then:",
    scope_119_entries, 1
};

const MappingEntry scope_118_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8), &_Type_Result_MTC_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Check_Delta_3, _30_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS4_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_118 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_MTC_INST 8/MTCEx::MTC_Observers::Check_Delta_3_PATHS4_MTC_OBS 1",
    scope_118_entries, 2
};

const MappingEntry scope_117_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, _4_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8), &_Type_Result_MTC_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _29_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_MTC_INST_8), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_117 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_MTC_INST 8/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_117_entries, 2
};

const MappingEntry scope_116_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_117, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS4_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_118, 1, 2 }
};
const MappingScope scope_116 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_MTC_INST 8",
    scope_116_entries, 3
};

const MappingEntry scope_115_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_5), &_Type_Result_MTC_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_115 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 5",
    scope_115_entries, 2
};

const MappingEntry scope_114_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 5", NULL, 0, 0, NULL, NULL, NULL, &scope_115, 1, 0 }
};
const MappingScope scope_114 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:then:",
    scope_114_entries, 1
};

const MappingEntry scope_113_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9), &_Type_Result_MTC_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Check_Delta_3, _27_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS5_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_113 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST 9/MTCEx::MTC_Observers::Check_Delta_3_PATHS5_MTC_OBS 1",
    scope_113_entries, 2
};

const MappingEntry scope_112_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, _3_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9), &_Type_Result_MTC_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _26_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST_9), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_112 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST 9/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_112_entries, 2
};

const MappingEntry scope_111_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_112, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS5_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_113, 1, 2 }
};
const MappingScope scope_111 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST 9",
    scope_111_entries, 3
};

const MappingEntry scope_110_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Mean_MTC_OBS_1), &_Type_Result_MTC_Utils, &scope_78_entries[14], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _8_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_110 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:then:/MTCEx::MTC_Observers::math_Mean_MTC_OBS 1",
    scope_110_entries, 2
};

const MappingEntry scope_109_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_4), &_Type_Result_MTC_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_109 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 4",
    scope_109_entries, 2
};

const MappingEntry scope_108_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every46), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every46), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every46), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every46), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_108 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:then:/math::Mean 1",
    scope_108_entries, 4
};

const MappingEntry scope_107_entries[3] = {
    /* 0 */ { MAP_EXPANDED, "math::Mean 1", NULL, 0, 0, NULL, NULL, NULL, &scope_108, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 4", NULL, 0, 0, NULL, NULL, NULL, &scope_109, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_110, 1, 2 }
};
const MappingScope scope_107 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:then:",
    scope_107_entries, 3
};

const MappingEntry scope_106_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10), &_Type_Result_MTC_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Check_Delta_3, _24_Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS6_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_106 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST 10/MTCEx::MTC_Observers::Check_Delta_3_PATHS6_MTC_OBS 1",
    scope_106_entries, 2
};

const MappingEntry scope_105_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, _2_MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10), &_Type_Result_MTC_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _23_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST_10), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_105 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST 10/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_105_entries, 2
};

const MappingEntry scope_104_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _45_else_clock_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_105, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS6_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_106, 1, 2 }
};
const MappingScope scope_104 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST 10",
    scope_104_entries, 3
};

const MappingEntry scope_103_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Mean_MTC_OBS_2), &_Type_Result_MTC_Utils, &scope_78_entries[13], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _9_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_2), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_103 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:then:/MTCEx::MTC_Observers::math_Mean_MTC_OBS 2",
    scope_103_entries, 2
};

const MappingEntry scope_102_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_3), &_Type_Result_MTC_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_102 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 3",
    scope_102_entries, 2
};

const MappingEntry scope_101_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every42), &_Type_kcg_bool_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every42), &_Type_kcg_bool_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_101 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:then:/math::Mean 2",
    scope_101_entries, 4
};

const MappingEntry scope_100_entries[3] = {
    /* 0 */ { MAP_EXPANDED, "math::Mean 2", NULL, 0, 0, NULL, NULL, NULL, &scope_101, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_102, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_103, 1, 2 }
};
const MappingScope scope_100 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:then:",
    scope_100_entries, 3
};

const MappingEntry scope_99_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11), &_Type_Result_MTC_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL06_MTC_1_Check_Delta_3_PATHS7_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_99 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST 11/MTCEx::MTC_Observers::Check_Delta_3_PATHS7_MTC_OBS 1",
    scope_99_entries, 2
};

const MappingEntry scope_98_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11), &_Type_Result_MTC_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST_11), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_98 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST 11/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_98_entries, 2
};

const MappingEntry scope_97_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_98, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS7_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_99, 1, 2 }
};
const MappingScope scope_97 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST 11",
    scope_97_entries, 3
};

const MappingEntry scope_96_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Mean_MTC_OBS_3), &_Type_Result_MTC_Utils, &scope_78_entries[12], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _10_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_96 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:then:/MTCEx::MTC_Observers::math_Mean_MTC_OBS 3",
    scope_96_entries, 2
};

const MappingEntry scope_95_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_2), &_Type_Result_MTC_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_95 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 2",
    scope_95_entries, 2
};

const MappingEntry scope_94_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every44), &_Type_kcg_bool_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every44), &_Type_kcg_bool_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_94 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:then:/math::Mean 3",
    scope_94_entries, 4
};

const MappingEntry scope_93_entries[3] = {
    /* 0 */ { MAP_EXPANDED, "math::Mean 3", NULL, 0, 0, NULL, NULL, NULL, &scope_94, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_95, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_96, 1, 2 }
};
const MappingScope scope_93 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:then:",
    scope_93_entries, 3
};

const MappingEntry scope_92_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_math_Mean3_MTC_OBS_6), &_Type_Result_MTC_Utils, &scope_78_entries[4], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, _11_Context_LATCHALL01_MTC_1_math_Mean3_MTC_OBS_6), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_92 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:else:/MTCEx::MTC_Observers::math_Mean3_MTC_OBS 6",
    scope_92_entries, 2
};

const MappingEntry scope_91_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, MTC_ALL1_CONTROL_MTC_OBS_1), &_Type_Result_MTC_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Check_Delta_3, Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_91 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:else:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_91_entries, 2
};

const MappingEntry scope_90_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every43), &_Type_kcg_bool_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every43), &_Type_kcg_bool_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "MTC_AC_I3", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every43), &_Type_kcg_bool_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_SIGNAL, "MTC_sig_3", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_90 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:else:/math::Mean3 6",
    scope_90_entries, 6
};

const MappingEntry scope_89_entries[3] = {
    /* 0 */ { MAP_EXPANDED, "math::Mean3 6", NULL, 0, 0, NULL, NULL, NULL, &scope_90, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_91, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean3_MTC_OBS 6", NULL, 0, 0, NULL, NULL, NULL, &scope_92, 1, 2 }
};
const MappingScope scope_89 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:else:",
    scope_89_entries, 3
};

const MappingEntry scope_88_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_88_entries[0], isActive_kcg_bool_kcg_false, &scope_89, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_88_entries[0], isActive_kcg_bool_kcg_true, &scope_93, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_else_MTC_INST 11", NULL, 0, 0, NULL, NULL, NULL, &scope_97, 1, 3 }
};
const MappingScope scope_88 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:else:",
    scope_88_entries, 4
};

const MappingEntry scope_87_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _45_else_clock_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_false, &scope_88, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_100, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_else_MTC_INST 10", NULL, 0, 0, NULL, NULL, NULL, &scope_104, 1, 3 }
};
const MappingScope scope_87 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:else:",
    scope_87_entries, 4
};

const MappingEntry scope_86_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_false, &scope_87, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_true, &scope_107, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_else_MTC_INST 9", NULL, 0, 0, NULL, NULL, NULL, &scope_111, 1, 3 }
};
const MappingScope scope_86 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:else:",
    scope_86_entries, 4
};

const MappingEntry scope_85_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_86, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_114, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_else_MTC_INST 8", NULL, 0, 0, NULL, NULL, NULL, &scope_116, 1, 3 }
};
const MappingScope scope_85 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:else:",
    scope_85_entries, 4
};

const MappingEntry scope_84_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_false, &scope_85, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_true, &scope_119, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_else_MTC_INST 7", NULL, 0, 0, NULL, NULL, NULL, &scope_121, 1, 3 }
};
const MappingScope scope_84 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:else:",
    scope_84_entries, 4
};

const MappingEntry scope_83_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive_kcg_bool_kcg_false, &scope_84, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive_kcg_bool_kcg_true, &scope_124, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_else_MTC_INST 6", NULL, 0, 0, NULL, NULL, NULL, &scope_126, 1, 3 }
};
const MappingScope scope_83 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:else:",
    scope_83_entries, 4
};

const MappingEntry scope_82_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_82_entries[0], isActive_kcg_bool_kcg_false, &scope_83, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_82_entries[0], isActive_kcg_bool_kcg_true, &scope_129, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Check_Delta_3_IfBlock1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_133, 1, 3 }
};
const MappingScope scope_82 = {
    "Check_Delta_3/ Check_Delta_3IfBlock1:",
    scope_82_entries, 4
};

const MappingEntry scope_81_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "MTC_AC_I3", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_SIGNAL, "MTC_sig_3", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_81 = {
    "Check_Delta_3/ Check_Delta_3/math::Mean3 1",
    scope_81_entries, 6
};

const MappingEntry scope_80_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_Delta_3, _7_MTC_ALL1_math_Abs_PATHS1_MTC_OBS_1_Abs_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Check_Delta_3, _38_Context_LATCHALL04_MTC_1_math_Abs_PATHS1_MTC_OBS_1_Abs_1), NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_80 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 1/MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1",
    scope_80_entries, 2
};

const MappingEntry scope_79_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_80, 1, 0 }
};
const MappingScope scope_79 = {
    "Check_Delta_3/ Check_Delta_3/math::Abs 1",
    scope_79_entries, 1
};

const MappingEntry scope_78_entries[33] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_Check_Delta_3, Output1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_79, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "math::Mean3 1", NULL, 0, 0, NULL, NULL, NULL, &scope_81, 1, 2 },
    /* 3 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_82, 1, 3 },
    /* 4 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every43), &_Type_kcg_bool_Utils, &scope_78_entries[5], isActive_kcg_bool_kcg_false, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_78_entries[6], isActive_kcg_bool_kcg_false, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, _45_else_clock_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_78_entries[7], isActive_kcg_bool_kcg_false, NULL, 0, 6 },
    /* 7 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_78_entries[8], isActive_kcg_bool_kcg_false, NULL, 0, 7 },
    /* 8 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_78_entries[9], isActive_kcg_bool_kcg_false, NULL, 0, 8 },
    /* 9 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_78_entries[10], isActive_kcg_bool_kcg_false, NULL, 0, 9 },
    /* 10 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_78_entries[11], isActive_kcg_bool_kcg_false, NULL, 0, 10 },
    /* 11 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11 },
    /* 12 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every44), &_Type_kcg_bool_Utils, &scope_78_entries[5], isActive_kcg_bool_kcg_true, NULL, 0, 12 },
    /* 13 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every42), &_Type_kcg_bool_Utils, &scope_78_entries[6], isActive_kcg_bool_kcg_true, NULL, 0, 13 },
    /* 14 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every46), &_Type_kcg_bool_Utils, &scope_78_entries[7], isActive_kcg_bool_kcg_true, NULL, 0, 14 },
    /* 15 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every47), &_Type_kcg_bool_Utils, &scope_78_entries[11], isActive_kcg_bool_kcg_true, NULL, 0, 15 },
    /* 16 */ { MAP_EXPANDED, "math::Abs 2", NULL, 0, 0, NULL, NULL, NULL, &scope_135, 1, 16 },
    /* 17 */ { MAP_EXPANDED, "math::Abs 3", NULL, 0, 0, NULL, NULL, NULL, &scope_137, 1, 17 },
    /* 18 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS8_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_139, 1, 18 },
    /* 19 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_141, 1, 19 },
    /* 20 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 20 },
    /* 21 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean3_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_142, 1, 21 },
    /* 22 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 22 },
    /* 23 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS9_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_143, 1, 23 },
    /* 24 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_144, 1, 24 },
    /* 25 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 25 },
    /* 26 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS10_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_145, 1, 26 },
    /* 27 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Abs_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_146, 1, 27 },
    /* 28 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_bool), offsetof(outC_Check_Delta_3, every41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 28 },
    /* 29 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS11_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_147, 1, 29 },
    /* 30 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS12_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_149, 1, 30 },
    /* 31 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS13_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_150, 1, 31 },
    /* 32 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_PATHS14_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_151, 1, 32 }
};
const MappingScope scope_78 = {
    "Check_Delta_3/ Check_Delta_3",
    scope_78_entries, 33
};

const MappingEntry scope_77_entries[3] = {
    /* 0 */ { MAP_INSTANCE, "Check_Delta_3 1", NULL, sizeof(outC_Check_Delta_3), offsetof(outC_Calculated_value, Context_Check_Delta_3_1), NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_true, &scope_78, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 8", NULL, 0, 0, NULL, NULL, NULL, &scope_152, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_Delta_3_1111_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_153, 1, 2 }
};
const MappingScope scope_77 = {
    "Calculated_value/ Calculated_valueIfBlock1:then:",
    scope_77_entries, 3
};

const MappingEntry scope_76_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _1_MTC_ALL1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3), &_Type_Result_MTC_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Calculated_value, _35_Context_LATCHALL06_MTC_1_Calculated_value_PATHS2_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_76 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_MTC_INST 3/MTCEx::MTC_Observers::Calculated_value_PATHS2_MTC_OBS 1",
    scope_76_entries, 2
};

const MappingEntry scope_75_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3), &_Type_Result_MTC_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _34_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_MTC_INST_3), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_75 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_MTC_INST 3/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_75_entries, 2
};

const MappingEntry scope_74_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_75, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS2_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_76, 1, 2 }
};
const MappingScope scope_74 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_MTC_INST 3",
    scope_74_entries, 3
};

const MappingEntry scope_73_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_math_Mean_MTC_OBS_1), &_Type_Result_MTC_Utils, &scope_30_entries[8], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_73 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:then:/MTCEx::MTC_Observers::math_Mean_MTC_OBS 1",
    scope_73_entries, 2
};

const MappingEntry scope_72_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_7), &_Type_Result_MTC_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _33_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_7), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_72 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 7",
    scope_72_entries, 2
};

const MappingEntry scope_71_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every41), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every41), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_71 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:then:/math::Mean 1",
    scope_71_entries, 4
};

const MappingEntry scope_70_entries[3] = {
    /* 0 */ { MAP_EXPANDED, "math::Mean 1", NULL, 0, 0, NULL, NULL, NULL, &scope_71, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 7", NULL, 0, 0, NULL, NULL, NULL, &scope_72, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_73, 1, 2 }
};
const MappingScope scope_70 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:then:",
    scope_70_entries, 3
};

const MappingEntry scope_69_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _2_MTC_ALL1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4), &_Type_Result_MTC_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Calculated_value, _32_Context_LATCHALL06_MTC_1_Calculated_value_PATHS3_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_69 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_MTC_INST 4/MTCEx::MTC_Observers::Calculated_value_PATHS3_MTC_OBS 1",
    scope_69_entries, 2
};

const MappingEntry scope_68_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _3_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4), &_Type_Result_MTC_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _31_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_MTC_INST_4), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_68 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_MTC_INST 4/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_68_entries, 2
};

const MappingEntry scope_67_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_68, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS3_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_69, 1, 2 }
};
const MappingScope scope_67 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_MTC_INST 4",
    scope_67_entries, 3
};

const MappingEntry scope_66_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_math_Mean_MTC_OBS_3), &_Type_Result_MTC_Utils, &scope_30_entries[7], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _15_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_3), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_66 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:then:/MTCEx::MTC_Observers::math_Mean_MTC_OBS 3",
    scope_66_entries, 2
};

const MappingEntry scope_65_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_6), &_Type_Result_MTC_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _30_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_6), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_65 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 6",
    scope_65_entries, 2
};

const MappingEntry scope_64_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every38), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every38), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_64 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:then:/math::Mean 3",
    scope_64_entries, 4
};

const MappingEntry scope_63_entries[3] = {
    /* 0 */ { MAP_EXPANDED, "math::Mean 3", NULL, 0, 0, NULL, NULL, NULL, &scope_64, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 6", NULL, 0, 0, NULL, NULL, NULL, &scope_65, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_66, 1, 2 }
};
const MappingScope scope_63 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:then:",
    scope_63_entries, 3
};

const MappingEntry scope_62_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _4_MTC_ALL1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5), &_Type_Result_MTC_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Calculated_value, _29_Context_LATCHALL06_MTC_1_Calculated_value_PATHS4_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_62 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_MTC_INST 5/MTCEx::MTC_Observers::Calculated_value_PATHS4_MTC_OBS 1",
    scope_62_entries, 2
};

const MappingEntry scope_61_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _5_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5), &_Type_Result_MTC_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _28_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_MTC_INST_5), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_61 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_MTC_INST 5/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_61_entries, 2
};

const MappingEntry scope_60_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_61, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS4_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_62, 1, 2 }
};
const MappingScope scope_60 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_MTC_INST 5",
    scope_60_entries, 3
};

const MappingEntry scope_59_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_math_Mean_MTC_OBS_5), &_Type_Result_MTC_Utils, &scope_30_entries[2], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _16_Context_LATCHALL01_MTC_1_math_Mean_MTC_OBS_5), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_59 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:then:/MTCEx::MTC_Observers::math_Mean_MTC_OBS 5",
    scope_59_entries, 2
};

const MappingEntry scope_58_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_5), &_Type_Result_MTC_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _27_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_5), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_58 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 5",
    scope_58_entries, 2
};

const MappingEntry scope_57_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "MTC_AC_I1", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every40), &_Type_kcg_bool_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "MTC_AC_I2", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every40), &_Type_kcg_bool_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_SIGNAL, "MTC_sig_1", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "MTC_sig_2", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_57 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:then:/math::Mean 5",
    scope_57_entries, 4
};

const MappingEntry scope_56_entries[3] = {
    /* 0 */ { MAP_EXPANDED, "math::Mean 5", NULL, 0, 0, NULL, NULL, NULL, &scope_57, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 5", NULL, 0, 0, NULL, NULL, NULL, &scope_58, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::math_Mean_MTC_OBS 5", NULL, 0, 0, NULL, NULL, NULL, &scope_59, 1, 2 }
};
const MappingScope scope_56 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:then:",
    scope_56_entries, 3
};

const MappingEntry scope_55_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _6_MTC_ALL1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6), &_Type_Result_MTC_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Calculated_value, _26_Context_LATCHALL06_MTC_1_Calculated_value_PATHS5_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_55 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_MTC_INST 6/MTCEx::MTC_Observers::Calculated_value_PATHS5_MTC_OBS 1",
    scope_55_entries, 2
};

const MappingEntry scope_54_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _7_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6), &_Type_Result_MTC_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _25_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_MTC_INST_6), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_54 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_MTC_INST 6/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_54_entries, 2
};

const MappingEntry scope_53_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_54, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS5_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_55, 1, 2 }
};
const MappingScope scope_53 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_MTC_INST 6",
    scope_53_entries, 3
};

const MappingEntry scope_52_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_4), &_Type_Result_MTC_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _24_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_4), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_52 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 4",
    scope_52_entries, 2
};

const MappingEntry scope_51_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 4", NULL, 0, 0, NULL, NULL, NULL, &scope_52, 1, 0 }
};
const MappingScope scope_51 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:then:",
    scope_51_entries, 1
};

const MappingEntry scope_50_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _8_MTC_ALL1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7), &_Type_Result_MTC_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Calculated_value, _23_Context_LATCHALL06_MTC_1_Calculated_value_PATHS6_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_50 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST 7/MTCEx::MTC_Observers::Calculated_value_PATHS6_MTC_OBS 1",
    scope_50_entries, 2
};

const MappingEntry scope_49_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _9_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7), &_Type_Result_MTC_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _22_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST_7), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_49 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST 7/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_49_entries, 2
};

const MappingEntry scope_48_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_49, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS6_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 2 }
};
const MappingScope scope_48 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST 7",
    scope_48_entries, 3
};

const MappingEntry scope_47_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_3), &_Type_Result_MTC_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _21_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_3), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_47 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 3",
    scope_47_entries, 2
};

const MappingEntry scope_46_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_47, 1, 0 }
};
const MappingScope scope_46 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:then:",
    scope_46_entries, 1
};

const MappingEntry scope_45_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL06_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_45 = {
    "MTC::LATCHALL06/ LATCHALL06_MTC",
    scope_45_entries, 1
};

const MappingEntry scope_44_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _10_MTC_ALL1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8), &_Type_Result_MTC_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL06 1", NULL, sizeof(outC_LATCHALL06_MTC), offsetof(outC_Calculated_value, Context_LATCHALL06_MTC_1_Calculated_value_PATHS7_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8), NULL, NULL, NULL, &scope_45, 1, 1 }
};
const MappingScope scope_44 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST 8/MTCEx::MTC_Observers::Calculated_value_PATHS7_MTC_OBS 1",
    scope_44_entries, 2
};

const MappingEntry scope_43_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, _11_MTC_ALL1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8), &_Type_Result_MTC_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _20_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1_Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST_8), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_43 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST 8/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_43_entries, 2
};

const MappingEntry scope_42_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "MTC_cond", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, _39_else_clock_else_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_43, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS7_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 2 }
};
const MappingScope scope_42 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:/MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST 8",
    scope_42_entries, 3
};

const MappingEntry scope_41_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_2), &_Type_Result_MTC_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, _19_Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_2), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_41 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:then:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 2",
    scope_41_entries, 2
};

const MappingEntry scope_40_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 0 }
};
const MappingScope scope_40 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:then:",
    scope_40_entries, 1
};

const MappingEntry scope_39_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Calculated_value, MTC_ALL1_CONTROL_MTC_OBS_1), &_Type_Result_MTC_Utils, &scope_37_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), offsetof(outC_Calculated_value, Context_LATCHALL01_MTC_1_CONTROL_MTC_OBS_1), NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_39 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:else:/MTCEx::MTC_Observers::CONTROL_MTC_OBS 1",
    scope_39_entries, 2
};

const MappingEntry scope_38_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::CONTROL_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 0 }
};
const MappingScope scope_38 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:else:",
    scope_38_entries, 1
};

const MappingEntry scope_37_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, _39_else_clock_else_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_36_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_37_entries[0], isActive_kcg_bool_kcg_false, &scope_38, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_37_entries[0], isActive_kcg_bool_kcg_true, &scope_40, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_else_MTC_INST 8", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 3 }
};
const MappingScope scope_37 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:else:",
    scope_37_entries, 4
};

const MappingEntry scope_36_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_35_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_kcg_bool_kcg_false, &scope_37, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_kcg_bool_kcg_true, &scope_46, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_else_MTC_INST 7", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 3 }
};
const MappingScope scope_36 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:else:",
    scope_36_entries, 4
};

const MappingEntry scope_35_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_34_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_35_entries[0], isActive_kcg_bool_kcg_false, &scope_36, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_35_entries[0], isActive_kcg_bool_kcg_true, &scope_51, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_else_MTC_INST 6", NULL, 0, 0, NULL, NULL, NULL, &scope_53, 1, 3 }
};
const MappingScope scope_35 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:else:",
    scope_35_entries, 4
};

const MappingEntry scope_34_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_34_entries[0], isActive_kcg_bool_kcg_false, &scope_35, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_34_entries[0], isActive_kcg_bool_kcg_true, &scope_56, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_else_MTC_INST 5", NULL, 0, 0, NULL, NULL, NULL, &scope_60, 1, 3 }
};
const MappingScope scope_34 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:else:",
    scope_34_entries, 4
};

const MappingEntry scope_33_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive_kcg_bool_kcg_false, &scope_34, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive_kcg_bool_kcg_true, &scope_63, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_else_MTC_INST 4", NULL, 0, 0, NULL, NULL, NULL, &scope_67, 1, 3 }
};
const MappingScope scope_33 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:else:",
    scope_33_entries, 4
};

const MappingEntry scope_32_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_false, &scope_33, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_true, &scope_70, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_else_MTC_INST 3", NULL, 0, 0, NULL, NULL, NULL, &scope_74, 1, 3 }
};
const MappingScope scope_32 = {
    "Calculated_value/ Calculated_valueIfBlock1:else:",
    scope_32_entries, 4
};

const MappingEntry scope_31_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_false, &scope_32, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_true, &scope_77, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Calculated_value_IfBlock1_MTC_INST 2", NULL, 0, 0, NULL, NULL, NULL, &scope_156, 1, 3 }
};
const MappingScope scope_31 = {
    "Calculated_value/ Calculated_valueIfBlock1:",
    scope_31_entries, 4
};

const MappingEntry scope_30_entries[13] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_Calculated_value, Output1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 1 },
    /* 2 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every40), &_Type_kcg_bool_Utils, &scope_30_entries[3], isActive_kcg_bool_kcg_true, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_30_entries[4], isActive_kcg_bool_kcg_false, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_30_entries[5], isActive_kcg_bool_kcg_false, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_30_entries[6], isActive_kcg_bool_kcg_false, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every38), &_Type_kcg_bool_Utils, &scope_30_entries[4], isActive_kcg_bool_kcg_true, NULL, 0, 7 },
    /* 8 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every41), &_Type_kcg_bool_Utils, &scope_30_entries[5], isActive_kcg_bool_kcg_true, NULL, 0, 8 },
    /* 9 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Calculated_value, every), &_Type_kcg_bool_Utils, &scope_30_entries[6], isActive_kcg_bool_kcg_true, NULL, 0, 9 },
    /* 10 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS8_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_158, 1, 10 },
    /* 11 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS9_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_159, 1, 11 },
    /* 12 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_PATHS10_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_160, 1, 12 }
};
const MappingScope scope_30 = {
    "Calculated_value/ Calculated_value",
    scope_30_entries, 13
};

const MappingEntry scope_29_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_interval_pH, MTC_ALL1_Check_interval_pH_PATHS1_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Check_interval_pH, Context_LATCHALL04_MTC_1_Check_interval_pH_PATHS1_MTC_OBS_1), NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_29 = {
    "Check_interval_pH/ Check_interval_pH/MTCEx::MTC_Observers::Check_interval_pH_PATHS1_MTC_OBS 1",
    scope_29_entries, 2
};

const MappingEntry scope_28_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_pH, Output1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_pH_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_29, 1, 1 }
};
const MappingScope scope_28 = {
    "Check_interval_pH/ Check_interval_pH",
    scope_28_entries, 2
};

const MappingEntry scope_27_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_interval_Temperature, MTC_ALL1_Check_interval_Temperature_PATHS1_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Check_interval_Temperature, Context_LATCHALL04_MTC_1_Check_interval_Temperature_PATHS1_MTC_OBS_1), NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_27 = {
    "Check_interval_Temperature/ Check_interval_Temperature/MTCEx::MTC_Observers::Check_interval_Temperature_PATHS1_MTC_OBS 1",
    scope_27_entries, 2
};

const MappingEntry scope_26_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Temperature, Output1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_Temperature_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 1 }
};
const MappingScope scope_26 = {
    "Check_interval_Temperature/ Check_interval_Temperature",
    scope_26_entries, 2
};

const MappingEntry scope_25_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL04_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_25 = {
    "MTC::LATCHALL04/ LATCHALL04_MTC",
    scope_25_entries, 1
};

const MappingEntry scope_24_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), offsetof(outC_Check_interval_Redox, MTC_ALL1_Check_interval_Redox_PATHS1_MTC_OBS_1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL04 1", NULL, sizeof(outC_LATCHALL04_MTC), offsetof(outC_Check_interval_Redox, Context_LATCHALL04_MTC_1_Check_interval_Redox_PATHS1_MTC_OBS_1), NULL, NULL, NULL, &scope_25, 1, 1 }
};
const MappingScope scope_24 = {
    "Check_interval_Redox/ Check_interval_Redox/MTCEx::MTC_Observers::Check_interval_Redox_PATHS1_MTC_OBS 1",
    scope_24_entries, 2
};

const MappingEntry scope_23_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), offsetof(outC_Check_interval_Redox, Output1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_Redox_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 1 }
};
const MappingScope scope_23 = {
    "Check_interval_Redox/ Check_interval_Redox",
    scope_23_entries, 2
};

const MappingEntry scope_22_entries[45] = {
    /* 0 */ { MAP_OUTPUT, "pH", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, pH), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Temperature", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, Temperature), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Redox", NULL, sizeof(kcg_float64), offsetof(outC_Vote_Alog, Redox), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Check_interval_Redox 1", NULL, sizeof(outC_Check_interval_Redox), offsetof(outC_Vote_Alog, Context_Check_interval_Redox_1), NULL, NULL, NULL, &scope_23, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "Check_interval_Temperature 1", NULL, sizeof(outC_Check_interval_Temperature), offsetof(outC_Vote_Alog, Context_Check_interval_Temperature_1), NULL, NULL, NULL, &scope_26, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "Check_interval_pH 3", NULL, sizeof(outC_Check_interval_pH), offsetof(outC_Vote_Alog, Context_Check_interval_pH_3), NULL, NULL, NULL, &scope_28, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "Check_interval_pH 2", NULL, sizeof(outC_Check_interval_pH), offsetof(outC_Vote_Alog, Context_Check_interval_pH_2), NULL, NULL, NULL, &scope_28, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "Check_interval_pH 1", NULL, sizeof(outC_Check_interval_pH), offsetof(outC_Vote_Alog, Context_Check_interval_pH_1), NULL, NULL, NULL, &scope_28, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "Calculated_value 1", NULL, sizeof(outC_Calculated_value), offsetof(outC_Vote_Alog, Context_Calculated_value_1), NULL, NULL, NULL, &scope_30, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "Check_interval_Temperature 2", NULL, sizeof(outC_Check_interval_Temperature), offsetof(outC_Vote_Alog, _36_Context_Check_interval_Temperature_2), NULL, NULL, NULL, &scope_26, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "Check_interval_Temperature 3", NULL, sizeof(outC_Check_interval_Temperature), offsetof(outC_Vote_Alog, _37_Context_Check_interval_Temperature_3), NULL, NULL, NULL, &scope_26, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Calculated_value 2", NULL, sizeof(outC_Calculated_value), offsetof(outC_Vote_Alog, Context_Calculated_value_2), NULL, NULL, NULL, &scope_30, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "Check_interval_Redox 2", NULL, sizeof(outC_Check_interval_Redox), offsetof(outC_Vote_Alog, Context_Check_interval_Redox_2), NULL, NULL, NULL, &scope_23, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "Check_interval_Redox 3", NULL, sizeof(outC_Check_interval_Redox), offsetof(outC_Vote_Alog, Context_Check_interval_Redox_3), NULL, NULL, NULL, &scope_23, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "Calculated_value 3", NULL, sizeof(outC_Calculated_value), offsetof(outC_Vote_Alog, Context_Calculated_value_3), NULL, NULL, NULL, &scope_30, 1, 14 },
    /* 15 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_161, 1, 15 },
    /* 16 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_PATHS2_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_162, 1, 16 },
    /* 17 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_164, 1, 17 },
    /* 18 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 18 },
    /* 19 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_165, 1, 19 },
    /* 20 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 20 },
    /* 21 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_166, 1, 21 },
    /* 22 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every48), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 22 },
    /* 23 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_pH_1_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_167, 1, 23 },
    /* 24 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 24 },
    /* 25 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_PATHS3_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_168, 1, 25 },
    /* 26 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_PATHS4_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_169, 1, 26 },
    /* 27 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_170, 1, 27 },
    /* 28 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every46), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 28 },
    /* 29 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_171, 1, 29 },
    /* 30 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every45), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 30 },
    /* 31 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_172, 1, 31 },
    /* 32 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 32 },
    /* 33 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_Temperature_1_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_173, 1, 33 },
    /* 34 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 34 },
    /* 35 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_PATHS5_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_174, 1, 35 },
    /* 36 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_PATHS6_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_175, 1, 36 },
    /* 37 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Calculated_value_1110_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_176, 1, 37 },
    /* 38 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 38 },
    /* 39 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_177, 1, 39 },
    /* 40 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 40 },
    /* 41 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_178, 1, 41 },
    /* 42 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 42 },
    /* 43 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Check_interval_Redox_1_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_179, 1, 43 },
    /* 44 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_Vote_Alog, every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 44 }
};
const MappingScope scope_22 = {
    "Vote_Alog/ Vote_Alog",
    scope_22_entries, 45
};

const MappingEntry scope_21_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_2, &_Type_Result_MTC_Utils, &scope_1_entries[24], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._34_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_2, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_21 = {
    "Controller/ ControllerSM1:Normal_Station:<2/MTCEx::MTC_Observers::TRANSITION_MTC_OBS 2",
    scope_21_entries, 2
};

const MappingEntry scope_20_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._32_Context_LATCHALL02_MTC_1_Controller_PATHS2_MTC_OBS_1_Controller_SM1_Normal_Station_2_MTC_INST_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_20 = {
    "Controller/ ControllerSM1:Normal_Station:<2/MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_2_MTC_INST 1/MTCEx::MTC_Observers::Controller_PATHS2_MTC_OBS 1",
    scope_20_entries, 2
};

const MappingEntry scope_19_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS2_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 0 }
};
const MappingScope scope_19 = {
    "Controller/ ControllerSM1:Normal_Station:<2/MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_2_MTC_INST 1",
    scope_19_entries, 1
};

const MappingEntry scope_18_entries[3] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 2 }
};
const MappingScope scope_18 = {
    "Controller/ ControllerSM1:Normal_Station:<2",
    scope_18_entries, 3
};

const MappingEntry scope_17_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL01_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_17 = {
    "MTC::LATCHALL01/ LATCHALL01_MTC",
    scope_17_entries, 1
};

const MappingEntry scope_16_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_1_entries[22], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL01 1", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._35_Context_LATCHALL01_MTC_1_TRANSITION_MTC_OBS_1, NULL, NULL, NULL, &scope_17, 1, 1 }
};
const MappingScope scope_16 = {
    "Controller/ ControllerSM1:Normal_Station:<1/MTCEx::MTC_Observers::TRANSITION_MTC_OBS 1",
    scope_16_entries, 2
};

const MappingEntry scope_15_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1, &_Type_Result_MTC_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._33_Context_LATCHALL02_MTC_1_Controller_PATHS3_MTC_OBS_1_Controller_SM1_Normal_Station_1_MTC_INST_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_15 = {
    "Controller/ ControllerSM1:Normal_Station:<1/MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_1_MTC_INST 1/MTCEx::MTC_Observers::Controller_PATHS3_MTC_OBS 1",
    scope_15_entries, 2
};

const MappingEntry scope_14_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS3_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 1 }
};
const MappingScope scope_14 = {
    "Controller/ ControllerSM1:Normal_Station:<1/MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_1_MTC_INST 1",
    scope_14_entries, 2
};

const MappingEntry scope_13_entries[3] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_SM1_Normal_Station_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 2 }
};
const MappingScope scope_13 = {
    "Controller/ ControllerSM1:Normal_Station:<1",
    scope_13_entries, 3
};

const MappingEntry scope_12_entries[8] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "Vote_Alog 1", NULL, sizeof(outC_Vote_Alog), (size_t)&outputs_ctx.Context_Vote_Alog_1, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, &scope_22, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_180, 1, 3 },
    /* 4 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS9_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_181, 1, 4 },
    /* 5 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Vote_Alog_111_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_182, 1, 5 },
    /* 6 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS10_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_184, 1, 6 },
    /* 7 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS11_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_185, 1, 7 }
};
const MappingScope scope_12 = {
    "Controller/ ControllerSM1:Normal_Station:",
    scope_12_entries, 8
};

const MappingEntry scope_11_entries[8] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_STATE, "Normal_Station:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, &scope_12, 1, 3 },
    /* 4 */ { MAP_STATE, "Defaillance_Station:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Defaillance_Station_SM1, &scope_186, 1, 4 },
    /* 5 */ { MAP_STATE, "Calculate:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, &scope_188, 1, 5 },
    /* 6 */ { MAP_STATE, "Pollution:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, &scope_233, 1, 6 },
    /* 7 */ { MAP_STATE, "Timer:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, &scope_245, 1, 7 }
};
const MappingScope scope_11 = {
    "Controller/ ControllerSM1:",
    scope_11_entries, 8
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL02_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "MTC::LATCHALL02/ LATCHALL02_MTC",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[2] = {
    /* 0 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1, &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INSTANCE, "MTC::LATCHALL02 1", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx.Context_LATCHALL02_MTC_1_Controller_PATHS1_MTC_OBS_1_Controller_store_last_MTC_INST_1, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_6 = {
    "Controller/ Controller/MTCEx::MTC_Instrumenters::Controller_store_last_MTC_INST 1/MTCEx::MTC_Observers::Controller_PATHS1_MTC_OBS 1",
    scope_6_entries, 2
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Controller_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 0 }
};
const MappingScope scope_5 = {
    "Controller/ Controller/MTCEx::MTC_Instrumenters::Controller_store_last_MTC_INST 1",
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

const MappingEntry scope_1_entries[33] = {
    /* 0 */ { MAP_OUTPUT, "Send_Data", NULL, sizeof(Statation_data), (size_t)&outputs_ctx.Send_Data, &_Type_Statation_data_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "alarm", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.alarm, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "Sensor_Temperature", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_Temperature, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 2 },
    /* 3 */ { MAP_INPUT, "Sensor_pH", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_pH, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 3 },
    /* 4 */ { MAP_INPUT, "Sensor_Redox", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_Redox, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 4 },
    /* 5 */ { MAP_INPUT, "Sensor_GPS", NULL, sizeof(position), (size_t)&inputs_ctx.Sensor_GPS, &_Type_position_Utils, NULL, NULL, &scope_3, 1, 5 },
    /* 6 */ { MAP_INPUT, "Time", NULL, sizeof(kcg_float64), (size_t)&inputs_ctx.Time, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INPUT, "Stop", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Stop, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "Frequency", NULL, sizeof(kcg_float64), (size_t)&inputs_ctx.Frequency, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_SIGNAL, "MTC_sig_def_1", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_SIGNAL, "MTC_sig_def_3", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_SIGNAL, "MTC_sig_use_4", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_SIGNAL, "MTC_sig_def_5", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_SIGNAL, "MTC_sig_def_7", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_SIGNAL, "MTC_sig_fire_9", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_SIGNAL, "MTC_sig_10", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_SIGNAL, "MTC_sig_11", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_store_last_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 17 },
    /* 18 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_Store_Time_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_timeout_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Controller_MTC_Send_Data_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 21 },
    /* 22 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_1_entries[23], isActive_SSM_ST_SM1_SSM_st_Normal_Station_SM1, NULL, 0, 22 },
    /* 23 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 23 },
    /* 24 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_Normal_Station_SM1, &_Type_kcg_bool_Utils, &scope_1_entries[22], isActive_kcg_bool_kcg_false, NULL, 0, 24 },
    /* 25 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_1_entries[23], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 0, 25 },
    /* 26 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_Calculate_SM1, &_Type_kcg_bool_Utils, &scope_1_entries[25], isActive_kcg_bool_kcg_false, NULL, 0, 26 },
    /* 27 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.every41, &_Type_kcg_bool_Utils, &scope_1_entries[23], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 0, 27 },
    /* 28 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.every42, &_Type_kcg_bool_Utils, &scope_1_entries[23], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 0, 28 },
    /* 29 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.every43, &_Type_kcg_bool_Utils, &scope_1_entries[23], isActive_SSM_ST_SM1_SSM_st_Calculate_SM1, NULL, 0, 29 },
    /* 30 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Pollution_SM1, &_Type_kcg_bool_Utils, &scope_1_entries[23], isActive_SSM_ST_SM1_SSM_st_Pollution_SM1, NULL, 0, 30 },
    /* 31 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_Pollution_SM1, &_Type_kcg_bool_Utils, &scope_1_entries[30], isActive_kcg_bool_kcg_false, NULL, 0, 31 },
    /* 32 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_Timer_SM1, &_Type_kcg_bool_Utils, &scope_1_entries[23], isActive_SSM_ST_SM1_SSM_st_Timer_SM1, NULL, 0, 32 }
};
const MappingScope scope_1 = {
    "Controller/ Controller",
    scope_1_entries, 33
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
