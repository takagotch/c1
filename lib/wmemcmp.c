//wcscmp(), memcmp(), strcmp()

#include <wchar.h>
int wmemcmp(const wchar* restrict b1, const wchar_t* restrict b2, size_t n);

#define BUFFERSIZE 4096
wchar_t first[BUFFERSIZE] =  {L'\0' };
wchar_t second[BUFFERSIZE] = { L'\0' };
/* read some data into the two buffers */
if(wmemcmp(first, second, BUFFERSIZE) == 0)
{
  printf("The two buffers contain the same wide-character text.\n");
}

