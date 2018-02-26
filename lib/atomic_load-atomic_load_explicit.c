//atomic_load, atomic_load_explicit

//atomic_store(0, atomic_exchange(), atomic_compare_exchange_strong(), atomic_compare_exchnge_weak(), atomic_flag_test_and_set()

#include <stdatomic.h>
C atomic_load(volatile A* obj);
C atomic_load_explicit(volatile A* obj, memory_order order);

struct Data { double x; } data[10];
atomic_int ai = ATOMIC_VAR_INIT(0);

for(int i = 0; i < 10; i++)
{
  data[i].x = 0.5 * i;
}
atomic_store_explicit(&ai, 10, memory_order_release);

int n = atomic_load_explicit(&ai, memory_order_acquire);
if(n > 0)
{
  for(int i = 0; i < n; ++i)
  {
    printf("%8.2lf", data[i].x);
  }
  putchar('\n');
}
else
{
  printf("\nData not yet available.\n");
}


