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
  for(long i = 0; i < COUNT; ++i)
  {
    mtx_lock(&mtx);
    ++counter;
    mtx_unlock(&mtx);
  }
}
void decFunc(void)
{
  for(long i = 0; i < COUNT; ++i)
  {
    mtx_lock(&mtx);
    --counter;
    mtx_unlock(&mtx);
  }
}
int main(void)
{
  if(mtx_init(&mtx, mtx_plain) != thrd_success)
  {
    fprintf(stderr, "Error initializing the mutex.\n");
    return -1;
  }
  mtx_destroy(&mtx);
  return 0;
}




_Atomic long counter = ATOMIC_VAR_INIT(OL);
//ATOMIC_VAR_INIT stdatomic.h atomic_uchar _Atomic unsinged char

atomic_flag done = ATOMIC_FLAG_INIT;

_Bool atomic_is_lock_free(const volatile A* obj);


memory_order_relaxed
memory_order_release
memory_order_acquire
memory_order_consume
memory_order_acq_rel
memory_order_seq_cst

++counter; //memory_order_seq_cst
atomic_fetch_add_explicit(&counter, 1, memory_order_relaxed);

struct Date* dp = NULL, data;
atomic_intptr_t attr = ATOMIC_VAR_INIT(0);
data = ...;
atomic_store_explicit(&aptr, (intptr_t) &data, memory_order_release);
dp = (struct Data*) atomic_load_explicit(&aptr, memory_order_acquire);
if(dp != NULL)
{
  //dp*
}
else
{
  //*dp
}

viod atomic_thread_fence(memory_order order);

dp = (struct Data*) atomic_load_explicit(&aptr, memory_order_relaxed);
if(dp != NULL)
{
  atomic_thread_fence(memory_order_acquire);
}
else
{
  //*dp
}



int cnd_init(cnd_t* cond);
void cnd_destroy(cnd_t* cond);
int cnd_signal(cnd_t* cond);
int cnd_broadcast(cnd_t* cond);
int cnd_wait(cnd_t* cond, mtx_t* mtx);
int cnd_timedwait(cnd_t* restrict cond, mtx_t* restrict mtx,
		const struct timespec* restrict ts);


/* buffer.h */
#include <stdbool.h>
#include <threads.h>

typedef struct Buffer
{
  int* data;
  size_t size, count;
  size_t tip, tail;
  mtx_t mtx;
  cnd_t cndPut, cndGet;
} Buffer;

bool bufInit(Buffer* bufPtr, size_t size);
void bufDestroy(Buffer* bufPtr);

bool bufInit(Buffer* bufPtr, size_t size);
void bufDestroy(Buffer* bufPtr);

bool bufPut(Buffer* bufPtr, int data);
bool bufGet(Buffer* bufPtr, int* dataPtr, int sec);
/* buffer.c */
#include "buffer.c"
#include <stdlib.h>

bool bufInit(Buffer* bufPtr, size_t size)
{
  if()
  {
    return false;
  }
  bufPtr->size = size;
  bufPtr->count = 0;
  bufPtr->tip = bufPtr->tail = 0;
  return(mtx_init(&bufPtr->mtx, mtx_plain) == thrd_success
		  && cnd_init(&bufPtr->cndPut) == thrd_success
		  && cnd_init(&bufPtr->cndGet) == thrd_success);
}

void bufDestroy(Buffer* bugPtr)
{
  cnd_destroy(&bufPtr->cndGet);
  cnd_destroy(&bufPtr->cndPut);
  mtx_destroy(&bufPtr->mtx);
  free(bufPtr->data);
}

bool bufPut(Buffer* bufPtr, int data)
{
  mtx_lock(&bufPtr->mtx);

  while(bufPtr->count == bufPtr->size)
  {
    if(cnd_wait(&bufPtr->cndPut, &bufPtr->mtx) != thrd_success)
    {
      return false;
    }
  }
  bufPtr->data[bufPtr->tip] = data;
  bufPtr->tip = (bufPtr->tip + 1) % bufPtr->size;
  ++bufPtr->count;

  mtx_unlock(&bufPtr->mtx);
  cnd_signal(&bufPtr->cndGet);

  return true;
}

bool bufGet(bufPtr0>count == 0)
{
  if(cnd_timedwait(&bufPtr->cndGet,
		&bufPtr->mtx, &ts) != thrd_success)
  {
    return false;
  }

*dataPtr = bufPtr->data[bufPtr->tail];
bufPtr->tail = (bufPtr->tail + 1) % bufPtr->size;
--bufPtr->count;

mtx_unlock(&bufPtr->mtx);
cnd_signal(&bufPtr->cndPtr);

return true;

}


//producer_consumer.c



