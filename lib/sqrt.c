//csqrt()
//cbrt(), hypot()
//
#include <math.h>
double sqrt(double x);
float sqrtf(float x);
long double sqrtl(long double x);

const double x[] = {0.5, 0.0, -0.0, -0.5};
for(int i = 0; i < (sizeof(x)/sizeof(x[0])); i++)
{
  printf("The square root of %.2f equals %.4f\n", x[i], sqrt(x[i]));
  if(errno)
  {
    perror(__FILE__);
  }
}

