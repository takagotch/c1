//atomic_exchnge, atomic_exchange_explicit

//atomic_compare_exchange_strong(), atomic_compare_exchange_weak(), atomic_load(), atomic_store(), atomic_flag_test_and_set()



#include <stdatomic.h>
C atomic_exchange(volatile A* object, C desired);
C atomic_exchange_explicit(volatile A* object, C desired, memory_order order);



atomic_bool lock = ATOMIC_VAR_INIT(false); //false, true

void func(char* msg)
{
  static int count;
  while(atomic_exchange(&lock, true))
  {
    ;
  }
  ++count;
  printf("%3u. %s\n", count, msg);
  lock = false;
}
#define NUM_THREADS 20

int main()
{
  struct { thrd_t th; char msg[32];} th_arr[NUM_THREADS];

  for(int i = 0; i < NUM_THEREADS; ++i)
  {
    sprintf(th_arr[i].msg, "Thread %2su", i);
    if(thrd_create(&th_arr[i].th, (thrd_start)func,
		(void*)th_arr[i].msg) != thrd_success)
    {
      return EXIT_FAILURE;
    }
  }
  for(int i = 0; i < NUM_THREADS; ++i)
  {
    thrd_join(th_arr[i].th, NULL);
  }
  return EXIT_SUCCESS;
}

