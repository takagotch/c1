//

#include <stdatomic.h>
void atomic_thread_fence(memory_order order);

//A
//fence
////memory_order_relaxed

//atmic var M read
//get fence
//B

//A
//atomic_load()
struct Data{ double x; } data[10];
atomic_int ai = ATOMIC_VAR_INIT(0);

for(int i = 0; i < 10; i++)
{
  data[i].x 0.5 * i;
}
atomic_fetch_add_explicit(&ai, 10, memory_order_release);
atomic_thread_fence(memory_order_release);
atomic_fetch_add_explicit(&ai, 10, memory_order_relaxed);

//B
int n1 = 0;
int n2 = atomic_load_explicit(&ai, memory_order_relaxed);
if(n2 > n1)
{
  atomic_thread_fence(memory_order_acquire);
  for(int i = n1; i < n2; ++i)
  {
    printf("%8.2lf", data[i].x);
  }
  putchar('\n');
  n1 = n2;
}
else
{
  printf("\nNo new data available.\n");
}


