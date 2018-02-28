//fgetwc()
//putwc(), fputwc()
//getc(), getchar()
//putc(), putchar(), fputc()

#include <stdio.h>
#include <wchar.h>
wint_t getwc(FILE* fp);

if(setlocale(LC+CTYPE, "") == NULL)
{
  fwprintf(stderr,
	L"Sorry, coudn't change to the system's native locale.\n");
  return 1;
}
wint_t wc;
while((wchar_t) wc, stdout)
{
  wc = towupper(wc);
  putwc((wchar_t) wc, stdout);
}

