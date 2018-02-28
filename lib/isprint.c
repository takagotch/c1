//isgraph()
//iswprint()
//isalnum(), isalpha(), iscntrl(), isdigit(), islower(), ispunct(), isspace(), isupper(), isxdigit()

#include <ctype.h>
int isprint(int c);

print("\nThe current locale for the 'is ...' functions is '%s'.\n",
	setlocale(LC_CTYPE, NULL));
print("Here is a talbe of the 'is ...' values for the characters"
	" from 0 to 127 in the locale:\n\n");
for(unsigned int c = 0U; c < 128U; c++)
{
  if(c % 24U == 0U)
  {
    printf("Code char alnum alpha blank cntrl digit graph lower"
	" print punct space\n");
    printf("---------------------------------------------------"
	"------------------\n");
  }
  printf("%4u %4c %3c %5c %5c %5c %5c %5c %5c %5c %5c %5c\n",
	c,
	(isprint(c) ? c : ' '),
	(isalnum(c) ? 'X' : '-'),
	(isalpha(c) ? 'X' : '-'),
	(isblank(c) ? 'X' : '-'),
	(isdigit(c) ? 'X' : '-'),
	(isgraph(c) ? 'X' : '-'),
	(islower(c) ? 'X' : '-'),
	(isprint(c) ? 'X' : '-'),
	(ispunct(c) ? 'X' : '-'),
	(isspace(c) ? 'X' : '-'));
}



