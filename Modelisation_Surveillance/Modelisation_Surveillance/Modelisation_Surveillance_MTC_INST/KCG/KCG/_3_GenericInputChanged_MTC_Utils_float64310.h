/* MTC Instrumenter Wrapper generated file */
/* DO NOT EDIT                             */

#ifndef _3_GenericInputChanged_MTC_Utils_float64310_H_
#define _3_GenericInputChanged_MTC_Utils_float64310_H_

#include "kcg_types.h"

/* GenericInputChanged(float64^3^10) */

typedef struct {
    kcg_bool Output;
    kcg_bool Ready;
    Ten_Values_Table Memory;
} outC__3_GenericInputChanged_MTC_Utils_float64310;

extern void _3_GenericInputChanged_init_MTC_Utils_float64310(outC__3_GenericInputChanged_MTC_Utils_float64310* outC);
extern void _3_GenericInputChanged_reset_MTC_Utils_float64310(outC__3_GenericInputChanged_MTC_Utils_float64310* outC);
extern void _3_GenericInputChanged_MTC_Utils_float64310(Ten_Values_Table* Input, outC__3_GenericInputChanged_MTC_Utils_float64310* outC);

#endif /* _3_GenericInputChanged_MTC_Utils_float64310_H_ */
