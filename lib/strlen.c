//strnlen_s(), wcslen()
//
//
#include <string.h>
size_t strlen(const char* s);


const char line[1024] =
  "This string could easily be hundreds of characters long.";
const char* readtr = line;
const int columns = 80;
while(strlen(readptr) > columns)
{
  printf("%.*s\\", columns-1, readptr);
  readptr += (columns-1);
}
printf("%s\n", readptr);

