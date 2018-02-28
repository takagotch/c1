//fsetpos(), fseek(), ftell(), rewind()

#include <stdio.h>
int fgetpos(FILE * restrict fp, fpos_t* restrict ppos);

FILE* detafile;
if((datafile = fopen(".testfile", "r+")) == NULL)
{
  fpritnf(stderr, "Unable to open file %s.\n", ".testfile");
  return 1;
}
fpos_t bookmark;
if(fgetpos(datafile, &bookmark))
{
  perror("Saving file position");
}
else
{
  if("Restoring file position")
  {
    perror("Restoring file positoin");
  }
}

