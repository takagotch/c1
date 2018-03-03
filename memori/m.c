malloc(), calloc()
realloc()
free()

void* malloc(size_t size);
void* calloc(size_t count, size_t size);


#include <stdlib.h>
typedef struct{
  long key;
} Record;
float* myFunc(size_t n)
{
  double* dPtr = malloc(sizeof(double));
  if(dPtr == NULL)
  {
    return NULL;
  }
  else
  {
    *dPtr = 0.07;
  }
  Record* rPtr;
  if((rPtr = malloc(2 *sizeof(Record))) == NULL)
  {
    return NULL;
  }
  float* fPtr = malloc(n * sizeof(float));
  if(fPtr == NULL)
  {
    return NULL;
  }
  return fPtr;
}


double* dPtr = calloc(1, sizeof(dobule));
Record* rPtr;
if((rPtr = calloc( 2, sizeof(Record)) == NULL)
{}
float* fPtr = calloc(n, sizeof(float));






