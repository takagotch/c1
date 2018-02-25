//thrd_exit(), thrd_join(), thrd_detach(), thrd_current(), thrd_equal(), thrd_sleep(), thrd_yeild()
//
#include <thread.h>
int thrd_create(thrd_t* thr, thrd_start_t func, void* arg);

int th_func(void* arg)
{
  puts("Hello form th_func ... ");
  ++* (int*) arg;
  return 0;
}

int main(void)
{
  thrd_t th;
  int n = 1;

  if(thrd_create(&th, th_func, &n) != thrd_success)
  {
    printf(stderr, "Error createing thread.\n");
    return -1;
  }
  puts("Main thread here ... ");

  thrd_join(th, NULL);
  printf("The value of n is %d\n", n); //n == 2
  return 0;
}

