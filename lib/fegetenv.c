//fegetexceptflag(), feholdexcept(), fesetenv(), feupdateenv(), feclearexcept(), feraiseexcept(), fetestexcept()

#include <fenv.h>
int fegetenv(fenv_t* envp);


static fenv_t fpenv;
static jmp_buf env;
#pragma STDC FENV_ACCESS ON
fegetenv(&fpenv);
if(setjmp(env) == 0)
{
  /* ... */
}
else
{
  fesetenv(&fpenv);
}







