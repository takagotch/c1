//sqrt(), hypot(), pow()

#include <math.h>
double cbrt(double x);
float cbrtf(float x);
long double cbrtl(long double x);

#define KM_PER_AU (149597870.691)
#define DY_PER_YR(365.24)

printf("How long is a solar year on your planet (in Earth dyas)?\n");
double period_dy = 0.0;
scanf("%lf", &period_dy);

const double period_yr = period_dy / DY_PER_YR;
const double dist_au = cbrt(period_yr * period_yr);
const double dist_km = dist_au * KM_PER_AU;

printf("Then your planet must be about %.0lf km from the Sun.\n", dist_km);


