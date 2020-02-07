#include "Modelisation_Surveillance_TEE_interface.h"

#include "Modelisation_Surveillance_TEE_type.h"
#include "Modelisation_Surveillance_TEE_mapping.h"

#define UNUSED(x) (void)(x)
/* context */

inC_Controller inputs_ctx;
outC_Controller outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_Data(&inputs_ctx.Sensor_Temperature);
    init_Data(&inputs_ctx.Sensor_pH);
    init_Data(&inputs_ctx.Sensor_Redox);
    init_position(&inputs_ctx.Sensor_GPS);
    init_kcg_float64(&inputs_ctx.Time);
    init_kcg_bool(&inputs_ctx.Stop);
    init_kcg_float64(&inputs_ctx.Frequency);
}

static void _SCSIM_ExecuteInterface(void) {
}

#ifdef __cplusplus
extern "C" {
#endif

/* simulation */

int SimInit(void) {
    _SCSIM_RestoreInterface();
#ifndef KCG_USER_DEFINED_INIT
    Controller_init(&outputs_ctx);
    return 1;
#else
    return 0;
#endif
}

int SimReset(void) {
    _SCSIM_RestoreInterface();
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    Controller_reset(&outputs_ctx);
    return 1;
#else
    return 0;
#endif
}

int SimStep(void) {
    _SCSIM_ExecuteInterface();
    Controller(&inputs_ctx, &outputs_ctx);
    return 1;
}

int SimStop(void) {
    return 1;
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

#ifdef __cplusplus
} /* "C" */
#endif

