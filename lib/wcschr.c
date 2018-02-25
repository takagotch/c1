//strchr(), wcsrchr()

#include <wchar.h>
wchar_t* wcshr(const wchar_t* s, wchar_t c);

typedef struct{
  wchar_t street[32];
  wchar_t city[32];
  wchar_t stateprovince[32];
  wchar_t zip[16];
}Address;

const wchar_t printadr[128] = L"720 S. Michigan Ave.\nChicago, IL 60605\n";
const size_t streetlen = sizeof(((Address*)NULL)->street)/sizeof(
		  ((Address*)NULL)-> street[0]) - 1;

Address* newAddr = (Address*) calloc(1, sizeof(Address));
if(newAddr != NULL)
{
  const int sublength = wcshr(printaddr, L'\n') - printaddr;
  wcsncpy(newAddr->street, printaddr,
		  (sublength < streetlen ? sublength : streetlen));
}

