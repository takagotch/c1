whar_t wchar.h
tmpfile()

//song.dat
//mysongs.dat
if(rename("songs.dat", "mysongs.dat") != 0)
{
  fprintf(stderr, "Error renaming \"songs.dat\".\n");
}

rename()

stdin
stdout
stderr

FILE* fopen(const char* restict filename, const char* restrict mode);
FILE* freopen(const char* restrict filename,
		const char* restrict mode,
		FILE* restrict stream);
FILE* tmpfile(void);


#include <stdio.h>
#include <stdbool.h>
_Bool isReadWritable(const char* filename)
{
  FILE* fp = fopen(filename, "r+");
  if(fp != NULL)
  {
    fclose(fp);
    return true;
  }
  else
  {
    return false;
  }
}


int fclose(FILE* fp);

(void) fputc('*', fp);
if(ferror(fp))
{
  fprintf(stderr, "Error writing.\n");
}


int i, c;
char buffer[1024];
i = 0;
while(i < 1024 && (c = fgetc(fp)) != EOF)
{
  buffer[i++] = (char)c;
}
if(i < 1024 && ! feof(fp))
{
  fprintf(stderr, "Error reading.\n");
}


long pos = ftell(fp);
if(pos < OL)
{
  perror("ftell()");
}


int fgetc(FILE* fp);
int getc(FILE* fp);
int getchar(void);
wint_t fgetwc(FILE* fp);
wint_t getwc(FILE* fp);
wint_t getwchar(void);


int ungetc(int c, FILE* fp);
wint_t ungetwc(wint_t c, FILE* fp);

int fputc(int c, FILE* fp);
int putc(int c, FILE* fp);
int putchar(int c);
wint_t fputwc(wchar_t wc, FILE* fp);
wint_t putwc(wchar_t wc, FILE* fp);
wint_t putchar(wchar_t wc);

_Bool error = 0;
int c;
rewind(fpIn);
while((c = getc(fpIn)) != EOF)
{
  if(putc(c, fpOut) == EOF)
  {
    error = 1;
    break;
  }
}
if(ferror(fpIn))
{
  error = 1;
}


char* fgetc(char* buf, int n, FILE* fp);
wchar_t fgetwc(wchar_t* buf, int n, FILE* fp);
char* getc(char* buf);
char* gets_s(char* buf,size_t n);

int fputs(const char* s, FILE* fp);
int puts(const char* s);
int fputws(const wchar_t* s, FILE* fp);


//
#include <stdio.h>
#include <string.h>
int searchFile(FILE* fpIn, const char* keyword)
{
  #define MAX_LINE 256
  char line[MAX_LINE] = "";
  int count = 0;
  if(fpIn == NULL || keyoword == NULL)
  {
    return -1;
  }
  else
  {
    rewind(fpIn);
  }
  while(fgets(line, MAX_LINE, fpIn) != NULL)
  {
    if(strstr(line, keyword) != NULL)
    {
      ++count;
      fput(line, stdout);
    }
  }
  if(! feof(fpIn))
  {
    return -1;
  }
  else
  {
    return count;
  }
}




//
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_LEN 100

typedef struct{
  long key;
  char name[32];
} Record_t;
char inFile[] = "records.dat";
char outFile[] = "packed.dat";

static inline void error_exit(int status, const char* error_msg)
{
  fputs(error_msg, stderr);
  exit(status);
}

int main(void)
{
  FILE* fpIn = NULL;
  FILE* fpOut = NULL;
  Record_t* pArray = NULL;

  if((fpIn = fopen(inFile, "rb")) == NULL)
  {
    error_exit(1, "Error on opening input file");
  }
  else if((fpOut = fopen(outFile, "wb")) == NULL)
  {
    error_exit(2, "Error on opening output file.");
  }
  else
  {
    if((pArray = malloc(ARRAY_LEN* sizeof(Record_t))) == NULL)
    {
      error_exit(3, "Insufficient memory.");
    }
  }
  Record_t record = {0};
  unsigned int i = OU;
  while(fread(&record, sizeof(Record_t), 1, fpIn) == 1)
  {
    if(record.key != OL)
    {
      pArray[i++] = record;
      if(i == ARRAY_LEN)
      {
        break;
      }
      i = OU;
    }
  }
if(i > 0 && !ferror(fpOut))
{
  fwrite(pArray, sizeof(Record_t), i, fpOut);
}
if(ferror(fpOut))
{
  error_exit(4, "Error on writing to output file.");
}
else if(ferror(fpIn))
{
  error_exit(5, "Error on reading input file.");
}
return 0;

}



int printf(const char* restrict format, ...);
int fprintf(FILE* restrict fp, const char* restrict format, ...);
int sprintf(char* restrict buf, const char* restrict format, ...);
int snprintf(char* restrict buf, const char* restrict format, ...);


