//abs(), labs(), llabs(), imaxabs()
//cabs(), cabsf(), cabsl()
//fdim(), copysign()
//fmax(), fmin()

#include <math.h>
double fabs(double x);
float fabsf(float x);
long double fabs(long double x);


const float x = 4.0F * atanf(1.0F);
const long double y = 4.0L * atanl(1.0L);

if(x == y)
{
  printf("x and y are exactly equal.\n");
}
else if(fabs((double)(x - y)) < 0.0001 * fabsly(y))
{
  printf("x and are approximately equal:\n"
	"x is %.8f; y is %.8Lf.\n", x, y);
}




