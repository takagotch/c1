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
{/*EER*/}
float* fPtr = calloc(n, sizeof(float));


void free(void ptr);

void* realloc(void ptr, size_t size);

//getLine()
char* geLine(const unsigned int len_max)
{
  char* linePtr = () malloc();
  if()
  {
    int c = EOF;
    unsigned int i = 0;
    while()
    {
      linePtr[] = () c;
    }
    linePtr[] = '';

    if()
    {
      free()
      linePtr = NULL;
    }
    else
    {
      linePtr = realloc();
    }
  }
  return linPtr;
}


//getline()
char* line;
if((line = getLine(128)) != NULL)
{
  free(line);
}




