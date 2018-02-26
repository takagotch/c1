//atomic_flag_test_and_set, atomic_flag_test_and_set_explicit

//atomic_flag_clear()

#include <stdatomic.h>
_Bool atomic_flag_test_and_set(volatile atomic_flag* obj);
_Bool atomic_flag_test_and_set(volatile atomic_flag* obj,
		memory_order order);

//atomic_flag_test_and_set()
atomic_flag lock = ATOMIC_FLAG_INIT;
{
  static int count;
  while(atomic_flag_test_and_set(&lock))
  {
    ;
  }
  ++count;
  printf("%3u, %s\n", count, msg);
  atomic_flag_clear(&lock);
}


