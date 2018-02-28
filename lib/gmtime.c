//



#include <time.h>
struct tm* gmtime(const time_t* timer);

//tm time.h struct tm time_t
struct tm{
  int tm_sec;   //0-60
  int tm_min;   //0-59
  int tm_hour;  //0-23
  int tm_mday;  //1-31
  int tm_mon;   //0-11
  int tm_year;  //1900
  int tm_wday;  //0-6
  int tm_yday;  //0-356
  int tm_isdst; //-1, 0, 1
};

//UTC
time_t rawtime;
time(&rawtime);

struct tm* ptr_tm = gmtime(&rawtime);
struct tm utc_tm;
memcpy(&utc_tm, ptr_tm, sizeof(struct tm));

ptr_tm = localtime(&rawtime);
struct tm local_tm;
memcpy(&local_tm, ptr_tm, sizeof(struct tm));

char buffer[1024] = "";
if(strftime(buffer, sizeof(buffer),
		"It's %A, %B, %d, %Y, %R o'clock, UTC.", &utc_tm))
{
  puts(buffer);
}
if(strftime(buffer, sizeof(buffer),
		"Here it's %A, %B, %d, %Y, %R o'clock, UTC %z.", &local_tm))
{
  puts(buffer);
}




