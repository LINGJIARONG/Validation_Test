/* MTC Instrumenter Wrapper generated file */
/* DO NOT EDIT                             */

#include "_2_GenericInputChanged_MTC_Utils_float643.h"

#define UNUSED(x) (void)(x)


/* GenericInputChanged(float64^3) */

void _2_GenericInputChanged_init_MTC_Utils_float643(outC__2_GenericInputChanged_MTC_Utils_float643* outC) {
    size_t i0;
    for (i0 = 0; i0 < 3; ++i0) {
        outC->Memory[i0] = 0;
    }
    outC->Ready = kcg_false;
    outC->Output = kcg_false;
}

void _2_GenericInputChanged_reset_MTC_Utils_float643(outC__2_GenericInputChanged_MTC_Utils_float643* outC) {
    /* the context shall not be reset */
    UNUSED(outC);
}

void _2_GenericInputChanged_MTC_Utils_float643(Data* Input, outC__2_GenericInputChanged_MTC_Utils_float643* outC) {
    if (!outC->Ready) {
        outC->Ready = kcg_true;
        outC->Output = kcg_false;
    }
    else {
        outC->Output = !(kcg_comp_Data(Input, &outC->Memory));
    }
    kcg_copy_Data(&outC->Memory, Input);
}

/* end */
