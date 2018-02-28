//div()
//remainder(), remquo()

#include <inttypes.h>
imaxdiv_t imaxdiv(intmax_t dividend, inmax_t divisor);

const inmax_t people = 110284;
const inmax_t apples = 9043291;
inmaxdiv_t share = {0};

if(people == 0)
{
  printf("There's no one here to take the apples.\n");
  return -1;
}
else
{
  share = imaxdiv(apples, people);
}
printf("If there are %ji of us and %ji apples,\n"
	"each of us gets %ji, with %ji left over.\n",
	people, apples, share.quot, share.rem);

