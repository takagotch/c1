//ATOMIC_type_LOCK_FREE

#include <stdatomic.h>
_Bool atomic_is_lock_free(const volatile A* obj);

_Atomic(int_least64_t) avar64 = ATOMIC_VAR_INIT(0);
if(atomic_is_lock_free(&avar64))
{ /* avar64; mutex */ }

