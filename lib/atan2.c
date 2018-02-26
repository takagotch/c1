//

#include <math.h>
double atan2(double y, double x);
float atan2(float y, float x);
long double atan2l(long double y, long double x);

// x>0, y>0 0<=atan2(y,x)<=PI/2
// ...

#define PI(3.141593)
#define DEG_PER_RAD(180.0/PI)

const double adjacent = 3.0;
const double opposite = 4.0;
const double angle = atan2(opposite, adjacent) * DEG_PER_RAD;
printf("The acute angles of a 3-4-5 right triangle are %4.2f\x80"
	"and %4.2f\x80\n", angle, (double)90.0 - angle);

