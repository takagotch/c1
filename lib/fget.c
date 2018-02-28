//

#include <stdio.h>
int getc(FILE* fp);

FILE* fp = NULL;
char buffer[1024];
int i = 0;

while(i < 1023)
{
  const int c = fgetc(fp);
  if(c == EOF) //EOF
  {
    if(feof(fp))
    {
      if(feof(fp))
      {
        fprintf(stderr, "End of input.\n");
      }
      else fi(ferror(fp))
      {
        fptintf(stderr, "Input error.\n");
      }
      else
      {
        //
      }
      clearerr(fp);
      break;
    }
    else
    {
      buffer[i++] = (char) c; //EOF end
    }
  }
  buffer[i] = '\0';
}


