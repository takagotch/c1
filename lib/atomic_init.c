//ATOMIC_VAR_INIT  call_once()

#include <stdatomic.h>
void atomic_init(volatile A* obj, C value);

atomic_long count;
atomic_init(&count, 0L);


