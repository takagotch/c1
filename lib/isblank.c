//iswblank()
//isalnum(), isalpha(), iscntrl(), isdigit(), isgraph(), islower(), isprint(), ispunct(), isspace(), isupper(), isxdigit()

#include <ctype.h>
int isblank(int c);


#define MAX_STRING 80
char raw_name[MAX_STRING];

printf("Enter your name, please: ");
fgets(raw_name, sizeof(raw_name), stdin);
int i = (strlen(raw_name));
while(i >= 0)
{
  if(raw_name[i] == '\n')
  {
    raw_name = '\0';
  }
  else if(isblank(raw_name[i]))
  {
    raw_name[i] = '\0';
  }
  else
  {
    break;
  }
  --i;
}

//isprint()


