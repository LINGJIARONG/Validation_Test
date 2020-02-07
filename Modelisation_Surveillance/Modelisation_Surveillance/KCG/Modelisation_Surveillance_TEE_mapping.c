/* Modelisation_Surveillance_TEE_mapping.c */

#include "Modelisation_Surveillance_TEE_type.h"
#include "Modelisation_Surveillance_TEE_interface.h"
#include "Modelisation_Surveillance_TEE_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_3);
DECL_ITER(array_2);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_23, 1);
DECL_SCOPE(scope_22, 1);
DECL_SCOPE(scope_21, 1);
DECL_SCOPE(scope_20, 1);
DECL_SCOPE(scope_19, 2);
DECL_SCOPE(scope_16, 2);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 1);
DECL_SCOPE(scope_10, 6);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 2);
DECL_SCOPE(scope_5, 6);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 1);
DECL_SCOPE(scope_2, 5);
DECL_SCOPE(scope_1, 10);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */

const MappingIterator iter_array_3 = { "array", 3, 3, NULL };
const MappingIterator iter_array_2 = { "array", 2, 2, NULL };

const MappingEntry scope_23_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_23 = {
    "Controller/ ControllerSM1:Timer:<1",
    scope_23_entries, 1
};

const MappingEntry scope_22_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 0 }
};
const MappingScope scope_22 = {
    "Controller/ ControllerSM1:Timer:",
    scope_22_entries, 1
};

const MappingEntry scope_21_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_21 = {
    "Controller/ ControllerSM1:Pollution:<2",
    scope_21_entries, 1
};

const MappingEntry scope_20_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_20 = {
    "Controller/ ControllerSM1:Pollution:<1",
    scope_20_entries, 1
};

const MappingEntry scope_19_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 1 }
};
const MappingScope scope_19 = {
    "Controller/ ControllerSM1:Pollution:",
    scope_19_entries, 2
};

const MappingEntry scope_16_entries[2] = {
    /* 0 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_16 = {
    "Controller/ ControllerSM1:Calculate:IfBlock1:",
    scope_16_entries, 2
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "Controller/ ControllerSM1:Calculate:<2",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_11 = {
    "Controller/ ControllerSM1:Calculate:<1",
    scope_11_entries, 1
};

const MappingEntry scope_10_entries[6] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 1 },
    /* 2 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_EXPANDED, "math::Abs 2", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_EXPANDED, "math::Abs 3", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 5 }
};
const MappingScope scope_10 = {
    "Controller/ ControllerSM1:Calculate:",
    scope_10_entries, 6
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "Controller/ ControllerSM1:Normal_Station:<2",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "Controller/ ControllerSM1:Normal_Station:<1",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 1 }
};
const MappingScope scope_6 = {
    "Controller/ ControllerSM1:Normal_Station:",
    scope_6_entries, 2
};

const MappingEntry scope_5_entries[6] = {
    /* 0 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_STATE, "Normal_Station:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 1 },
    /* 2 */ { MAP_STATE, "Defaillance_Station:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_STATE, "Calculate:", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 3 },
    /* 4 */ { MAP_STATE, "Pollution:", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 4 },
    /* 5 */ { MAP_STATE, "Timer:", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 5 }
};
const MappingScope scope_5 = {
    "Controller/ ControllerSM1:",
    scope_5_entries, 6
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

const MappingEntry scope_1_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "Send_Data", NULL, sizeof(Statation_data), (size_t)&outputs_ctx.Send_Data, &_Type_Statation_data_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "alarm", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.alarm, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "Sensor_Temperature", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_Temperature, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 2 },
    /* 3 */ { MAP_INPUT, "Sensor_pH", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_pH, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 3 },
    /* 4 */ { MAP_INPUT, "Sensor_Redox", NULL, sizeof(Data), (size_t)&inputs_ctx.Sensor_Redox, &_Type_Data_Utils, NULL, NULL, &scope_4, 1, 4 },
    /* 5 */ { MAP_INPUT, "Sensor_GPS", NULL, sizeof(position), (size_t)&inputs_ctx.Sensor_GPS, &_Type_position_Utils, NULL, NULL, &scope_3, 1, 5 },
    /* 6 */ { MAP_INPUT, "Time", NULL, sizeof(kcg_float64), (size_t)&inputs_ctx.Time, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INPUT, "Stop", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Stop, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "Frequency", NULL, sizeof(kcg_float64), (size_t)&inputs_ctx.Frequency, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 9 }
};
const MappingScope scope_1 = {
    "Controller/ Controller",
    scope_1_entries, 10
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
