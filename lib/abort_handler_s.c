//ignore_handler_s(), set_constraint_handler_s()
//

#include <stdlib.h>
void abort_handler_s(const char* restrict msg, void* restrict ptr, errno_t error);

char name[15] = "NN";
set_constraint_handler_s(abort_handler_s);
strcpy_s(name, sizeof(name), "Abraham Lincoln");


