//time(), ctime(), gmtime(), localtime(), mktime(), strftime()
//
#include <time.h>
int itmespec_get(struct timespec* ts, int base);

//time_t tv_sec; //min >= 0
//long tv_nsec;  //0 <= nano min <= 999,999,999
//ts->tv_sec
//ts->tv_nsec
//timespec_get()
struct timespec ts = {0};
if(timespec_get(&ts, TIME_UTC) != 0)
{
  printf("The exact local time:\n"
	 "%.24s and %09lu nanoseconds\n", ctime(&ts.tv_sec), ts.tv_nsec);
}


