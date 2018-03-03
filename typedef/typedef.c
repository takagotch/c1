[ storage_class_specifier ] type declarator [ , declarator [ , ... ] ];

storage_class_specifier

type

declarator

int iVar1, iVar2 = 10;
static char msg[] = "Hello";

extern volatile short status;

enum {OFF, ON} toggle = ON;

struct CharColor {unsigned fg:4, bg:3, bl:1} attribute = {12, 1, 0};
struct Client {char name[64], pin[16]};
struct Client clientArray[100], *clientPtr = clientArray;

float x, *flPtrArray[10] = {&x};

static double* func2(double*);

auto
register
static
extern
_Thread_local

const
valatile
restrict
_Atomic

extern const volatile int ticks;

const int limit = 10000;
typedef struct {double x, y, r;}; Circle;
const Circle unit_circle = {0, 0, 1};
const float v[] = {1.0F, 0.5F, 0.25F};
volatile short* restrict vsPtr;

int iMax(int a, int b);
int iMax(int a, int b)
{ return (a >= b ? a : b); }

int a = 10;
extern double b[];
void func()
{
  extern char c;
  static short d;
  float e;
}

int i, v[];
static int j;

//()
//[]
//*

int* abc[10];
int (*abs)[10];

extern char*(* fTab[])(void);

//fTab
//fTab[]
//(* fTab[] )
//(* fTab[])(void)
//*(* fTab[])(void)
//char *(* fTab[])(void)

float (* func())[3][10];

unsigned char
unsigned char*

float* []
float (*)[10]
double* (double *)
double (*)()
int* (*(*)[10])(void)


typedef unsigned int UNIT, UINT_FUNC();
typedef struct Point {double x, y} Point_t;
typedef float Matrix_t[3][10];

UNIT ui = 10, *uiPtr =&ui;

UNIT_FUNC* funcPtr;

Matrix_t* func(float*);

typedef struct Point {double x, y;} Point_t;
typedef struct {Point_t top_left; Point_t bottom_right;} Rectangle_t;

int func(int size)
{
  typedef float VLA[size];
  size *= 2;
  VLA temp;
}


void qsort(void* base, size_t count, size_t size,
		int (*compare)(const void*, const void*));

typedef int CmpFn(const void*, const void*);
void qsort(void* base, size_t count, size_t size, CmpFn* compare);

_Static_assert(contant_expression, string_literal);

int func1(void);
int a;
extern int b = 1;
static int c;
static void func2(int d)
{
  extern int a;
  int b = 2;
  extern int c;
  static int e;
}


#include <string.h>
double var = 77, *dPtr = &var;

int (*funcPtr)(const char*, const char*) = strcmp;

short a[4] = { 1, 2, 2*2, 2*2*2 };
Rectangle_t rect1 = { {-1, 1 }, {1, -1 } };

#include <string.h>
void func(const char* str)
{
  size_t len = strlen(str);
  Rectangle_t rect2 = rect1;
}

void func(void)
{
  extern int n;
  char buf[n];
}

