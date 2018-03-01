//mtx_destroy(), mtx_lock(), mtx-timedlock(), mtx-trylock(), mtx_unlock(), cnd_wait(), cnd_timedwait()

#include <threads.h>
int mtx_init(mtx_t* mtx, int mutextype);

//mtx_plain mutex
//mtx_timed mutex
//mtx_plain|mtx_recursive mutex
//mtxtimed|mtx_recursive mutex


mtx_t mtx;
int main()
{
  if(mtx_init(&mtx, mtx_plain) != thrd_success)
  {
    fputs("Error initializing the mutex.\n", stderr);
    return -1;
  }
  mtx_destroy(&mtx);
  return 0;
}

