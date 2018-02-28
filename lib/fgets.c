//fputs(), puts(), fgetc(), fgetwc(), fputws()


#include <stdio.h>
char* fgets(char* restrict buffer, int n, FILE* restrict fp);

FILE* titlefile = fopen("titles", "r");
if(titlefile == NULL)
{
  perror("Opening title file");
}
else
{
  int counter = 0;
  char title[256];
  while(fgets(title, sizeof(title), titlefile) != NULL)
  {
    title[ strlen(title) -1 ] = '\0';
    printf("%3d: \"%s\"\n", ++counter, title);
  }
  /* fgets() NULL EOF */
  if(feof(titlefile))
  {
    printf("Total: %d titles.\n", counter);
  }
  fcolse(titlefile);
}



