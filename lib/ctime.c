//asctime(), asctime_s(), difftime(), gmtime(), gmtime_s(), localtime(), localtime_s(), mktime(), strftime(), time()

#include <time.h>
char* ctime(const time_t* seconds);



static void logerror(int errorcode)
{
  time_t eventtime = {0};
  time(&eventtime);
  fprintf(stderr, "%s: Error number %d occurred.\n",
	ctime(&eventtime), errorcode);
}
