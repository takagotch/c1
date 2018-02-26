//wmemcpy, wmemcpy_s

//

#include <wchar.h>
wchar_t* wmemcpy(wchar_t* restrict dest, const wchar_t* restrict src, size_t n);
errno_t wmemcpy_s(wchar_t* restrict dest, rsize_t destmax,
		const wchar_t* restrict src, rsize_t n);



#define BUFFERSIZE(2048) //wchar_t 

wchar_t inputbuffer[] = {};
wchar_t* writeptr = inputbuffer;








