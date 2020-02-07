#include "Modelisation_Surveillance_interface.h"
#include "Modelisation_Surveillance_type.h"
#include "Modelisation_Surveillance_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_Controller inputs_ctx;
static inC_Controller inputs_ctx_execute;
outC_Controller outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_Data(&inputs_ctx.Sensor_Temperature);
    init_Data(&inputs_ctx_execute.Sensor_Temperature);
    init_Data(&inputs_ctx.Sensor_pH);
    init_Data(&inputs_ctx_execute.Sensor_pH);
    init_Data(&inputs_ctx.Sensor_Redox);
    init_Data(&inputs_ctx_execute.Sensor_Redox);
    init_position(&inputs_ctx.Sensor_GPS);
    init_position(&inputs_ctx_execute.Sensor_GPS);
    init_kcg_float64(&inputs_ctx.Time);
    init_kcg_float64(&inputs_ctx_execute.Time);
    init_kcg_bool(&inputs_ctx.Stop);
    init_kcg_bool(&inputs_ctx_execute.Stop);
    init_kcg_float64(&inputs_ctx.Frequency);
    init_kcg_float64(&inputs_ctx_execute.Frequency);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    kcg_copy_Data(&inputs_ctx_execute.Sensor_Temperature, &inputs_ctx.Sensor_Temperature);
    kcg_copy_Data(&inputs_ctx_execute.Sensor_pH, &inputs_ctx.Sensor_pH);
    kcg_copy_Data(&inputs_ctx_execute.Sensor_Redox, &inputs_ctx.Sensor_Redox);
    kcg_copy_position(&inputs_ctx_execute.Sensor_GPS, &inputs_ctx.Sensor_GPS);
    inputs_ctx_execute.Time = inputs_ctx.Time;
    inputs_ctx_execute.Stop = inputs_ctx.Stop;
    inputs_ctx_execute.Frequency = inputs_ctx.Frequency;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "e5fd1bc9186d7386d789a0b510fc659e";
const char* _SCSIM_SmuTypesCheckSum = "1d4140d2de3b3e910e8a148dd1cf7a1a";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    Controller_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    Controller_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_ControllerCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_ControllerCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_ControllerCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_ControllerCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_ControllerCIVTable != NULL && 
        pSimoutC_ControllerCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_ControllerCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    Controller(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_Controller);
    nSize += sizeof(outC_Controller);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_Controller));
    pCurrent += sizeof(inC_Controller);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_Controller));
    pCurrent += sizeof(outC_Controller);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_Controller));
    pCurrent += sizeof(inC_Controller);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_Controller));
    pCurrent += sizeof(outC_Controller);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
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

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

