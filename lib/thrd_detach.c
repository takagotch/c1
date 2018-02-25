//thrd_join()
//
#include <thread.h>
int thrd_detach(thrd_t thr);

static void independent_thread(void)
{
  puts("Working independently in the background ... ");
  thrd_exit(0);
}
static int create_independent_thread(void)
{
  thrd_t th;
  if(thrd_create(&th, (th_start_t)independent_thread, "") != thrd_success)
  {
    return -1;
  }
  if(thrd_detach(th) != thrd_success)
  {
    return -1;
  }
  puts("Started independent thread.");
  return 0;
}

