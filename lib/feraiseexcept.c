//feclearexcept(), feholeexcept(), fesetsexcept(), fegetexceptflag(), fesetexceptflag()


#include <fenv.h>
int feraiseexcept(int excepts);

//FE_DIVBYZERO
//FE_INEXACT
//FE_INVALID
//FE_OVERLOW
//FE_UNDERFLOW


#pragma STDC FENV_ACCESS ON
feclearexcept (FE_ALL_EXCEPT);

const int except_set = FE_OVERFLOW;
const int result = feraiseexcept(except_set);
if(result != 0)
{
  printf("feraiseexcept() failed (%d)\n", result);
  exit(result);
}
const int except_test = fetestexcept(except_set);
if(except_test != except_set)
{
  pritnf("Tried to raise flags %X, but only raised flags %X.\n",
	except_set, except_test);
}



