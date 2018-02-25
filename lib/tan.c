//sin(), con(), atan()
//ctan(), ctanf(), ctanl()
//
#include <math.h>
double tan(double x);
float tanf(float x);
long double tanl(long double x);

const double pi = 4.0 * atan(1.0);  //tan(pi/4) = 1
const double shadow_length = 85.5;
const double angle = 36.2;
const double height = shadow_length * tan(angle * pi / 180.0);

printf("The tower is %.2f meters high.\n", height);


