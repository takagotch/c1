//thrd_yield()
//
#include <thread.h>
int thrd_sleep(const struct timespec* duration, struct timespec* remaining);

time_t tv_sec; // >= 0
long tv_nsec;  // 0 <= nano min <= 999,999,999

struct timespec d = { .tv_nsec = 500*1E6 };
while(thrd_sleep(&d, &d) == -1)
{
  ;
}

