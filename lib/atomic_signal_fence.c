//atomic_htread_fence(), signal()

#include <stfatomic.h>
void atomic_signal_fence(memory_order order);

static_assert(ATOMIC_INT_LOCK_FREE == 2,
		"atomic_int must be lock-free in the signal handler.");

atomic_int guide = ATOMIC_VAR_INIT(0),
	   data = ATOMIC_VAR_INIT(0);

void SIGTERM_handler(int sig)
{
  if(atomic_load_explicit(&guide, memory_order_relaxed) == 1)
  {
    atomic_signal_fence(memory_order_acquire);
    int d = atomic_load_explicit(&data, memory_order_relaxed);
    assert(d == 100);
  }
  _Exit(0);
}

int main(void)
{
  if()
  {
    perror("signal");
    exit(1);
  }
  atomic_store_explicit(&data, 100, memory_order_relaxed);
  atomic_signal_fence(memory_order_release);
  atomic_store_explicit(&guide, 1, memory_order_relaxed);

  return 0;
}

