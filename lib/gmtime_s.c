//gmtime(), localtime(), localtime_s(), strftime(), time()

#include <time.h>
struct tm* gmtime_s(const time_t* restrict timer, struct tm* restrict result);

#define __STDC_WANT_LIB_EXT1__ 1
#include <time.h>

time_t now;
struct tm tmStruct;
char timeStr[26];
time(&now);
if(gmtime_s(&now, &tmStruct) != NULL
	&& asctime_s(timeStr, sizeof(timeStr), &tmStruct) == 0)
{
  printf("The current universal time (UTC): %s\n", timeStr);
}


