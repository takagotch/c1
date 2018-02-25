//strcoll(), strcmp(), wcsxfrm(), setlocale()
//
#include <string.h>
size_t strxfrm(char* restrict dest, const char* restrict src, size_t n)

typedef struct stringpair{
  char* original;
  char* xformed;
}Stringpair_t;

Stringpair_t stringpairs[] =
{{"Chavez", NULL}, {"Carron", NULL},
 {"Canoso", NULL}, {"Canoso", NULL},
 {"Carteno", NULL}, {"Cortillo", NULL},
 {"Cortiluz S.A.", NULL}, {"Corriando", NULL}};

char xformbuffer[1024];

int stringpaircmp(const void* p1, const void* p2);

setlocale(LC_COLLATE, "");

const size_t stringpairssize = sizeof(stringpairs)/sizeof(stringpairs[0]);
for(int i = 0; i < stringpairssize ; i++)
{
  stringpairs[i].xformed
	  = (char*) malloc(strxfrm(xformbuffer, stringpairs[i].original, 1024) + 1);
  if(stringpairs[i].xformed != NULL)
  {
    strcpy(stringpairs[i].xformed, xformbuffer);
  }
}
qsort();




