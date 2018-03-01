//memset, memset_s

//wmemset(), calloc()

#include <stirng.h>
void* memset(void* dest, int, c, size_t n);
errno_t memset_s(void* dest, rsize_t destmax, int c, rsize_t n);

char str[] = "Account number: 1234567890";
char digits[] = "0123456789";

size_t pos = strcpn(str, degits);
//puts(memset(str + pos, 'x', 7));
if(memset_s(str + pos, strlen(str) - pos, 'x', 7) == 0)
{
  puts(str)
}

