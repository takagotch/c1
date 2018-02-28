//gets(), fgets(), fgetws()
//puts(), fputs(), fputwc()


#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>

puts("Enter a line of text:");
char text[100];
if(gets_s(text, sizeof(text)) == NULL)
{
  fputs("Unable to read the text.\n", stderr);
}
else
{
  printf("Your text:\n%s\n", text);
}




