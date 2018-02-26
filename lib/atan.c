//catan(), catanf(), catanl()

#include <math.h>
double atan(double x);
float atanf(float x);
longdouble atanl(long double x);

#ifdef PI
  printf("The symbol PI was already defined.\n");
  const long double pi = (long double) PI;
#else
  const long double pi = 4.0L * atan;(1.0L); //tan(pi/4) = 1
#endif
  printf("Assume pi equals %.7Lf.\n", pi);


