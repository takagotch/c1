//assert.h inttypes.h signal.h stdint.h threads.h*
//complex.h iso646.h stdalign.h* stdio.h time.h
//ctype.h limits.h stdarg.h stdlib.h uchar.h*
//errno.h locale.h stdatomic.h* stdnoreturn.h* wchar.h
//fenv.h math.h stdbool.h string.h wctype.h
//float.h setjmp.h stddef.h tgmath.h

//__STDC_NO_COMPLEX__, __STDC_NO_ATOMIC__, __STDC_NO_THREADS__ 1

#include

//float.h stdalign.h stddef.h
//iso646.h stdbool.h stdnoreturn.h

double x = -1.0, y = sqrt(x);

char* msg; strcpy(msg, "error");

double x; scanf("%f, &x");

char name[] = "Hi "; strcat(name, "Alice");

int c = "A";
while(c <= '2') putchar(c++);

#include <ctype.h>
c = toupper(c);  //toupper()


#include <ctype.h>
#undef toupper
c = toupper(c) // toupper()

#include <ctype.h>
c = (toupper)(c) //toupper()

extern int toupper(int);
c = toupper(c) //toupper()

//__x, _MAX
//_a_
//errno strcpy sting.h
//#include

//__STDC_LIB_EXT1__
//stdio.h scanf() scanf_s()
//string.h strcpy() strcpy_s()
//__STDC_WANT_LIB_EXT1__ 1
#define __STDC__WANT_LIB_EXT1__ 1
#include <stdio.h>

//__STDC_LIB_EXT1__ 0
//__STDC_LIB_EXT1__


//rsize_t
//stddef.h rsize_t RSIZE_MAX
//abort() set_constraint_handler_s()
//errno_t errno.h int

//assert.h
//assert() NODEBUG 
//static_assert _Static_assert

//complex.h
////__STDC_NO_COMPLEX__
//csin()
//cerf(), cerfc(), cexpm1(), clog10(), clog1p()
//clog2(), clgamma(), ctgamma()
//float _Complex long double _Complex
//complex _Complex
//_Complex_I const float _Complex i
//I _Complex_I _Imaginary_I
//imaginary _Imaginary
//_Imaginary_I const float _Imaginary _Imaginary_I
//CMPLX, CMPXF, CMPLXL

//


