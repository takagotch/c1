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

























