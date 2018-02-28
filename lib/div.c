//imaxdiv(), remainder()

#include <stdlib.h>
div_t div(int dividend, int divisor);
ldiv_t ldiv(long dividend, long divisor);
lldiv_t lldiv(long long dividend, long long divisor);

//<stdlib.h>
//typedef struct { int quot; int rem; } div_t;
//typedef struct { long int quot; lon int rem; } ldiv_t;
//typedef struct { long long int quot; long long int rem; } lldiv_t;

for(int apples = -3 ; apples < 6 ; apples += 3)
{
  if(apples == 0)
  {
    continue;
  }
  for(int people = -2 ; people < 4 ; people += 2)
  {
    if(people == 0)
    {
      continue;
    }
    div_t share = div(apples, people);
  }
  div_t share = div(apples, people);

  printf("If there are %+i of us and %+i apples, "
	"we each get %+i with %+i left over.\n",
	people, apples, share.quot, share.rem);
}

