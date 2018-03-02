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

//ctype.h
//isalnum() isalpha() isblank() iscntrl() isdigit() isgraph()
//islower() isprint() isspace() isupper() isxdigit() tolower() toupper()
//EOF int 0-255 isdigit() isxdigit() is to

//errno.h
//errno.h errno int lvalue _errno() int 
//#define errno(* _errno())
//
//EDOM
//ELISEQ
//ERANGE
//
//errno.h int errno_t

//fenv.h
//fenv_t
//FE_DEL_ENV const fenv_t *;
//
//FE_DIVBYZERO, FE_INEXACT, FE_INVALID, FE_OVERFLOW, FE_UNDERFLOW
//FE_ALL_EXCEPT
//fexcept_t //fegetexceptflag(), fesetexceptflag()
//
//FE_DOWNWARD FE_TOWARDZERO FE_TONEAREST FE_UPWARD
//fegetround() fesetround()

//flaot.h
//float, double long, long double
//
//s
//d
//p
//b
//e
//FLT_ROUNDS float.h
//-1
//0
//1
//2
//3
//FLT_EVAL_METHOD
//-1
//0
//1
//2
//FLT_RADIX
//FLT_MANT_DIG, DBL_MANT_DIG, LDBL_MANT_DIG
//FLT_MIN_EXP, DBL_MIN_EXP, LDBL_MIN_EXP
//FLT_MAX, DBL_MAX_EXP, LDBL_MAX_EXP
//
//FLT_DIG,DBL_DIG,LDBL_DIT 6,10,10 6,15
//DECIMAL_DIG
//FLT_MIN_10_EXP
//DBL_MIN_10_EXP
//LDBL_MIN_10_EXP
//LDBL_MIN_10_EXP
//FLT_MAX_10_EXP,DBL_MAX_10_EXP,LDBL_MAX_10_EXP
//FLT_MIN,DBL_MIN,DBL_MIN
//FLT_MAX,DBL_MAX,LDBL_MAX
//FLT_EPSLION, DBL_EPSION, LDBL_EPSILON


//inttypes.h
//stdint.h intmax_t unintmax_t
//imaxdiv_t intmax_t quot rem imaxdiv() intmax_t struct imaxdiv_t

//inttypes.h imaxdiv() intmax_t imaxabs() intmax_t unintmax_t

//PRIdN PRIdLEASTN PRIdFASTN PRIdMAX PRIdPTR
//PRI 	d,i,o,x,X
//#include <inttypes.h>
//int_fast32_t i32Var;
//printf("The value of i32Var in hexadecimal notaion: "
//  "%10" PRIxFAST32 "\n", i32Var);
//
//SCNdN SCNdLEASTN SCNdFASTN SCNMAX SCNdPT

//iso646.h
//and &&
//or ||
//not !
//bitand &
//bitor |
//xor ^
//compl ~
//and_eq &=
//or_eq |=
//xor_eq ^=
//not_eq !=


//limits.h
//char 		CHAR_MIN	CHAR_MAX	UNCAHR_MAX
//signed char	SCHAR_MIN:	SCAHR_MAX
//short		SHRT_MIN	SHRT_MAX	USHRT_MAX
//int		INT_MIN		INT_MAX		UINT_MAX
//long		LONG_MIN	LONG_MAX	ULONG_MAX
//long long	LLONG_MIN	LLONG_MAX	ULLONG_MAX
//
//CHAR_BIT
//MB_LEN_MAX


//locale.h
//LC_ struct lconv NULL
//LC_ALL LC_COLLATE LC_CTYPE
//LC_MONETARY LC_NUMERIC LC_TIME


//math.h
//flaot_t double_t
//
//FLT_EVAL_METHOD	float.h		double.h
//0			float		double
//1			double		double
//2			long double	long double
//
//FP_ZERO FP_NORMAL FP_INFINITE FP_NAN
//fpclassify()
//isfinite(), isinf(), isnan(), isnormal(), sgnbit()
//
//HUGE_VAL, HUGE_VAL, HUGE_VALL
//INFINITY
//NAN
//FP_FAST_FMA, FP_FAST_FMAF, FP_FAST_FMAL
//FP_ILOGBO, FP_ILOFBNAN
//MATH_ERRNO, MATH_ERREXCEPT, math_errhandling


//setjmp.h
//

