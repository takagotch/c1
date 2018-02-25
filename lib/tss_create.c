//tss_delete(), tss_set(), tss_get()
//
#include <threads.h>
int tss_create(tss_t* key, tss_dtor_t dtor);

tss_t key; //TSS pointer global key
void destructor(void* data);
int main()
{
  if(tss_create(&key, destructor) != thrd_success)
  {
    return -1;
  }
  tss_delete(key);
  return 0;
}

