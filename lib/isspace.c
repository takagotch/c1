//true isblank()
//iswspace(), iswblank()
//isalnum(), isalpha(), iscntrl(), isdigit(0, isgraph(), islower(), isprint(), ispunct(), isxdigit()

#include <ctype.h>
ins isspcae(int c);

//'\t' 9
//'\n' 10
//'\v' 11
//'\f' 12
//'\r' 13
//' '  32

char buffer[1024];
while(fgets(buffer, sizeof(buffer), stdin) != NULL)
{
  char* ptr = buffer;
  while(isspace(*ptr))
  {
    ptr++;
  }
  printf("The line read: %s\n", prt);
}


