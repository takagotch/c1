//atomic_flag_clear, atomic_flag_clear_explicit

//atomic_flag_test_and_set()

#include <stdatomic.h>
void atomic_flag_clear(volatile atomic_flat* obj);
void atomic_flag_explicit(volatile atomic_flag* obj, memory_order order);

//atomic_flag_test_set()

