//memset(), calloc()

#include <wchar.h>
wchar_t* wmemset(wchar_t* dest, wchar_t c, size_t n);

#define BLOCKSIZE 2048 //wchar_t
wchar_t* inputblock;
if((inputblock = (wchar_t*) malloc(BLOCKSIZE * sizeof(wchar_t))) != NULL)
{
  wmemset(inputblock, L"~", BLOCKSIZE);
}


