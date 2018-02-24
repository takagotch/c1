//malloc(), calloc(), free()
//
#include <stdlib.h>
void* realloc(void* ptr, size_t n);

typedef struct{
  int len;
  float array[];
}DynArray_t;

DynArray_t* daPtr = (DynArray_t*) malloc(sizeof(DynArray_t)
	+ 10 * sizeof(float));
if(daPtr == NULL)
{
  return -1;
}
daPtr->len = 10;

for(int i = 0; i < daPtr->len; ++i)
{
  daPtr->array[i] = 1.0F / (i+1);
}
/* daPtr->array[10] = 0.1F */

DynArray_t* daResizePtr = (DynArray_t*) realloc(daPtr,
		sizeof(DynArray_t) + 11 * sizeof(float));
if(daResizePtr != NULL)
{
 daPtr = daResizePtr;
 daPtr->len = 11;
 daPtr->array[10] = 0.1F / 12;
}
else
{
  return -1;
}

