#ifndef MODELISATION_SURVEILLANCE_TEE_INTERFACE_H_
#define MODELISATION_SURVEILLANCE_TEE_INTERFACE_H_

#include "kcg_types.h"
#include "kcg_sensors.h"
#include "Controller.h"

/* context */

extern inC_Controller inputs_ctx;
extern outC_Controller outputs_ctx;

#ifdef __cplusplus
extern "C" {
#endif

/* simulation */

int SimInit(void);
int SimReset(void);
int SimStep(void);
int SimStop(void);

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* MODELISATION_SURVEILLANCE_TEE_INTERFACE_H_ */
