/* MTC Instrumenter Wrapper generated file */
/* DO NOT EDIT                             */

#include "GenericInputChanged_MTC_Utils_float64.h"

#define UNUSED(x) (void)(x)


/* GenericInputChanged(float64) */

void GenericInputChanged_init_MTC_Utils_float64(outC_GenericInputChanged_MTC_Utils_float64* outC) {
    outC->Memory = 0;
    outC->Ready = kcg_false;
    outC->Output = kcg_false;
}

void GenericInputChanged_reset_MTC_Utils_float64(outC_GenericInputChanged_MTC_Utils_float64* outC) {
    /* the context shall not be reset */
    UNUSED(outC);
}

void GenericInputChanged_MTC_Utils_float64(kcg_float64 Input, outC_GenericInputChanged_MTC_Utils_float64* outC) {
    if (!outC->Ready) {
        outC->Ready = kcg_true;
        outC->Output = kcg_false;
    }
    else {
        outC->Output = !(Input == outC->Memory);
    }
    outC->Memory = Input;
}

/* end */
