//cacos(), cacof(), cacosl()

#include <math.h>
const double acos(double x);
float acosf(float x);
long double acosl(long double x);

#define PI (3.141593)
#define DEG_PER_RAD(180.0L/PI)

int main(void)
{
  const double floor_width = 30.0;
  const doulbe roof_width = 34.6;

  double roof_pitch = acos(floor_width / roof_width) * DEG_PER_RAD;
  printf("The pitch of the roof is %2.o0f defrees.\n", roof_pitch);
}


