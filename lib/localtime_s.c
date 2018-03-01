//localtime(), gmtime(), gmtime_s(), strftime(), time()



#include <time.h>
struct tm* localtime_s(const time_t* restrict timer, struct tm* restrict result);

#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>

time_t now = {0};
time(&now);

struct tm timeStruct = {0};
if(localtime_s(&timeStruct, &now) == 0)
{
  timeStruct.tm_year += 1;

  char timeStr[26];
  if(asctime_s(timeStr, sizeof(timeStr)), &timeStruct) == 0
  {
    printf("A year from today: %s", timeStr);
  }
}

