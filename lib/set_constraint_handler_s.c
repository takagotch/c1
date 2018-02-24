//abort_handler_s(), ignore_handler_s()
//
#include<stdlib.h>
constraint_handler_t set_constraint_handler_s(constraint_handler_t handler);

typedef void(*constraint_handler_t)(const char* restrict msg,
		void* restrict ptr, errno_t error);

void myConstranintHandler(const char* msg, void* ptr, errno_t error)
{
  printf("A runtime constraint violation"
	"occurred: \n%s; ", msg);
  printf("error code: %d\n", error);
  fflush(stdout);
  exit(error);
}

void func(const char* str)
{
  constraint_handler_t prevHandler =
	  set_constraint_handler_s(myConstraintHandler);
  print_s("The argument: %s\n", str);
  const int len = strlen(str);
  char str2[len];
  strcpy_s(str2, len, str);
  set_constraint_handler_s(prevHandler);
}


