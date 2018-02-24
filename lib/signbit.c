//fpclassify(), isfinite(), isinf(), iscan(), isnormal()
//
#include<math.h>
int sigbit(x);

const double x[] = {-0.0, 187.234, sqrt(-1.0), 1.0 / -0.0};
for(int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
{
  printf("x[%d] equals %lf, and is%s negative.\n",
	 i, x[i], signbit(x[i]) ? "" : " not");
}

//isunordered()

