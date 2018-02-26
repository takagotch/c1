//abort(), exit(), atexit(), quick_exit(), at_quick_exit(), raise()

#include <stdlib.h>
_Noreturn void _Exit(int status);

int main(int argc, char* argv[])
{
  if(argc < 3)
  {
    fprintf(stderr, "Missing required arguments.\n");
    _Exit(-1);
  }

}


