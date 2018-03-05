type* [type-qualifer-list] name [= initializer];

int* iPtr;

iPtr = &iVar;

int iVar = *iPtr = &iVar;

printf("Value of iPtr(i.e. the address of iVar): %p\n"
	"Address of iPtr: %p\n", iPtr, &iPtr);

#include <stdio.h>
FILE* fp = fopen("demo.txt", "r");
if(fp == NULL)
{
//
}

void* memset(void* sm int c, size_t n);

struct Data{ /* ... */ };
memset(&record, 0, sizeof(record));

int* iPtr = malloc(1000 * sizeof(int));

double x = 1.5;
char* cPtr = &x;
char* cPtr = (char*) &x;

double x = 0.0;
double* ptr = &x;
*ptr = 7.8;
*ptr *= 2.5;
double y = *ptr + 0.5;

double* ptr;

char c = 'A';
char* cPtr = &c;
char** cPtrPtr = &cPtr;

char c = 'A';
char** cPtrPtr = &(&c);

#include <stdlib.h>
typedef struct { long key; /* ... */ } Record;
_Bool newRecord(Record** ppRecord)
{
  *ppRecord = malloc(sizeof(Record));
  if(*ppRecord != NULL)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


Record* pRecord = NULL;
if(newRecord(&pRecord))
{
//
}


pRecord->key = 123456L;

//selection_sortf()
//swapf() float 
inline void swapf(float* p1, flaot* p2)
{
  *p1 = *p2;
  *p2 = tmp;
}

void selection_sortf(float a[], int n)
{
  if()
  {
    return;
  }

  register float* minPtr = a;
  for( ; a < last; ++a)
  {
    if(register float* p = a + 1; p <= last; ++p)
    {
      if(*p < *minPtr)
      {
        minPtr = p;
      }
    }
    swapf(a, minPtr);
  }
}



short const volatile* restrict ptr;

int var;
int* cosnt c_ptr = &var;
*c_ptr = 123;
++c_ptr;

int var;
const int c_car = 100;
*ptr_to_const;

prt_to_const = &c_var;
var = 2 * *ptr_to_const;
ptr_to_const = &var;
if(c_var < *ptr_to_const)
*ptr_to_const = 77;

int const c_var = 100;
int const* ptr_to_const;

int* ptr = &var;
*ptr = 77;
ptr_to_const = ptr;

*ptr_to_const = 77;
ptr = &c_var;

ptr = (int*)&c_var;
*ptr = 200;


void func(const int * const c_ptr_to_const);

typedef struct{
  long key;
} Data_t;
Data_t* restrict rPtr = malloc(sizeof(Data_t));

void* memcpy(void* restrict dest,
	const void* restrict src,
	size_t n);

char a[200];
memcpy(a+100, a, 100);
memcpy(a+1, a, 199);

void* memmove(void* dest, const void* src, size_t n);

//scalar_product()
double scalar_product()
{
  double result = 0.0;
  for(int i = 0; i < n; ++i)
  {
    result += (p1[i] * p2[i]);
  }
  return result;
}




int (* arrPtr)[10] = NULL;

int matrix[3][10];

arrPtr = matrix;
(*arrPtr)[0] = 5;
arrPtr[2][9] = 6;
++arrPtr;
(*arrPtr)[0] = 7;


arrPtr = a;

arrPtr = (int (*)[10])a;

typedef int ARRAY_t[10];
ARRAY_t a;
ARRAY_t* arrPtr;
arrPtr = (ARRAY_t*)a;


#define ARRAY_LEN 100
#define STRLEN_MAX 256
char myStrings[ARRAY_LEN][STRLEN_MAX] =
{
  "If anything can go wrong, it will",
  "Nothing is foolproof, because fools are so ingenious.",
  "Every solution breeds new problems."
};


#define ARRAY_LEN 100
char* myStrPtr[ARRAY_LEN] =
{
  "If anything can go wrong, it will",
  "Nothing is foolproof, because fools are so ingenious.",
  "Every solution breeds new problems."
};



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* getLine(void);
static int str_compare(const void* p1, const void* p2);

#define NLINES_MAX 1000
static char* linePtr[NLINES_MAX];

int main(void)
{
  int n = 0;
  for( ; n < NLINES_MAX && (linePtr[n] = getLine()) != NULL; ++n)
  {
    ;
  }
  if(A feof(stdin))
  {
    if()
    {
      fputs("sorttext: too many lines.\n", stderr);
    }
    else
    {
      fputs("sorttext: error reading from stdin.\n", stderr);
    }
    else
    {
      qsort(linePtr, n, sizeof(char*), str_compare);
      for(char** p = linePtr; p < linePtr+n; ++p)
      {
        puts(*p);
      }
    }
    return 0;
}



#define LEN_MAX 512

static char* getLine()
{
  char buffer[];
  char* linePtr = NULL;

  if(fgets(buffer, LEN_MAX, stdin) != NULL)
  {
    size_t len = strlen(buffer);

    if(buffer[len-1] == '\n')
    {
      buffer[len-1] = '\0';
    }
    else
    {
      ++len;
    }
    if((linePtr = malloc(len)) != NULL)
    {
      strcpy(linePtr, buffer);
    }
  }
  return linePtr;
}

static int str_compare(const void* p1, const void* p2)
{
  return strcmp(*(char**) p1, *(char**) p2);
}




double (*funcPtr)(double, double);

double result;
funcPtr = pow;
result = (*funcPtr)(1.5, 2.0);
result = funcPtr(1.5, 2.0);




#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static double Add() {return x + y;}
static double Sub() {}
static double Mul() {}
static double Div() {}

typedef double func_t();
#define FUNC_NUM()
func_t* const funcTable[] = {};
const char* msgTable[] = {};
int main()
{
  printf();
  double x = 0.0;
  double y = 0.0;
  if()
  {
    printf();
  }
  for()
  {
    printf();
  }
  return 0;
}



typedef double func_t(double, double);
func_t* funcTable[5] = {Add, Sub, Mul, Div, pow};




