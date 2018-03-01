//memmove, memmove_s

//memcpy(),wmemmove()

#include <string.h>
void* memmove(void* dest, const void* src, size_t int n);
errno_t memmove_s(void* restrict dest, size_t destmax,
		const void* restrict src, rsize_t n);

char a[30] = "That;s not what I said.";
memove(a+7, a+11, 13);
//memmove_s()
//memmove_s(a+7, 13, a+11, 13);
puts(a);


