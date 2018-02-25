//vascanf, vscanf, vsscanf.c

//va_start(), va_arg(), va_copy(), va_end()
//fscanf(), scanf(), sscanf()
//vfwscanf(), vwscanf(), vswcanf()
//__STDC_LIB_EXT1__
//

#include <stdio.h>
#include <string.h>
int vfscanf(FILE* restrict fp, const char* restrict format, va_list argptr);
int vscanf(const char* restrict format, va_list argptr);
int vsscanf(const char* restrict src, const char* restrict format, va_list argptr);



typedef struct {
  char lastname[20];
  char firstname[20];
  int dob_month;
  int dob_day;
  int dob_year;
}person;

person employee;

int read_person(char* lname, char* fname, ...)
{
  puts("Enter the last name and first name (Example: Smith, Sally)");
  int count = scanf("%[^,], %[^\n]", lname, fname);

  va_list args;
  va_start(args, fname); //args initialize; fname args

  if(count == 2 && va_arg(args, int*) != NULL)
  {
    va_end(args);
    va_start(args, fname);  //args initialize
    printf("Enter the date of birth.(Example: 9/21/1926)\n");
    count += vscanf("%d%d%d", args); //birthday read
  }
#ifdef DEBUG
  fprintf(stderr, "Read %d fields.\n", count);
#endif //def DEBUG
  va_end(args);
  return count;
}

int main(void)
{
  person* pEmployee = &employee;
  (void) read_person(pEmployee->lastname,
		    pEmployee->firstname,
		    &pEmployee->dob_mouth,
		    &pEmployee->dob_day,
		    &pEmployee->dob_year);
#ifdef DEBUG
  fprintf(stderr, "Fields read: %s, %s; born %d-%d-%d\n",
		  pEmployee->lastname,
		  pEmployee->firstname,
		  pEmployee->dob_month,
		  pEmployee->dob_day,
		  pEmployee->dob_year);
#endif // def DEBUG
}

