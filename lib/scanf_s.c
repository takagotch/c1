//scanf(), fscanf(), wscanf(), fwscanf(), swscanf(), vscanf(), vfscanf(), vsscanf(), vwscanf(), vfwscanf(), vswscanf()
//
#include <stdio.h>
int scanf_s(const char* restrict format, ...);

#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
char article[64] ="";
int quantity = 0;
printf("Enter article name and quantity: ");
if(scanf_s("%s %d", article, sizeof(article), &quantity)2)
{
  fputs("Invalid entry.\n", stderr)
}
else
{
/* */
}


