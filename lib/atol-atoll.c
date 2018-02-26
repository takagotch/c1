//atol, atoll
//atomic_compare_exchange_strong,
//atomic_compare_exchange_strong_explicit,
//atomic_compare_exchage_weak,
//atomic_compare_exchage_weak_explicit

//atomic_exchange(), atomic_exchange_explicit(), atomic_store(), atomic_store_explicit()


#include <stdatomic.h>
_Bool atomic_compare_exchange_strong(volatile A* object, C* expected, C desired);
_Bool atomic_compare_exchange_strong(volatile A* object,
	C* expected, C desired, memory_order success, memory_order failure);
_Bool atomic_compare_exchange_weak(volatile A* object, C* expected, C desired);
_Bool atomic_compare_exchange_weak(volatile A* object,
	C* expected, C desired, memory_order success, memory_order failure);

static long mulwith(volatile atomic_long* alPtr, long val) //*=
{
  long old_val = (*alPtr);
  long new_val;

  do{
    new_val = old_val * val;
  }while(! atomic_compare_exchange_weak(alPtr, &old_val, new_val));

  return new_val;
}



