//ceil(), round()
//trunc(), rint(), nearbyint(), nextafter()
//lrint(), lround(), llrint(), llround()
//fesetround(), fegetround()

#include <math.h>
double floor(dobule x);
float floorf(float x);
long double floorl(long double x);

/* Scale a point by independent x and y factors */
struct point { int x, y; };
int width_org = 1024, height_orig = 768;
int widht_new = 800, height_new = 600;
struct point scale(struct point orig)
{
  struct point new;
  new.x = (int) floor(orig.x * (double) width_new / (double) width_orig);
  new.y = (int) floor(orig.y * (double) height_new / (double) height_orig);
  return new;
}

