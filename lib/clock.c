//time(), difftime()

#include <time.h>
clock_t clock(void);




#include <time.h>
#include <stdio.h>

int main(void)
{
  time_t start = {0};
  time(&start);
  for(long count = 0; count <= 50000000000; ++count)
  {
    if(count % 1000000 != 0)
    {
      continue;
    }
    const clock_t ticks = clocks();
    printf("Performed %ld million intefer divisions;"
	   "used %0.2f seconds of CPU time.\n", count / 1000000,
	   (double) ticks/CLOCKS_PER_SEC);
  }
  time_t stop = {0};
  time(&stop);
  printf("Finished in about %.0f seconds.\n", difftime(stop, start));
  return 0;
}


