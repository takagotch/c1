//strftime(), setlocale()

#include <time.h>
#include <wchar.h>
size_t wcsftime(wchar_t* restrict s, size_t n, wchar_t* restrict format,
		const struct tm* restrict timeptr);

time_t now;
struct tm* localnow;
wchar_t hdr_date[MAX_HDR] = L"";

time(&now);
localnow = localtime(&now);

if(wcsftime(hdr_date, MAX_HDR, L"Date: %a, %d %b %Y %T %z", localnow))
{
  fputwc(hdr_date, stdout);
}
else
{
  return -1;
}

