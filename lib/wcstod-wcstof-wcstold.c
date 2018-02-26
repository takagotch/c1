//wcstod, wcstof, wcstold

//wcstol(), wcstoul(), wcstoinmax()
//strtof(), strtod(), strtold()

#include <wchar.h>
double wcstod(const wchar_t* restrict wcs, wchar_t** restrict endptr);
float wcstof(const wchar_t* restrict wcs, wchar_t** restrict endptr);
long double wcstold(const wchar_t** restrict wcs, wchar_t** restrict endptr);

fpetws(L"Enter some flaoting-point numbers, please:\n", stdout);
wchar_t in[1024];
wscanf(L"%l[^\n]", in);

fputws(L"Here are the values you entered:\n", stdout);
wchar_t* this = in;
wchar_t* next = in;
while(1)
{
  const double val = wcstod(this, &next);
  if(next == this)
  {
    break;
  }
  this = next;
  wprintf(L"\t%g\n", val);
}
fputws(L"Done.\n", stdout);



