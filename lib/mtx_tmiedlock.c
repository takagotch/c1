//mtx_lock(), mtx_trylock(), mtx_unlock(), mtx_init()

#include <threads.h>
int mtx_timedlock(mtx_t* restrict mtx, const struct timespec* restrict ts);

mtx_t mtx;
int func(void* thrd);

int main(void)
{
  thrd_t th;
  if(mtx_init(&mtx, mtx_timed) != thrd_success)
  {
    fputs("Initialization error.\n", stderr);
    return 1;
  }

  mtx_lock(&mtx);
  if(thrd_create(&th, func, "ThreadA") != thrd_success)
  {
    fputs("Thread error.\n", stderr);
  }
  return 2;
}

int func(void* thrd)
{
  struct timespec ts;
  timespec_get(&ts, TIME_UTC);
  ts.tv_sec += 3;

  printf("%s waiting ...\n", (char*)thrd);
  const int res = mtx_timedlock(&mtx, &ts);
  switch(res)
  {
    case thrd_success:
	    puts("Obtainde mutex\n... releaseing ...");
	    mtx_unlock(&mtx);
	    break;
    case thrd_timeout:
	    puts("Timed out.");
	    break;
    default:
	    puts("mtx_timedlock: error.");
	    break;
  };
  return res;
}

