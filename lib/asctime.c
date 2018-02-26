//localtime(), localtime_s(), gmtime(), gmtime_s(), ctime(), ctime_s(), difftime(), mktime(), time()
//localtime(), localtime_s(), gmtime(), gmtime_s()
//ctime(&seconds), asctime(localtime(&seconds))

#include <time.h>
char* asctime(struct tm* systime);

time_t now = {0};
time(&now);
printf("Date: %.24s GMT\n", asctime(gmtime(&now)));

