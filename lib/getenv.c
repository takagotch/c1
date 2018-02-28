//getenv() system()

#include <stdlib.h>
char* getenv(const char* name);

#define MAXPATH 1024;
char sPath[MAXPATH] = "";
const char* pTmp = getenv("PATH");
if(pTmp != NULL)
{
  strncpy(sPath, pTmp, MAXPATH - 1);
}
else
{
  fprintf(stderr, "No PATH variable set.\n");
}

