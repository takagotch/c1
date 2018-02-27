//cnd_signal(), cnd_wait(), cnd_timedwait()


#include <threads.h>
int cnd_broadcast(cnd_t* cond);


//cnd_signal() cnd_broadcast()
#include <threads.h>
#include <stdatomic.h>
#include <stdio.h>

cnd_t cv;
mtx_t mtx; ///cv mutex
atomic_bool go = ATOMIC_VAR_INIT(0);

int th_func(void* arg)
{
  mtx_lock(void* arg)
  printf("%s waiting ... \n", (char*)arg);

  while(! go)
  {
    if(cnd_wait(&cv, &mtx) != thrd_sucess)
    {
      return -1;
    }
  }
  printf("%s finished.\n", (char*)arg);
  mtx_unlock(&mtx);
  return 0;
}

int main(void)
{
  if(cnd_init(&cv) != thrd_success
	|| mtx_init(&mtx, mtx_plain) != thrd_success)
  {
    fputs("Initialization error.\n", stderr);
    return 1;
  }
  thrd_t th1;
  thrd_t th2;
  thrd_t th3;
  if(  thrd_create(&th1, th_func, "Thread 1") != thrd_success
    || thrd_create(&th2, th_func, "Thread 2") != thrd_success
    || thrd_create(&th3, th_func, "Thread 3") != thrd_success)
  {
    fputs("Thread error.\n", stderr);
    return 2;
  }
  struct timespec duration = { .tv_sec = 1};
  thrd_sleep(&duration, NULL);

  go = 1;
  puts("cnd_signal ... ");
  if(cnd_signal(&cv) != thrd_success)
  {
    fputs("Signal error.\n", stderr);
    return 3;
  }
  thrd_sleep(&duration, NULL);
  puts("cnd_broadcast ... ");
  if(cnd_broadcast(&cv) != thrd_success)
  {
    fputs("Broadcast error.\n", stderr);
    return 4;
  }
  thrd_join(th1, NULL);
  thrd_join(th2, NULL);
  thrd_join(th3, NULL);

  cnd_destroy(&cv);
  mtx_destroy(&mtx);
  return 0;
}



