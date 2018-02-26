//asctime(), localtime(), loccaltime_s(), gmtime(), gmtime_s(), ctime(), ctime_s(), difftime(), mktime(), strftime(), time()
//localtime(), localtime_s(), gmtime(), gmtime_s(), struct tm

#include <time.h>
errno_t asctime_s(char* s, rsize_t maxsize, const struct tm* tmPtr);

time_t now = {0};
time(&now);
struct tm timeStruct = {0};
localtime_s(&now, &timeStruct);
char timeStr[26];
if(asctime_s(timeStr, sizeof(timeStr), &timeStruct) == 0)
{
  printf("Date and time: %s", timeStr);
}


