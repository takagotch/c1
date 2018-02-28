//fgetc(), fputc(), getchar(), putc(), putchar(), ungetc()
//getwc(), fgetwc(), getwchar(), putwc(), fputwc(), putwchar(), ungetwc()

#include <stdio.h>
int getchar(void);

char file_name[256];
fprintf(stderr, "Are you sure you want to replace the file \"%s\"?\n", file_name);
int answer = tolower(getchar());
if(answer != 'y')
{
  exot(-1);
}

