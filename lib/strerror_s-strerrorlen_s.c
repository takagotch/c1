//strerror(), perror()
//
#include <string.h>
errno_t strerror_s(char* s, rsize_t maxsize, errno_t errnum);
size_t strerrorlen_s(errno_t errnum);

#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>

const double x = -1.0;

errno = 0;
//const double y = sqrt(x);
(void) sqrt(x);
if(errno == EDOM)
{
  char msg[] = "";
  strerror_s(msg, sizeof(msg), errno);
  fprintf(stderr, "sqrt: %s\n", msg);
}

