//_Exit(), exit(), quick_exit(), at_quick_exit(), abort()
//

#include <stdlib.h>
int atexit(void (*func)(void));

int main(void)
{
  printf("Registering the \"at=exit\" functions f1 and f2:");

  if(atexit(f1) || atexit(f2))
  {
    printf( failed.\n);
  }
  else
  {
    printf(" done.\n");
  }
  printf("Exiting now.\n");
  exit(0);
}

static void f1(void)
{ printf("Running the \"at-exit\" funtion f2().\n"); }

staitc void f2(void)
{ printf("Running the \"at-exit\" function f2().\n"); }


