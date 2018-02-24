//raise(), abort()
//
#include <signal.h>
void (*signal(int sig, void(*handler)(int)))(int);

//SIGPE
//SIGLL
//SIGSEGV
//SIGINT
//SIGTERM
//

#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdint.h>

static void sigint_handler(int sig);
volatile sig_atomic_t i;

int main(void)
{
  if(signal(SIGINT, sigint_handler) == SIG_ERR)
  {
    perror("Failed to install SIGINT handler");
    exit(3);
  }

  while(1)
  {
    puts("Press Ctrl+C to interrupt me.");
    for(i = 0; i < SIG_ATOMIC_MAX ; i++)
    {
      if((i % 100000) == 0)
      {
        printf("\r%d", i / 1000000);
	fflush(stdout);
      }
    }
    raise(SIGNT);
  }
  return 0;
}

static void sigint_handler(int sig)
{
  if(sig != SIGINT)
  {
    exit(1);
  }
  signal(SIGINT, SIG_IGN);
  puts("\nThis is the function siging_handler()."
	"\nDo you want to exit the program now? [y/n]");
  int c = 0;
  while((c = tolower(getchar())) != 'y' && c != 'n' && c != EOF)
  {
    ;
  }
  if(c != 'n')
  {
    exit(0);
  }
  else
  {
    i = 0;
  }
  signal(SIGINT, sigint_handler);
}

