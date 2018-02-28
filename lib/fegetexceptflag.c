//fesetexceptflag(), feraiseexcept(), feclearexcept(), fetestexcept()

#include <fenv.h>
int fegetexceptflag(fexcept_t* flagp, int excepts);

/* FE_INEXACT, FE_UNDERFLOW, FE_OVERFLOW */
fexcept_t fpexcepts;
#pragma STDC FENV_ACCESS ON
fegetexceptflag(&fpexcepts, FE_INEXCT | FE_UNDERFLOW | FE_OVERFLOW);
feclearexcept(FE_INEXACT |FE_UNDERFLOW | FE_OVERFLOW);
fesetexceptflag(&fpexcepts, FE_INEXACT | FE_UNDERFLOW | FE_OVERFLOW);


