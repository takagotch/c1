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

