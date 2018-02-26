//wmemmove, wmemmove_s

//wmemcpy(), wcsncpy()
//memmove(), memcpy(), strncpy()
//__STDC_LIB_EXT1__

#include <wchar.h>
wchar_t* wmemmove(wchar_t* dest, const wchar_t* src, size_t n);
errno_t wmemmove_s(wchar_t* dest, rsize_t destmax, const wchar_t* src, rsize_t n);

#define LINESIZE 2048 //wchar_t
FILE* fp_input, *fp_tmp;
w_char inputblock[LINESIZE*128], *writeptr;

fp_tmp = tmpfile();
fwrite(inputbock, sizeof(wchar_t), LINESIZE*127, fp_tmp);

wmemmove(inputblock, inputblock + LINESIZE*127, LINESIZE);
//wmemmove_s(inputblock, sizeof(inputblock)/sizeof(wchar_t),
//inputblock + LINESIZE*127, LINESIZE);

writeptr = LINESIZE*127;



