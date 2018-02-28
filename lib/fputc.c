//fgetc(), fputwc()



#include <stdio.h>
int fputc(int c, FILE* fp);


#define CYCLES 100000
#define DOTS 4
printf("Performing modulo operations ", CYCLES);
for(int count = 0; count < CYCLES; ++count)
{
  if(count % (CYCLES / DOTS) == 0)
  {
    fputc('.', stdout);
  }
}
printf(" done.\n");








