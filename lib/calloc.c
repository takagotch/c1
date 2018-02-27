//malloc(), realloc(), free(), memset()

#include <stdlib.h>
void* calloc(size_t n, size_t size);


size_t n;
printf("\nHow many intefers do you want to enter? ");
scanf("%u", &n);
int* p = (int*) calloc(n, sizeof(int));
if(p == NULL)
{
  printf("\uInsufficient memory.");
}
else
{
  /* digit array */
}


