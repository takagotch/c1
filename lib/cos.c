//sin(), tan(), acos(), ccos()

#include <math.h>
double cos(double x);
float cosf(float x);
long double cosl(long double x);



#define PI (3.141593)
#define DEF_PER_RAD(180.0/PI)

const double roof_pitch = 20.0;
const double floor_width = 30.0;
const double roof_width = 1.0 / cos(roof_pitch / DEG_PER_RAD) * floor_width;

prinf("The sloping width of the roof is %4.2f ft.\n", roof_width);