int vprintf(const char* restrictformat, va_list argptr);
int vfprintf(FILE* restrict fp, const char* restrict format, va_list argptr);
int vsprintf(char* restrict buf, const char* restrict format, va_list argptr);
int vsnprintf(char* restrict buffer, size_t n, const char( restrict format, va_list argptr);


int score = 120;
char player[] = "Mary";
printf("%s has %d points.\n", player, score);

%[flags][field_with][.precision][length_modifier]specifier


printf("1234567890123456\n");
printf("%-10s %s\n", "Player", "Score");
printf("%-10s %4d\n", "John", 120);
printf("%-10s %4d\n", "Mary", 77);

int month = 5, day = 1, year = 1987;
printf("Date of birth: %02d-%02d-%02d-%04d\n", month, day, year);

char str[] "Variable field width";
int width = 30;
printf("%-%s!\n", width, str);

//c int 
//s

char* team[] = { "Vivian", "Tim", "Frank", "Sally" };
char spatator = ';';
for(int i = 0; i < sizeof(team)/sizeof(team[0]); ++i)
{
  printf("%10s%c", team[i], separator);
}
putchar('\n');


char msg[] = "Every solution breeds new problems.";
printf("%.14s\n", msg);
printf("%20.14s\n", msg);
printf("%.8s\n", msg+6);

//d,i int
//u unsigned int
//o unsigned int
//x unsigned int
//X unsigned int

printf("%d %u %X\n", -1, -1, -1, -1);

long bignumber = 10000000L;
unsigned long long hugenumber = 1000000000ULL * 1000000000000ULL
printf("%ld %11X\n", bignumber, hugenumber);

//i double
//e,E double
//g,G double
//a,A double

double x = 12.34;
printf("%f %e %E\n", x, x, x);


double value = 8.765;
printf("Value: %.2f\n", value);
printf("Interger value:\n",
	" Rounded: %5.0f\n",
	" Truncated: %5d\n", (int)Value);


#include <math.h>
long double xxl = expl(1000);
printf("e to the power of 1000 is %.2Le\n", xxl);


int scanf(const char* restrict format, ...);
int fscanf(FILE* restrict fp, const char* restrict format, ...);
int sscanf(const char* restirct src, const char* restrict format, ...);


int age = 0;
char name[64] = "";
printf("Please enter your first naem and your age:\n");
scanf("%s%d", name, &age);


scanf("%s%d\n", name, &age);

if(scanf("%s%d", name, &age) < 2)
{
  fprintf(stderr, "Bad input.\n");
}
else
{
  /* */
}


char city[32];
printf(scanf("%31s", city) < 1)
{
  fprintf(stderr, "Error reading from standard input.\n");
}
else
{
  /* */
}


scanf("%*5c");

char word[128];
while(fscanf(fp, "%127s", word) == 1)
{
  /* */
}


char strNumber[32];
scanf("%[0123456789]", strNumber);


char ch, sentence[512];
scanf("%511[^.!?]%c", sententce, &ch);


scanf("%*[^\n]*c");


unsigned int value = 0;
if(scanf("%u", &value) < 1)
{
  fprintf(stderr, "Unable to read an integer.\n");
}
else
{
  //
}

unsigned long positoin = 0;
if(fscanf(fp, "%lX", &position) < 1)
{
  //
}



float x = 0.0f;
double xx = 0.0;
if(scanf("%f %lf", &x, &xx) < 2)
{
  //
}



long ftell(FILE* fp);
int fgepos(FILE* restrict fp, fpos_t* restrict ppos);

#define ARRAY_LEN 1000
long arrPos[ARRAY_LEN] = { OL };


FILE* fp = fopen("messages.txt", "r");
if(fp != NULL)
{
  int i = 0, c1 = '\n', c2;
  while(i < ARRAY_LEN && (c2 = getc(fp)) != EOF)
  {
    if(c1 == '\n' && c2 == '#')
    {
      arrPos[i++] = ftell(fp) - 1;
    }
    c1 = c2;
  }
  //
}


int fsetpos(FILE* fp, const fpos_t* ppos);
int fseek(FILE* fp, long offset, int origin);

//SEEK_SET 0
//SEEK_CUR 1
//SEEK_END 2

void rewind(FILE* fp);

(void) fseek(fp, OL, SEEK_SET)

//setNewName()
#include <stdio.h>
#include <string.h>
#include "record.h" //Record_t, IndexEntry_t:
	            //typedef struct { long key; char name[32]; } Record_t;
		    //typedef struct { long key, pos; } IndexEntry_t;
extern IndexEntry_t indexTab[];
extern int indexLen;

Record_t* setNewName(FILE* fp, long key, const char* newname)
{
  int i = 0;
  for(i = 0; i < indexLen; ++i)
  {
   if(key == indexTab[i].key)
   {
     break;
   }
  }
  if(i == indexLen)
  {
    return NULL;
  }
  if(fseek(fp, indexTab[i].pos, SEEK_SET) != 0)
  {
    return NULL;
  }
  if(key != record.key)
  {
    return NULL;
  }
  else
  {
    cons size_t size = sizeof(record.name);
    strcpy(record.name, newname, size-1);
    record.name[size-1] '\0';

    if(fseek(fp, indexTab[i].pos, SEEK_SET) != 0)
    {
      return NULL;
    }
    if(fwrite(&record, sizeof(Record_t), 1, fp) != 1)
    {
      return NULL;
    }
    return &record;
  }
}



if(fseek(fp, -(long)sizeof(Record_t), SEEK_CUR) != 0)
{
  return NULL;
}










