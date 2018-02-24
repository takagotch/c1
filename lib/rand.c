//srand()
//
#include <stdlib.h>
int rand(void);

print("Think of a number between one and twnty.\n"
		"Press Enter when you're ready");
getchar();

srand((unsigned) time(NULL));
for(int i = 0; i < 3; i++)
{
  printf("Is it %u? (y or n) ", 1 + rand() % 20);
  if(tolower(getchar()) == 'y')
  {
    printf("Ha! I knew it!\n");
    exit(0);
  }
  getchar();
}
print("I give up.\n");


