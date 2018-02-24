//asctime(), ctime(), mktime(), localtime(), gmtime(), wcsftime(), snprintf(),setlocale()
//
#include <time.h>
size_t strftime(char* restrict s, size_t n, const char* restrict format,
		const struct tm* restrict timeptr);

//%[modifier]specifier

//a tm_wday
//A tm_wday
//...
//

time_t now = [0];
time(&now);
struct tm* localnow = localtime(&now);

char hdr_date[999] = "";
if(strftime(hdr_date, 78, "Date: %a, %d %b %Y %T %z", localnow))
{
  puts(hbr_date);
}
else
{
  return -1;
}

