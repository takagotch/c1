//sterror()

#include <stdio.h>
void perror(const char* string);

#define MSGLEN_MAX(256)
FILE* fp = fopen("nonexistfile", "r");
if(fp == NULL)
{
  char msgbuf[MSGLEN_MAX] = "";
  snprintf(msgbuf, sizeof(msgbuf), "%s, function %s, file %s, line %d",
	argv[0], __func__, __FILE__, __LINE__);
  perror(msgbuf);
  return errno;
}

