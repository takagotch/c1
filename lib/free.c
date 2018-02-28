//malloc(), calloc(), readloc()

#include <stdlib.h>
void free(void* ptr);


/* 4096byte */
char* ptr = calloc(4096, sizeof(char));
if(ptr == NULL)
{
  fprintf(stderr, "Insufficient memory.\n");
  abort();
}
else
{
  strncpy(ptr, "Imagine this is a long string.\n", 4096);
  fputs(stdout, ptr);
  free(ptr);
}



