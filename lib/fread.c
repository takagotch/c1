//
//
#include <stdio.h>
size_t fread(void( restrict buffer, size_t size, size_t n,
	FILE* restrict fp);
	
typedef struct {
  char name[64];
} item;
#define CACHESIZE 32
FILE* fp;
if((fp = fopen("items.dat", "r+")))
{
  perror("Opening data file");
  return -1;
}
item itemcache[CACHESIZE];
int readcount = fread(itemcache, sizeof(item), CACHESIZE, fp);

