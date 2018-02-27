//cnd_init(), cnd_wait(), cnd_signal()

#include <thread.h>
void cnd_destroy(cnd_t* cond);


static cnd_t cv;
int func(void)
{
  if(cnd_init(&cv) != thrd_success)
    {
      fputs("Initialization error.\n", stderr);
      return -1;
    }
  cnd_destroy(&cv);
  return 0;
}



