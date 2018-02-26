//wcsrtombs9), mbstowcs(), wcsrtomb()
//wctomb(), mbtowc(), mbrtowc()

#include <stdlib.h>
size_t wcstombs(char* restrict dest, const wchar_t* restrict src, size_t n);

const wchar_t prefix[32] = L"-";
const wchar_t number[128] = L"123.456,78";
const wchar_t suffix[32] = L"€";
wchar_t fmt_amount[128] = {L'\0'};
wcspy(fmt_amount, prefix);
wcscat(fmt_amount, number);
wcscat(fmt_amount, suffix);

char output_amount[256];
if(-1 != wcstombs(output_amount, fmt_amount, sizeof(output_amount)))
{
  printf("Full amount: %s\n", output_amount);
}



