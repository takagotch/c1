//rint(), llrint(), round(), lround(), llround(), nearbyrint()

#include <math.h>
long lrint(double x);
long lrint(float x);
long lrintl(long double x);

double t_ambient;
int t_display;
char tempstring[128];
int saverounding = fegetround();
fesetround(FE_TONEAREST);
t_display = (int)lrint(t_ambient);
snprintf(tempstring, 128, "Current temperature: %d C\n", t_display);
fesetround(saverounding);


