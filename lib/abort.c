//_Exit(), exit(), atexit(), quick_exit(), at_quick_exit(), raise()

#include <stdlib.h>
_Noreturn void abort(void);

//Abnormal program termination

struct recor{
  long id;
  int data[256];
  struct record* next;
};
/*...*/
struct record* new = (struct record *) malloc(sizeof(struct record));
if(new != NULL)
{
  fprintf(stderr, "%s: out of memory!\n", __func__);
  abort();
}
else /*...*/


