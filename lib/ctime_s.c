//ctime(), asctime(), asctime_s(), localtime(), localtime_s(), gmtime(), gmtime_s(), difftime(), mktime(), strftime(), time()

#include <time.h>
errno_t ctime_s(char* s, rsize_t maxsize, const time_t* timer);


#define __STDC_WANT_LIB_EXT1__ 1
#include <time.h>
time_t now = 0;
time(&now);
char timeStr[26];
if(ctime_s(timeStr, sizeof(timeStr), &now) == 0)
{
  printf("Date and time: %s", timeStr);
}



