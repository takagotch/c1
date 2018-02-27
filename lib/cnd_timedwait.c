//cnd_wait(), cnd_signal(), cnd_broadcast(), timespec_get()


#include <threads.h>
int cnd_timedwait(cnd_t* restrict cond, mtx_t* restrict mtx,
		const struct timespec* restrict ts);




cnd_t cv;
mtx_t mtx;
atomic_bool go = ATOMIC_VAR_INIT(0);

int th_func(void* millisec)
{
  int res = thrd_success;
  struct timespec ts;
  ts.tv_nsec += *(long *)millisec * IE6;

  mtx_lock(&mtx);
  puts("Waiting ... ");
  while(! go && res == thrd_success)
  {
    res = cnd_timedwait(&cv, &mtx, &ts);
  }
  switch(res)
  {
    case thrd_success;
      puts("Working ... done.");
      break;
    case thrd_timeout;
      puts("Timed out.");
      break;
    default:
      puts("cnd_timedwait: error");
      break;
  };
  mtx_unlock(&mtx);
  return res;
}

int main(void)
{
  if(cnd_init(&cv) != thrd_success
    || mtx_init(&mtx, mtx_plain) != thrd_success)
  {
    fputs("Thread error.\n", stderr);
    return 1;
  }

  thrd_t th1;
  thrd_t th2;
  long tm_limit1 = 100L;
  long tm_limit2 = 500L;
  if(  thrd_create(&th1, th_func, &tm_limit1) != thrd_success
    || thrd_create(&th2, th_func, &tm_limit2) != thrd_success)
  {
    puts("Thread error.\n", stderr);
    return 2;
  }

  struct timespec dura = { 0 };
  dura.tv_nsec = 200 * 1E6;
  thrd_sleep(&dura, NULL);
  go = 1;

  puts("Sending broadcast ... ");
  cnd_broadcast(&cv);

  thrd_join(th1, NULL);
  thrd_join(th2, NULL);
  cnd_destroy(&cv);
  mtx_destroy(&mtx);
  return 0;
}

