//long ftell(FILE* fp);
//int fgetpos(FILE* restrict fp, fpos_t* restrict ppos);

#define ARRAY_LEN 1000
long arrPos[ARRAY_LEN] = { OL };
FILE* fp = fopen("messages.txt", "r");
if(fp != NULL)
{
  int i = 0, c1 = '\n', c2;
  while(i < ARRAY_LEN && (c2 = getc(fp)) != EOF)
  {
    if(c1 == '\n' && c2 == '#')
    {
      arrPos[i++] = ftell(fp) - 1;
    }
    c1 = c2;
  }
}

