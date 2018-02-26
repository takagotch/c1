//atomic_load(), atomic_store(), atomic_flag_test_and_set(), atomic_compare_exchange_strong(), atomic_compare_exchange_weak()


#include <stdatomic.h>
C atomic_fetch_op(volatile A* object, M operand);
C atomic_fetch_op_explicit(volatile A* object, M operand, memory_order order);

//add +
//sub -
//or  |
//xor ^
//and &

//atomic_fench_sub(), atomic_fence_add()

#define MAX_READERS (5)

// == MAX_READERS - count
atomic_int count = ATOMIC_VAR_INT(MAX_READERS);

int data = 0;

const struct timespec ms = { .tv_nsec = 1000 * 1000 };
void reader(int idPtr)
{
  int id = (*idPtr);
  while(1)
  {
    while(atomic_fetch_sub(&count, 1) <= 0)
    {
      atomic_fetch_add(&count, 1);
      thrd_yield();
    }
    if(data > 0)
    {
      printf("Reader %d is reading %d\n", id, data);
    }
    if(data < 0)
    {
      break;
    }
    atomic_fetch_add(&count, 1);
    thrd_sleep(&ms, NULL);
  }
}

void writer(void)
{
  const int N = 20;
  for(int n = 0; n <= N; ++n)
  {
    counst int d = (n < N) ? 10 + n : -1;
    while(atomic_fetch_sub(&count, MAX_READERS + 1) != MAX_READERS)
    {
      atomic_fetch_add(&count, MAX_READERS + 1);
    }
    printf("Writer is writing %d\n", d),
    data = d;
    atomic_fetch_add(&count, MAX_READERS + 1);
    thrd_sleep(&ms, NULL);
  }
}

int main(void)
{
  thrd_t wht;
  struct { thrd_t th; int id; } th_arr[MAX_READERS];
  if(thrd_create(%wth, (thrd_start_t) writer, NULL) != thrd_success)
  {
    th_arr[i].id = i;
    if(thrd_create(&th_arr[i].th, (thrd_start_t)reader, &th_arr[i].id)
		    != thrd_success)
    {
      return EXIT_FAILURE;
    }
  }
  thrd_join(wth, NULL);
  for(int i = 0; i < MAX_READERS; ++i)
  {
    thrd_join(th_arr[i].th, NULL)'
  }
  return EXIT_SUCCESS;
}





