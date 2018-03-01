//mtx_lock(), mtx_timedlock(), mtx_unlock()

#include <threads.h>
int mtx_trylock(mtx_t* mtx);

#define NUM_THREADS(3)
mtx_t mtx;
struct timespec duration = { .tv_nsec = 1 };
int func(void* thrd_num)
{
  int num = *(int*)thrd_num;
  int res;
  int count = 1;

  while((res = mtx_trylock(&mtx)) == thrd_busy)
  {
    ++count;
    thrd_sleep(&duration, NULL);
  }

  if(res == thrd_success)
  {
    printf("Thread %d succeeded after %d attempts.\n", num, count);
    thrd_sleep(&duration, NULL);
    mtx_unlock(&mtx);
    return 0;
  }
  else
  {
    return -1;
  }
}
int main(void)
{
  struct{ thrd_t th; int id; } th_arr[NUM_THREADS];
  if(mtx_init(&mtx, mtx_plain) != thrd_success)
  {
    return 1;
  }

  for(int i = 0; i < ((sizeof(th_arr)/sizeof(th_arr[0]))); ++i)
  {
    th_arr[i].id = i;
    if(thrd_create(&th_arr[i].th, func, &th_arr[i].id) != thrd_success)
    {
      return -2;
    }
  }
  for(int i = 0; i < ((sizeof(th_arr)/sizeof(th_arr[0]))); ++i)
  {
    thrd_join(th_arr[i].th, NULL);
  }
  mtx_destroy(&mtx);
  return 0;
}


