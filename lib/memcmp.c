//strcmp(), strncmp(), wmwmcmp()

#include <string.h>
int memcmp(const void* b1, const void* b2, size_t n);



long setone[5] = { 1, 3, 5, 7, 9 };
long settwo[5] = { 0, 2, 4, 6, 8 };

for(int i = 0; i < 5; i++)
{
  settwo[i] += 1;
}
if(memcmp(&setone, &settwo, sizeof(settwo)) == 0)
{
  printf("The two arrays are identical, byte for byte.\n");
}

