/* MTC Instrumenter Wrapper generated file */
/* DO NOT EDIT                             */

#ifndef GenericInputChanged_MTC_Utils_float64_H_
#define GenericInputChanged_MTC_Utils_float64_H_

#include "kcg_types.h"

/* GenericInputChanged(float64) */

typedef struct {
    kcg_bool Output;
    kcg_bool Ready;
    kcg_float64 Memory;
} outC_GenericInputChanged_MTC_Utils_float64;

extern void GenericInputChanged_init_MTC_Utils_float64(outC_GenericInputChanged_MTC_Utils_float64* outC);
extern void GenericInputChanged_reset_MTC_Utils_float64(outC_GenericInputChanged_MTC_Utils_float64* outC);
extern void GenericInputChanged_MTC_Utils_float64(kcg_float64 Input, outC_GenericInputChanged_MTC_Utils_float64* outC);

#endif /* GenericInputChanged_MTC_Utils_float64_H_ */
