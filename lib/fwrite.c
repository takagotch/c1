//fread()
//fputs(), fprintf()


#include <stdio.h>
size_t fwrite(const void* restrict buffer, size_t size, size_t n,
		FILE* restrict fp);

typedef struct{
  char name[64];
}item;

#define CACHESIZE 32
item itemcache[CACHESIZE];

FILE* fp = fopen("items.dat");
if(fp == NULL)
{
  perror("Opening data file");
  return -1;
}
int writecount = fwrite(itemcache, sizeof(item), CACHESIZE, fp);

