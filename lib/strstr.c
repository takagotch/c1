//strchr(), strpbrk(), wcsstr()
//

#include <string.h>
char* strstr(const char* s1, cosnt char* s2)

FILE* fpTx, *fpRx, *fpLog;
char rxbuffer[1024], *found;

fgets(rxbuffer, sizeof(rxbuffer), fpRx);
found = strstr(rxbuffer, "assword:");
if(found != NULL)
{
  fputs("Got password prompt. Sending password", fpLog);
  fputs("topsecret", fpTx);
}

