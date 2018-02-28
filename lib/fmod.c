//remainder(), remquo()

#include <math.h>
double fmod(double x, double y);
float fmodf(float x, float y);
long double fmodl(long double x, long double y);


const int saverounding = fegetround();
fesetround(FE_TOWARDZERO);

const double people = -2.25;
const double apples = 3.3l
const double eachgets = rint(apples / people);
const double someleft = fmod(apples, people);

printf("If there are %+.2f of us and  %+.2f apples, \n"
	"each of us gets %+.2f, with %+.2f left over.\n"
	people, apples, eachgets, someleft);

fsetround(saverounding);

