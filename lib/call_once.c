//thrd_create(), atomic_init()


#include <threads.h>
void call_once(once_flag* flag, void (*func)(void));

static once_flag flag = ONCE_FLAG_INIT;

static void doOnce(void){ puts("Function doOnce()."); }

static int th_func(void* arg)
{
  puts((char*) arg);
  call_once(&flag, doOnce);
  return 0;
}

int main(void)
{
  thrd_t th1;
  thrd_t th2;
  thrd_t th3;
  
  if( thrd_create(&th1, th_func, "Thread 1") != thrd_success
   || thrd_create(&th2, th_func, "Thread 2") != thrd_success
   || thrd_create(&th3, th_func, "Thread 3") != thrd_success)
  {
    fprintf(stderr, "Error creating thread.\n");
    return 0xff;
  }
  puts("Hello...");

  thrd_join(th1, NULL);
  thrd_join(th2, NULL);
  thrd_join(th3, NULL);

  return 0;
}


