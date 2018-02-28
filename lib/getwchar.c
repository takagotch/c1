//fgetwc()
//getc(), getchar()
//fputwc(), putwchar()

#include <wchar.h>
wint_t getwchar(void);


if(setlocale(LC_TYPE, "") == NULL)
{
  fwpritf(stderr,
	L"Sorry, couldn't change to the system;s native locale.\n");
}
wint_wc
while((wc = getwchar()) != WEOF)//(wc = getwc(stdin))
{
  wc = towupper(wc);
  putwchar((wchar_t) wc); //putwc((wchar_t) wc, stdout);
}


