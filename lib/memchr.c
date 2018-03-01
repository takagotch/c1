//strchr(), wmwmchr()

#include <string.h>
void* memchr(const void* buffer, int c, size_t n);

char buffer[4096] = "";

fgets(buffer, sizeof(buffer), stdin);
char* found;
int ch = ' ';

while((found = memchr(buffer, ch, strlen(buffer))) != NULL)
{
  *found = '_';
}



