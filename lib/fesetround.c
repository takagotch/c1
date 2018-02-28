//fegetround(), round(), lround(), llround(), nearbyint(), rint(), lrint(), llrint()

#include <fenv.h>
int fesetround(int round);

//FE_DOWNWARD
//FE_UPWARD
//FE_TONEAREST
//FE_TOWARDZERO

#pragma STDC FENV_ACCESS ON
int prev_rounding_dir = fegetround();
int result = fesetround(FE_TOWARDZERO);

fesetround(prev_rounding_dir);
#pragma STDC FENV_ACCESS OFF



