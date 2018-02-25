//tss_get(), tss_create(), tss_delete()
//
#include <threads.h>
int tss_set(tss_t* key, void* ptr);

tss_t key;
int process_data(void)
{
  Data_t* ptr = (Data_t*) tss_get(key); //TSS pointer
  return 0;
}

int thread_func(void* arg)
{
  const size_t size = size_data(arg);
  if(tss_set(key, malloc(size)) != thrd_success)
  {
    return -1;
  }
  return process_data();
}

