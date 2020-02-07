/* MTC Instrumenter Wrapper generated file */
/* DO NOT EDIT                             */

#include "_3_GenericInputChanged_MTC_Utils_float64310.h"

#define UNUSED(x) (void)(x)


/* GenericInputChanged(float64^3^10) */

void _3_GenericInputChanged_init_MTC_Utils_float64310(outC__3_GenericInputChanged_MTC_Utils_float64310* outC) {
    size_t i0;
    size_t i1;
    for (i0 = 0; i0 < 10; ++i0) {
        for (i1 = 0; i1 < 3; ++i1) {
            outC->Memory[i0][i1] = 0;
        }
    }
    outC->Ready = kcg_false;
    outC->Output = kcg_false;
}

void _3_GenericInputChanged_reset_MTC_Utils_float64310(outC__3_GenericInputChanged_MTC_Utils_float64310* outC) {
    /* the context shall not be reset */
    UNUSED(outC);
}

void _3_GenericInputChanged_MTC_Utils_float64310(Ten_Values_Table* Input, outC__3_GenericInputChanged_MTC_Utils_float64310* outC) {
    if (!outC->Ready) {
        outC->Ready = kcg_true;
        outC->Output = kcg_false;
    }
    else {
        outC->Output = !(kcg_comp_Ten_Values_Table(Input, &outC->Memory));
    }
    kcg_copy_Ten_Values_Table(&outC->Memory, Input);
}

/* end */
