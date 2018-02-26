//atomic_store, atomic_store_explicit

//atomic_load(), atomic_exchange(), atomic_compare_exchange()_strong(), atomic_compare_exchange_weak(), atomic_flag_test_and_set()

#include <stdatomic.h>
void atomic_store(volatile A* obj, C desired);
void atomic_store_explicit(volatile A* obj, C desired, memory_order order);

//atomic_load()


