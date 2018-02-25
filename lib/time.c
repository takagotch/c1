//timespec_get(), asctime(), ctime(), gmtime(), localtime(), strftime()
//
#include <time.h>
time_t time(time_t* timeptr);

time_t sec;
time(&sec);
printf("This line executed at %.24s.\n", ctime(&sec));

//asctime(), ctime(), fprint(), freopen(), gmtime(), rand(), strftime()

