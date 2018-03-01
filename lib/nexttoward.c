//nextafter(), nearbyint(), rint(), lrint(), llrint(), round(), lround(), llround(), ceil(), floor()

#include <math.h>
double nexttoward(double x, long double y);
float nexttowardf(float x, long double y);
long double nexttowardl(long double x, long double y);

float x = nextotwardf(0.0F, -1E-100L);
printf("The greatest negative floating-point number \n"
	"(i.e, the closest to zero) with type float: %E\n", x);


