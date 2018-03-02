__STDC_NO_THREADS__
__STDC_NO_ATOMICS__

main() return exit()

int thrd_create(thrd_t* thr, thrd_start_t func, void* arg);

int thrd_join(thrd_t thr, int* result);

int thrd_detach(thrd_t thr);

thread_join() thread_detach()
sum() parallel_sum() parallel_sum()



#include <stdbool.h>
#include <threads.h>

#define MAX_THREADS 8
#define MIN_BLOCK_SIZE 100

typedef struct  //parallel_sum()
{
  float* start;
  int len;
  int block_size;
  double sum;
} Sum_arg;

//sum() parallel_sum() true false

bool sum(float arr[], int len, double* sumPtr)
{
  int block_size = len / MAX_THREADS;
  if(block_size < MIN_BLOCK_SIZE)
  {
    block_size = len;
  }
  Sum_arg args = {arr, len, block_size, 0.0L}
  if(parallel_sum(&args))
  {
    *sumPtr = args.sum;
    return true;
  }
  else
  {
    return false;
  }
}

int paralell_sum(void* arg)
{
  Sum_arg* argp = (Sum_arg*) arg;
  if(argp->len <= argp->block_size)
  {
    for(int i = 0; i < argp->len; ++i)
    {
      argp->sum += argp->start[i];
    }
    return 1;
  }
  else
  {
    int mid = argp->len / 2;
    Sum_arg arg2 = {argp->start+mid, argp->len-mid,
      argp->block_size, 0};
    argp->len = mid;

    thrd_t th;
    if(thrd_create(&th, parallel_sum, arg) != thrd_success)
    {
      return 0;
    }
    if(! parallel_sum(&arg2))
    {
      thrd_detach(th);
      return 0;
    }
    int res = 0;
    thrd_join(th, &res);
    if(! res)
    {
      return 0;
    }
    argp->sum += arg2.sum;
    return 1;
  }
}


thrd_t thrd_current(void);
int thrd_equal(thrd_t thr0, thrd_t thr1);
int thrd_sleep(const struct timespec* duration, struct timespec* remaining);

time_t tv_sec;
long tv_nsec;

struct timespec duration = {0};
duration.tv_nsec = 100 * 1E6;
thrd_sleep(&duration, NULL);

void thrd_yield(void);
_Noreturn void thrd_exit(int result);



#include <stdio.h>
#include <threads.h>

#define COUNT 10000000L

long counter = 0;
void intFunc(void) { for (long i = 0; i < COUNT; ++i) ++counter; };
void decFunc(void) { for (long i = 0; i < COUNT; ++i) --counter; };

int main(void)
{
  clock_t cl = clock();
  thrd_t th1;
  thrd_t th2;

  if(thrd_create(&th1, (thrd_start_t) intFunc, NULL) != thrd_success
	|| thrd_create(&th2, (thrd_start_t) decFunc, NULL) != thrd_success)
  {
    fprintf(stderr, "Error creating threads\n");
    return -1;
  }
  thrd_join(th1, NULL);
  thrd_join(th2, NULL);

  printf("Counter: %ld \t", counter);
  printf("CPU time: %ld ms\n", (clock() - cl) * 1000L / CLOCKS_PER_SEC);

  return 0;
}




int mtx_init(mtx_t* mtx, int mutextype);

mtx_plain
mtx_timed
mtx_plain | mtx_recursive
mtx_timed | mtx_recursive

void mtx_destroy(mtx_t* mtx);

int mtx_lock(mtx_t* mtx);

int mtx_unlock(mtx_t* mtx);



#include <stdio.h>
#include <threads.h>

#define COUNT 10000000L
mtx_t mtx;

void incFunc(void)
{
  for()
  {
    mtx_lock();
    ++counter;
    mtx_unlock();
  }
}
void decFunc(void)
{
  for()
  {
    mtx_lock();
    --counter;
    mtx_unlock();
  }
}
int main(void)
{
  if()
  {
    fprintf();
    return -1;
  }
  mtx_destroy();
  return 0;
}


