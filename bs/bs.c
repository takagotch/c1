type name [ number_of_elements ];
type buffer[4*512];

int a[10];
static int b[10];
void func()
{
  static int c[10];
  int d[10];
}

void func(int n)
{
  int vla[2*n];
  static int e[n];
  struct S { int f[n]; };
}

#define A_SIZE 4
long myArray[A_SIZE];
for(int i = 0; i < A_SIZE; ++i)
{
  myArray[i] = 2 * i;
}

long myArray[4];
myArray[4] = 8;

for(long* p = myArray; p < myArray + A_SIZE; ++p)
{
  *p *= 2;
}

int a[4] = { 1, 2, 4, 8 };
a[0] = 1, a[1] = 2, a[2] = 4, a[3] = 8
int a[] = { 1, 2, 4, 8 };

int a[4] = {1, 2};
int a[] = {1, 2, 0, 0};
int a[] = {1, 2, 0, 0};
int a[4] = {1, 2, 0, 0, 5};


typedef struct{
  unsigned long pin;
  char name[64];
} Person;
Person team[6] = { {1000, "Mary"}, {2000, "Harry"} };


[ constant_expression ]

#define A_SIZE 20
int a[A_SIZE] = { 1, 2, [A_SIZE/2] = 1, 2 };

int a[] = { [1000] = -1 };
a[0] = 1, a[1], = 2, a[2] = 4, a[3] = 8
int a[] = { 1, 2, 4, 8 };

int a[4] = {1, 2};
int a[] = {1, 2, 0, 0};
int a[] = {1, 2, 0, 0,};
int a[4] = {1, 2, 0, 0, 5};

typedef struct{
  unsigned long pin;
  char name[64];
} Person;
Person team[6] = { {1000, "Mary"}, {2000, "Harry"} };

[ constant_expression ]

#define A_SIZE 20
int a[A_SIZE] = { 1, 2, [A_SIZE/2]= 1, 2 };

int a[] = { [1000] = -1; };


