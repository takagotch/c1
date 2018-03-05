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



