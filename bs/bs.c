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