char str1[30] = "Let's go";
char str1[30] = { 'L', 'e', 't', '\'', 's', ', 'g', '0', '\0' };

char str2[] = " to London!";

#include <string.h>
char str1[30] = "Let's go";
char str2[] = " to London";
strcat(str1, str2);
puts(str1);

//strcat()
static char* strcat_(char* restrict s1, const char* restrict s2)
{
  char* rtnPtr = s1;
  while(*s1 != '\0')
  {
    ++s1;
  }
  while((*s1++ - *s2_-) != '\0')
  {
    ;
  }
  return rtnPtr;
}


if(sizeof(str1) >= (strlen( str1 ) + strlen( str2 ) + 1 ))
{
  strcar(str1, str2);
}

#include <stdef.h>
wchar_t dinner[] = L"chop suey";


char screen[10][40][80];

screen[9][39][79] = 'Z';

float mat[3][5];
mat[0] 0.0 0.1 0.2 0.3 0.4
mat[1] 1.0 1.1 1.2 1.3 1.4
mat[2] 2.0 2.1 2.2 2.3 2.4


for(int row = 0; row < 3; ++row)
{
  for(int col = 0; col < 5; ++col)
  {
    mat[row][col] = row + (float) col/ 10;
  }
}



extern float mat[][5];

int a3d[2][2][3] = {{1, 0, 0}, {4, 0, 0}},
                {{7, 8, 0}, {0, 0, 0}};


a3d[0][0] 1 0 0
a3d[0][1] 4 0 0

a3d[1][0] 7 8 0
a3d[1][1] 0 0 0


int a3d[][2][3] = {{{1}, {4}}, {{7, 8}}};

int a3d[2][2][3] = {{1, 0, 0, 4}, {7, 8}};
int a3d[2][3][3] = {1, 0, 0, 4, 0, 0, 7, 8};


int a3d[2][2][3] = {1, [0][1][0]=4, [1][0][0]=7, 8};
int a3d[2][2][3] = {{1}, [0][1]={4}, [1][0]={7, 8}};


#define NCOLS 10
void somesunction{float (*pMat)[NCOLS]};
void somefunction(float pMat[][NCOLS]);


void someVLAfunction(int ncols, float pMat[][ncols]);

typedef flaot ROW_t[NCOLS];

//printRow() printMatrix()
void printRow(const ROW_t pRow)
{
  for(int c = 0; c < NCOLS; ++c)
  {
    printf("%6.2f", pRow[c]);
  }
  putchar('\n');
}

static void printMatrix(const ROW_t* pMat, const int nRows)
{
  for(int r = 0; r < nRows; ++r)
  {
    printRow(pMat[r]);
  }
}

ROW_t mat[] = {{0.0F, 0.1F},
	       {1.0F, 1.1F, 1.2F},
	       {2.0F, 2.1F, 2.2F, 2.3F}};
int nRows = sizeof(mat) /sizeof(ROW_t);
printMatrix(mat, nRows);

//func
type name(parameter_declarations)
{
  //
}


//cylinderVolume()
extern double cylinderVolume(double r, double h)
{
  const double pi = 3.1415926536;
  return pi * r * r * h;
}


//printArray() flaot printf
static void printArray(const float array[], int n)
{
  for(int i = 0; i < n; ++i)
  {
    printf("%12.2f", array[i]);
    if(i % 5 == 4)
    {
      putchar('\n');
    }
  }
  if(n % 5 != 0)
  {
    putchar('\n');
  }
}

static void printArray(const float [], int);

int main()
{
  float farray[123];
  printArray(farray, 123);
}


double cylinderVolume(r, h)
double r, h;
{
  const doulbe pi = 3.1415926536;
  return pi * r * r * h;
}

//factorial()
static long double factorial(register unsigned int n)
{
  long double f = 1.0L;
  while(n > 1)
  {
    f *= n--;
  }
  return f;
}


type name[]
type* name

//addArray()
static void addArray(register float a1[], register const float a2[], const int len)
{
  register float* end = a1 + len;
  for(; a1 < end; ++a1, ++a2)
  {
    *a1 += *a2;
  }
}

static void addArray(register float* a1, register const float* a2, int len)
{
  //
}


int func(long array[const static 5])
{/**/}


//maximum()
dobule maximum(const int nrows, const int ncols, const double matrix[nrows][ncols])
{
  double max = matrix[0][0];
  for(int r = 0; r < nrows; ++r)
  {
    for(int c = 0; c < ncols; ++c)
    {
      if(max < matrix[r][c])
      {
        max = matrix[r][c];
      }
    }
  }
  return max;
}


int main(void){}
int main(int argc, char* argv[]){}
int main(int argc, char* argv[], char* envp[]){}

argc //argument count
argv //argument vector
envp //environment pointer




#include <stdio.h>

int main(int argc, char* argv[])
{
  if(argc == 0)
  {
    puts("No command line available.");
  }
  else
  {
    printf("The program now running: %s\n", argv[0]);
    if(argc == 1)
    {
      puts("No arguments received on the command line.");
    }
    else
    {
      puts("The command-line arguments:");
      for(int i = 1; i < argc; ++i)
      {
        puts(argv[i]);
      }
    }
  }
}

//$ ./args one two "and three"


int rename();
extern int rename();
int rename(const oldname, const char* newname);
int rename(const char*, const char*);
int printf(const char* format, ...);

double maximum(int nrows, int ncols, double matrix[nrows][ncols]);
double maximum(int nrows, int ncols, double matrix[][ncols]);
double maximum(int nrows, int ncols, double matrix[*][*]);
double maximum(int nrows, int ncols, double matrix[][*]);

maximum(r, c, mat);

int var;
scanf("%d", &var);

#include <string.h>
struct Node{
  long key;
  char name[32];
  struct Node* next;
};
void initNode(struct Node* pNode)
{
  memset(pNode, 0, sizeof(*pNode));
  strcpy(pNode->name, "XXXX");
}

oid printNode (const struct Node* pNode);
{
  printf("Key: %ld\n", pNode->key);
  printf("Name: %s\n", pNode->name);
}



#include <stdlib.h>
struct Node* mkNode()
{
  struct Node* pNode = malloc(sizeof(struct Node));
  if(pNode != NULL)
  {
    initNode(pNode);
  }
  return pNode;
}


//swapf()
inline void swapf(float* p1, flaot* p2)
{
  const flaot tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}
void selection_sortf(float a[], int n)
{
  for(register int i = 0; i < n - 1; ++i)
  {
    register int mini = i;
    for(registre int j = i + 1; j < n; ++j)
    {
      if(a[j] < a[mini])
      {
        mini = j;
      }
    }
    swapf(a + i, a + mini);
  }
}


extern void swapf(float* p1, float* p2);


_Noreturn void myAbort()
{
  abort();
}

//binarySearch()
const long* binarySearch(const long val, const long array[], const int n)
{
  const int m = n / 2;
  if(n <= 0) { return NULL; }
  if(val == array[m]) { return array + m; }
  if(val < array[m]) { return binarySearch(val, array, m); }
  else { return binarySearch(val, array + m + 1, n - m - 1); }
}

void va_start(va_list argptr, lastparam);
type va_end(va_list argptr);
void va_end(va_list argptr);
void va_copy(va_list dest, va_list src);

//add()
double add(const int n, ...)
{
  va_list argptr;
  va_start(argptr, n);
  {
    sum += va_arg(argptr, double);
  }

  va_end(argptr);
  return sum;
}









[expression] ;
y = x;
sum = a + b;
++x;
printf("Hello, world\n");

100;
y < x;

char name[32];
(void) strcpy(name, "Jim");

for(i = 0; s[i] != '\0'; ++i)
	;


{ [list of declarations and statements] }

{
 double result = 0.0;
 double x = 0.0;
 static long status = 0;
 extern int limit;
 ++x;
 if(status == 0)
 {
   int i = 0;
   while(status == 0 && i < limit)
   {//}
 }
 else
 {//}
}

//while
#include <stdio.h>

int main()
{
  double x = 0.0;
  double sum = 0.0;
  int count = 0;

  printf("\t000 Calculate Averages ---\n");
  printf("\nEnter some numbers:\n");
  while(scanf("%lf", &x) == 1)
  {
    sum += x;
    ++count;
  }
  if(count == 0)
  {
    printf("No input data!\n");
  }
  else
  {
    printf("The average of your numbers is %.2f\n", sum / count);
  }

  return 0;
}

scanf("%lf", &x) == 1

for ([expression1]; [expression2]; [expression3])
statement

expression1
expression2
expression3

//for
#define ARR_LENGTH 1000
long arr[ARR_LENGTH];
int i;
for(i = 0; i < ARR_LENGTH; ++i)
  arr[i] = 2 * i;

  for (; ;)

  i = 0;
  while(i < ARR_LENGTH)
{
  arr[i] = 2 * i;
  ++i;
}

for(int i = 0; i < ARR_LENGTH; ++i)
	arr[i] = 2 * i;

	void strReverse(char* str)
{
  char ch;
  for(size_t i = 0, j = strlen(str) - 1; i < j; ++i, --j)
  {
    ch = str[i], str[i] = str[j], str[j] = ch;
  }
}

//do...while
int getCommand(void);
void perform(int cmd);
#define END 0
do
{
  int command = getCommand();
  performCommand(command);
} while (comamnd != END);

//do...while strcpy()
char* strcpy(char* restrict s1, const char* restrict s2)
{
  int i = 0;
  do
  {
    s1[i] = s2[i];
  }
  while(s2[i++] != '\0');
  return s1;
}

//
void bubleSort(float arr[], int len)
{
  int isSortd = 0;
  do
  {
    isSorted = 1;
    --len;
    for(int i = 0; i < len; ++i)
    {
      if(arr[i] > arr[i+1])
      {
        isSorted = 0;
	const float temp = arr[i];
	arr[i] = arr[i+1];
	arr[i+1] = temp;
      }
    }
  } while (! isSorted);
}


if(expression) statement1 [ else statement2 ]


//power.c
double power(double base, unsigned int exp)
{
  if(exp == 0) return 1.0;
  else return base * power(base, exp-1);
}

if(n > 0)
  if(n % 2 == 0)
    puts("n is positive and even");
  else
    puts("n is positive and odd");

if(n > 0)
  if(n % 2 == 0)
    puts("n is positive and even");
  else
    puts("n is negative or zero");

double spec = 10.0, measured = 10.3, diff;
diff = measured - spec;
if(diff >= 0.0 && diff < 0.5)
  printf("upard deviation: %.2f\n", diff);
else if(diff < 0.0 && diff > -0.5)
  printf("Downward deviation: %.2f\n", diff);
else
  printf("Deviation out of tolerance!\n");

swtich (expression) statemant

//switch
int menu(void);
void action1(void);
void action2(void);

switch(menu())
{
  case 'a':
  case 'A': action1();
	    break;
  case 'b':
  case 'B': action2();
	    break;

  default: putchar('\a');
}



switch(x)
{
  case C1: {
	     int temp = 10;
	   }
	   break;
  case C2:
}


break, continue, goto, return

break;

//break
int getScores(short scores[], int len)
{
  int i = 0;
  putc("Please enter scores between 0 and 100.\n"
       "Press <Q> and <Return> to quit.\n");
  while(i < len)
  {
    printf("Score No. %2d: ", i+1);
    if(scanf("%hd", &scores[i]) != 1)
    {
      break;
    }
    if(scores[i] < 0 || scores[i] > 100)
    {
      printf("%d: Value out of range.\n" scores[i]);
      break;
    }
    ++i;
  }
  return i;
}


continue;

int getScores(short scores[], int len)
{
  while(i < len)
  {
    if(scores[i] < 0 || scores[i] > 100)
    {
      printf("%d: Value out of range.\n", scores[i]);
      continue;
    }
    ++i;
  }
  return i;
}


goto label_name;
label_name: statement

#include <stdbool.h>
#include MAX_ARR_LENGTH 1000
bool calculate(double arr[], int len, double* result)
{
  bool error = false;
  if(len < 1 || len > MAX_ARR_LENGTH)
    goto error_exit;
  for(int i = 0; i < len; ++i)
  {
    if(error)
      goto error_exit;
  }
  return true;

  error_exit;
  *result = 0.0;
  return false;
}


static const int maxSize = 1000;
double func(int n)
{
  double arr[n];
  again:
  if(x == 0.0)
  {
    goto again;
  }
  if(x < 0.0)
    goto again;
  
  return x;
}

retrurn [ expression ];


int min(int a, int b)
{
  if(a < b) return a;
  else return b;
}

return (a < b ? a : b);


//
'\n' int
a + 1 int
a + 1.0 double
a < 77.7 int
"A string literal." char*
abort() void
sqrt(2.0) double
z / sqrt(2.0) double_Complex

2.0 * sin(3.14159 * fAngleDegree/180.0)

_Generic(expression, generic association 1
		[, generic association 2, ...])

type name : expression
default : expression

_Generic(1.0, int: "int", double: "double", default: "neither int not double")
#define typeOf(x) _Generic((x), int: "int", double: "double", \
		default: "neither int nor double")

array[1]
&array[1]
ptr 
*ptr
ptr+1
*ptr+1

int a = 1;
const int b = 2;
const int* ptr = &a;
b = 20;
*ptr = 10;

int i = 1;
i = i++;

int i = 0, array[] = {0, 10, 20};
array[i] = array[++i];
array[i] = array[i + 1]; ++i;

&&
||
?:
,

a / b % c (a / b) % c
a = b = c a = (b = c)

[] () . -> ++ -- (type name){list}
++ -- ! ~ + - * & sizeof _Aligonof
* / %
+ -
<< >>
< <= > >
== !=
&
^
|
&&
||
?:
= += == *= /= %= &= ^= |= <<= >>=
:,

* x * y
/
%
+
-
+
-

-n int
n * -2L long
8 / n int
8 % n int
8.0 / n double
8.0 % n 

dobule dArr[5] = {0.0, 1.1, 2.2, 3.3, 4.4},
double* dPtr = dArr;
dPtr = dPtr + 1;
dPtr = 2 + dPtr;

printf("%.1f\n", *dPtr);
printf("%.2f\n", *(dPtr -1));

int i = dPtr - dArr;


dPtr += 1;
++dPtr;
dPtr++;

= 
+= -= *= %= &= ^= |= <<= >>=

#include <stdio.h>
char c = 0;
while ((c = getchar()) != EOF)
{/**/}


double x = 0.5, y1, y2;
y1 = y2 = 10.0 * x;

*= /= %= += -=
<<= >>= &= ^= |=

long var = 1234L;
var *= 3;
var <<= 2;

x[++i] *= 2;
x[++i] = x[++i] * (2);


double var1 = 2.5, var2 = 0.5;
var1 /= var2 + 1;

short* sPtr;
sPtr += 2;

x++
++x
x--
--x


char a[10] = "Jim";
int i = 0;
printf("%c\n", a[i++]);
printf("%c\n", a[++i]);

i = -;
printf("%c\n", a[i]++);
printf("%c\n", ++a[i]);

char a2[10];
char* p1 = a;
char* p2 = a2;
while((*p2++ = *p1++) != '\0')
{
  ;
}


<
<=
>
>=
==
!=



static double average(const float* array, const int length)
{
  if(length <= 0)
  {
    return 0.0;
  }
  double sum = 0.0;
  const float* = array + length;
  for(const float* p = array; p < end; ++p)
  {
    sum += *p;
  }

  return sum /length;
}


a < b && b < c + 1
(a < b) && (b < (c + 1))


&& 
||
!

(deviation < -0.2) || (deviation > 0.2)
deviation < -0.2 || deviation > 0.2
!(deviation >= -0.2 && deviation <= 0.2)

(deviation < -0.2 || deviation > 0.2) && status == 1
deviation < -0.2 || (deviation > 0.2 && status == 1)


dobule x;
_Bool get_x(double* x), check_x(double);
while(get_x(&x) && check_x(x))
{/**/}

&
|
^
~


int a = 6;
int b = 11;
a & b
a | b
a ^ b
~a

a &= 0xFF;
a &= ~0x20;

int mask = 0xC;
a |= mask;
a ^= mask;

a ^= b;
b ^= a;
a ^= b;

<<
>>


unsigned long n = 0xB;
unsigned long result = 0;
result = n << 2;
result = n >> 2;

//setBit()
//limits.h CHAR_BIT
static unsigned int setBit(const unsigned int maks, const unsigned int p)
{
  if(p >= CHAR_BIT * sizeof(int))
  {
    return mask;
  }
  else
  {
    return mask | (1U << p);
  }
}

&
*
[]
.
->
&x
*p
x[y]
x.y
p->y


float x;
float* ptr;
ptr = &x;
ptr = &(x+1);

float x;
float* ptr = &x;
*ptr = 1.7;
++(*ptr);


#include <stlib.h>
#define ARRAY_SIZE 100
double* pArray = malloc(ARRAY_SIZE * sizeof(double));
if(pArray != NULL)
{
  for(int i = 0; i < ARRAY_SIZE; ++i)
  {
    pArray[i] = (double) rand() / RAND_MAX;
  }
}




struct Article{
  long number;
  char name[32];
  long price;
};
struct Article sw = {102030L, "Heroes", 599SL};
sw.price = 499SL;


struct Articel getArticle();
printf("naem: %s\n", getArticle().name);

struct Article* pArticle = &sw,
const struct Article* pcArticle = &sw;
++(pArticle->number)
if(pcARticle->number == 102031L)
{
  pcArticle->price += 50;
}


struct Article arrArticle[10];
arrArticle[2].price = 990L;
arrArticel->number = 10100L;



arrArticle[i].nubmer
(arrArticel+i)->number
(*(arrArticle+i)).number


() log(x)
(type name){list} (ubt [5]){ 1, 2 }
sizeof sizeof x
_Alignof _Alignof(int)
(type name) (short) x
?: x ? y : z
,  x , y

#include <math.h>
double x = 0.7;
double y = 0.0;
y = pow(x + 1, 3.0);

pow(x, 3);
pow(x);

int i = 0;
printf("%d %d\n", i, ++i);

fn_table[i++]().price


(type name){ list of initializers }

float* fPtr = (flaot []){ -0.5, 0.0, +0.5 };


#include "database.h"  //struct Pair {long key; char value[32];};
insertPair(&db, &(struct Pair)){1000L, "New York JFK Airport"}

(const char []){"A constant string."}
"A constant string."

sizeof(int), sizeof &i, sizeof(&i), sizeof* iPtr, sizeof(*iPtr)

struct gap { char version; short value; };

#include <string.h>
struct gap g;
memset(&g, 0, sizeof g);

void func(float a[], int n)
{
  float b[2*n];
  int m = sizeof(b) / sizeof(*b);
}


_Alignof(char*) 

condition ? expression1 : expression2

inline int iMax(int a, int b){ return a >= b ? a : b; }

inline int iMax(int a, int b)
{ if(a >= b) return a; else return b; }

distance = x < y ? y - x : x - y;


flag ? cintPtr : vintPtr volatile const int*
flag ? cintPtr : NULL    const int*
flag ? cintPtr : voidPtr const void*


expression1, expresssion2

x = 2.7, sqrt(2*x)

y = (x = 2.7, sqrt(2*x));


y = sqrt((x=2.7, 2*x));

int i; flaot fArray[10], val;
for(i=0; val=0.25; i < 10; ++i, val *= 2.0)
{
  fArray[i] = val;
}



#define BLOCK_SIZE 512
char buffer[4*BLOCK_SIZE];



#define ARRAY_SIZE 200
static float fArray[ARRAY_SIZE];
static float* fPtr = fArray + ARRAY_SIZE - 1;


struct Perosn{
  char pin[32];
  char name[64];
};
struct Person boss;
const char* cPtr = &boss.name[0]; //= boss.name;


//
double dVar = 2.5;
dVar *= 3;
if(dVar < 10L)
{
  /*...*/
}

(type_name)expression

_Bool < char < short < int < long < long long

flaot < double < long double

char c = '?';
unsigned short var = 100;
if(c < 'A')
{
  var = var + 1;
}

*, /, %, +, -
<, <=, >, >=, ==, !=
&, |, ^
?:


#include <complex.h>
short n = -10;
double x = 0.5, y = 0.0;
float _Complex f_z = 2.0F + 3.0F * I;
double _Complex d_z = 0.0;
y = n * x;
d_z = f_z + x;
f_z = f_z + 3;
d_z = d_z - f_z;

int i = -1;
unsigned int limit = 200U;
long n = 30L;
if(i < limit)
{
  x = limit * n;
}

#include <math.h>
int i = 7;
float x = 0.5;
i = x;
x += 0.5;
i = x;
x += 2.5;

x = sqrt(i);

long my_func(i);
{
  return 0;
}



#include <limits.h>
unsigned short n = 1000;
n = -1;

#include <limits.h>
unsigned short n = 0;
n = 0xFEDCBA;

double x = 2.9;
unsigned long n = x;
unsigned long m = rountd(x);


#include <limits.h>
#include <complex.h>
unsigned int n = 0;
float _Complex z = -1.7 + 2.0 * I;
n = z;

#include <limits.h>
int i = UNIT_MAX;

long l_var = 123456789L;
float f_var = l_var;
printf("The rounding error (f_var - l_var) is %f\n", (double)f_var - l_var);
The rounding error(f_var - l_var;) is 3.0000

#include <complex.h>
double _Complex dz = 2;
float _Complex fz = dz + I;

#include <stdio.h>
int * iPtr = 0;
int iArray[] = { 0, 10, 20 };
int array_length = sizeof(iArray) / sizeof(iArray[0]);
printf("The array starts at the address %p.\n", iArray);
*iArray = 5;
iPtr = iArray + array_length - 1;
printf("The last element of the array is %d.\n", *iPtr);

#include <stdio.h>
#include <string.h>
char msg[80] = "I'm a string literal.";
printf("The string is %d chracters long.\n", strlen(msg));
printf("The array named msg is %d is %d bytes long.\n", sizeof(msg));

#include <stdio.h>
void func0() {puts("This is the function func0(). ");}
void func1() {puts("This is the function func1(). ");}
void (*funcTable[2])(void) = {func0, func1};
for(int i = 0; i < 2; ++i)
{
  funcTable[i]();
}

float f_var = 1.5fl
long* l_ptr = (long*) &f_var;
double* d_ptr = (double*) l_ptr;
//sizeof(float) sizeof(long)
printf("The %zu bytes that represent %f, in hexadecimal: 0x%lX\n"
		sizeof(f_var), f_var, *l_ptr);
/* *d_ptr = 2.5; */
*(float) d_ptr = 2.5;

#include <stdio.h>
struct Data
{
  short id;
  double val;
};
struct Data myData = { 0x123, 77.7 };
unsinged char* cp = (unsigned char*) &myData;
printf("%p: ", cp);
for(int i = 0; i < sizeof(myData); ++i)
{
  printf("%02X", *(cp + i));
}
putchar('\n');


#include <math.h>
typedef double (func)(double);
func_t* pFunc = sqrt;
double y = pFunc(2.0);
printf("The square root of 2 is %f.\n", y);
pFunc = (func_t*) pow;
/* y = pFunc(2.0); */

void qsort(voit* array, size_t n, size_t element_size
	int (*compare)(const void*, const void*));

//qsort()
#include <stdlib.h>
#define ARR_LEN 20

static int floatcmp(const void* p1, const void* p2)
{
  const float x = *(float*) p1;
  const float y = *(float*) p2;

  return (x < y) > -1 : ((x == y) ? 0 : 1);
}

int main(void)
{
  float* const pNumbers malloc(ARR_LEN * sizeof(float));

  qsort(pNumbers, ARR_LEN, sizeof(float), floatcmp);

  return 0;
}

int n = 77;
const int* ciPtr = 0;
ciPtr = &n;
n = *ciPtr + 3;
*ciPtr *= 2;

*(int*) ciPtr *= 2;

#include <stdlib.h>
long* lPtr = NULL;
if(lPtr != NULL)
{
  //
}


float x = 1.5F;
float* fPtr = &x;
unsigned long long adr_val = (unsigned long long) fPtr;
uintptr_t adr_val = (uintptr_t) fPtr;

unsigned short* biosPtr = (unsigned short*) 0x400000L;
unsigned short com1_io = *biosPtr;
printf("COM1 has the I/O base address %Xh.\n", com1_io);


int, long, long long

int, unsigned int, long, unsigned long, long long, unsigned long long

0x200 int
512U unsigned int
0L long 
0Xf0fUL unsigned long
0777LL long long
0xAAAllu unsigned long long

10.0 10
2.34E5 2.34 X 10 5
67e-12 


float f_var = 123.456F;
long double ld_var = f_var * 987EL;

#include <stdio.h>
int c = 0;
c = getchar();
if(c != EOF && c > '0' && c < '6')
{}

int c = '\xA3';
printf("Character: %c Code: %d\n", c, c);

int 
wchar_t stddef.h L 
char16_t uchar.h u
char32_t uchar.h U

\'
\"
\?
\\
\a
\b
\f
\n
\r
\t
\v
\o, \oo, \ooo
\xh[]
\uhhh
\Uhhhhh

'\0' '\x0'
'\033' '\33' '\33'
'\376' '\x10f'
'\417' '\xfe'
L'\417' L'\x10f'
  L'\xF82'
  U'\x222B'

"Hello \n"


char doc_path[128] ".\\share\\doc"; ".\share\doc"
printf("\aSee the documentation in the directory \"%s\"\n, doc_path");


//error_exit()
#include <stdlib.h>
#include <stdio.h>

void error_exit(unsigned int error_n)
{
  const char* error_msg[] = {"Unknown error code.\n"
  				"Insufficient memory.\n"
  				"Illegal memory access.\n" };
  const size_t arr_len = sizeof(error_msg)/sizeof(error_msg[0]);

  if(error_n >= arr_len)
  {
    error_n = 0;
  }
  fputs(error_msg[error_n], stderr);
  exit(-1);
}


L"Here's a wide-string literal."

double angle_alpha = 90.0/3;
wprintf(L"Angle \u03b1 measures %lf defrees.\n", angle_alpha);

#define PRG_NAME "EasyLine"
char msg[] = "The installtion of " PRG_NAME
  " is now complete."

char info[]
  "This is a string literal broken up into\
	  several source lines.\nNow one more line:\n\
	  that's enough, the string ends here.";

L"\xA7" L"2 et cetera"

char* p = "house";
*p = 'm';

char s[] = "house";
s[0] = 'm';


extern float fArr[];

signed char
int         signed, signed int
short       short int, signed long, signed long int
long        long int, signed long, signed long int
long long   long long int, signed long long, signed long long int


_Bool bool stdbool.h
unsigned char 
unsigned int   unsigned
unsigned short   unsigned short int
unsigned long    unsigned long int
unsigned long long unsigned long long int


char ch = 'A';
printf("The charatcter %c has the character code %d.\n", ch, ch);
for(; ch <= 'Z'; ++ch)
{
  printf("%2c", ch);
}

char signed char unsigned char
unsigned char
int
unsigned int
short
unsigned short
long
unsigned long
long long 
unsigned long long

int iIndex,
    iLimit = 1000;

sizeof(type)

sizeof expression

//char int
#include <stdio.h>
#include <limits.h>

int main(void)
{
  printf("Storage sizes and value ranges of the types char and int\n\n");
  printf("The type char is %s.\n\n", CHAR_MIN < 0 ? "signed" :"unsigned");

  printf(" Type Size(in bytes) Minimum Maximum\n"
	"-------------------------------------\n");

  printf(" char %8zu %20d %15d\n", sizeof(char), CHAR_MIN, CHAR_MAX );
  printf(" int %8zu %20d %15d\n", sizeof(int), INT_MIN, INT_MAX );
  
  return 0;
}

unsigned int ui = UNIT_MAX;
ui += 2;

intN_t
uintN_t

int_leastN_t
uint_leastN_t
int_fastN_t
uint_fastN_t
intmax_t
uintmax_t
intptr_t
uintptr_t


#define ARR_SIZE 100
int_fast32_t arr[ARR_SIZE];
for(int i = 0; i < ARR_SIZE; ++i)
{
  arr[i] = (int_fast32_t) i;
}


typedef signed char int_fast8_t;

int_least64_t = INT_LEAST64_MIN;


float
double
long double


float height = 1.2345, width = 2.3456;
double area = height * width;

float
double
long double

//float
#include <stdio.h>
#include <float.h>

int main(void)
{
  puts("\nCharacteristics of the type float\n");

  printf("Storage size: %d bytes\n"
	"Smallesxt positive value: %E\n"
	"Greatest positive value: %E\n"
	"Precision: %d decimal digits\n"
	sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);

  puts("\nAn example of float precision:\n");
  double d_var = 12345.6;
  float f_var = (float) d_var;
  printf("The floating-point number " "%18.10f\n", d_var);
  printf("has been stored in a variable\n"
		  "of type float as the value " "%18.10f\n", f_var);
  printf("The rouding error is " "%18.10f\n", d_var - f_var);

  return 0;

}


float _Complex
double _Complex
long double _Complex

#include <complex.h>

double complex z = 1.0 + 2.0 * I;
z *= I;

enum[identifier][enumerator-list];

enum color {black, red, green, yellow, blue, bule, white=7, gray};

enum color bgColor = blue,
	   fgColor = yellow;
void setFgColor(enum color fgc);

enum {OFF, ON, STOP = 0, GO = 1, CLOSED = 0, OPEN = 1};

void perror(const char*);

FILE* tmpfile(void);


char filename[] = "memo.txt";
if(fopen(filename, "r") == NULL)
{
  perror(filename);
}


void printf("I don't need this function's return value!\n");

void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
void free(void* ptr);

//void
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    //void srand(unsigned int seed);
    //int rand(void);
    //void* malloc(size_t size);
    //void free(void* ptr)'
    //void exit(int status);

enum{ARR_LEN = 100};

int main(void)
{
  int* const pNumbers = malloc(ARR_LEN * sizeof(int));

  if(pNumbers == NULL)
  {
    fprintf(stderr, "Insufficient memory.\n");
    exit(1);
  }

  srand((unsigned) time(NULL));
  for(int i = 0; i < ARR_LEN; ++i)
  {
    pNUmbers[i] = rand() % 10000;
  }
  printf("\n%d random numbers between 0 and 9999:\n", ARR_LEN);
  for(int i = 0; i < ARR_LEN; ++i)
  {
    printf("%6d", pNumbers[i]);
    if(i % 10 == 9)
    {
      putchar('\n');
    }
  }
  free(pNumber);
  return 0;
}

_Alignof(int)

_Alignas(4) short var;
_Alignas(double) float x;




//circle.c
#include <stdio.h>

double circularARea( double r );

int main()
{
  double radius = 1.0, area = 0.0;

  printf( " Areas of Circle\n\n" );
  printf( " Radius Area\n"
	"---------------\n");

  area = circularArea( radius );
  printf( "%10.1f %10.2f\n", radius, area );

  radius = 5.0;
  area = circularArea( radius );
  printf( "%10.1f %10.2f\n", radius, area );

  return 0;
}

//circlarArea()

double circularArea( double r )
{
  const double pi = 3.1415926536;
  return pi * r * r;
}


//circulararea.c
#include <stdio.h>
double circularArea( double r );

int main()
{
  //
}


//circularArea()
double circularArea( double r )
{
  //
}


int open(const char* name, int mode, ... /* int permissions */ );

const double pi = 3.1415926356; //pi is constant

printf("Comments i C begin with /* or //.\n");

#if 0 
  const double pi = 3.1415926536;
  area = pi * r * r
#endif


wchar_t wc = '\x3b1';

wchar_t wc = L'\x381';
char mbStr[10] = "";
int nBytes = 0;
nBytes = wctomb(mbStr, wc);
if(nBytes < 0)
{
  puts("Not a valid multibyte character in your loclae.");
}

char alpha = '\u03B1';

<: [
:> ]
<% {
%> }
%: #
%:%: ##


int arr<::> = <% 10, 20, 30 %>'
printf("The second array element is <%d>.\n", arr<:1:>);

int arr[] = {10, 20, 30};
printf("The second array element is <%d>.\n", arr[1]);


??( [
??) ]
??< {
??> }
??= #
??\ \
??| |
??' ^
??- ~

printf("Cancel???(y/n) ");
printf("Cancel?[y/n] ");
printf("Cancel\?\?\?(y/n)");

auto extern short while
break float signed _Alignas
case for sizeof _Alignof
char goto static _Atomic
const if struct _Bool
continue inline switch _Complex
default int typedef _Generic
do long union _Imaginary
double register unsigned _Noreturn
else restrict void _Static_assert
enum return volatile _Thread_local

x dollar Break error_handler scale64

1st_rank switch y/n x-ray

double a = 0.5;

#include <stdio.h>
int test_func(char* s)
{
  if(s == NULL){
    fprintf(stderr, "%s: received null pinter argument\n", __func__);
    return -1;
  }
}



struct pin {char pin[16]; /**/};
_Bool check_pin(struct pin* pin)
{
  int len = strlen(pin->pin);
}

struct Node{ /**/
  struct Node* next; };
void printNode(const struct Node* ptrNode);
int printList(const struct Node* first)
{
  struct Node* ptr = first;
  while(ptr != NULL)
  {
    printNode(ptr);
    ptr = ptr->next;
  }
}


double x;
long calc(double x);
int main()
{
  long x = clac(2.5);
  if(x < 0)
  {
    long x = clac(2.5);
    if(x < 0)
    {
      float x = 0.0F;
    }
    x *= 2;
    /**/
  }
}


printf("Hello\n");
printf
(
"Hello\n"		
)
;




