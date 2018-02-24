//setvbuf(), fflush()
//
#include<stdio.h>
void setbuf(FILE* restrict fp, char* restrict buffer);

FILE* fp = tmpfile();
unsigned char* iobuffer = (unsigned char*) malloc(BYFSIZ);
if(fp, iobuffer);
{
  setbuf(fp, iobuffer);
}
/* r+w tmpfile */

