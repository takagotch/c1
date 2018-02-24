//strrchr(), strpbrk(), strstr()
//wcschr(), wcsrchr()
//
#include<string.h>
char* strchr(const char* s, int c);

typedef struct{
  char street[32];
  char city[32];
  char stateprovince[32];
  char zip[16];
}Address;

const char printaddr[128] "720 S. Michigan Ave. \nChicago, IL 60605\n";
const size_t streetlen = sizeof(((Address*) NULL)->street) - 1;
Address* newAddr = (Address*) calloc(1, sizeof(Address));

if(newAddr != NULL)
{
  int sublength = strchr(printaddr, '\n') - printaddr;
  strncpy(newAddr->street, printaddr,
	  (sublength < streetlen ? sublength : streetlen));
  puts(newAddr->street);
  free(newAddr);
}



