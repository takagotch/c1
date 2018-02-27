//
//

#include <stdlib.h>
void* bsearch_s(const void* key, const void* array, rsize_t n, rsize_t size,
		int (*compare)(const void* k, const void* el, void* context),
		void* context);

#ifndef __STDC_LIB_EXT1__
#error "This compiler does not support the C11 bounds-checking interfaces."
#endif

typedef struct{

}record;

