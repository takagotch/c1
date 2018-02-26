//

#include <stdlib.h>
int at_quick_exit(void (*func)(void));

static void nexit(void) { puts("Program terminated normally."); }
static void qexit(void) { puts("Programm terminated by \"quick_exit()\"."); }

int main(void)
{
  const int a = (-1);
  atexit(nexit);
  at_quick_exit(qexit);

  if(a < 0)
  {
    quick_exit(EXIT_FAILURE);
  }
  return 0;
}


