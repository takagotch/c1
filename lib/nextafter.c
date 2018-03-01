//nexttoward(), newarbyint(), rint(), lrint(), llrint(), round(), lround(), llround(), ceil(), floor()

#include <math.h>
double nextafter(double x, double y);
float nextafterf(float x, float y)
long double nextafterl(long double x, long double y);

double x = nextafter(0.0, 1.0);
printf("The smallest positive number"
	"with the type double: %E\n", x);

