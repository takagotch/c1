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
//setjmp() jmp_buf longjmp() setjmp() longjmp() 


//signal.h
//sig_atomic_t
//rasie() 
//
//STGABRT SIGLL SIGSEGV
//STGPE SIGNT SIGTERM
//
//SEG_DEL, SIG_IGN
//SIG_ERR


//stdalign.h
//alignas _Alignas
//slignof _Alignof
//__alignas_is_defined, __alignof_is_defined


//stdarg.h
//va_list
//
//va_start()
//va_arg()
//va_copy()
//va_end()


//stdatomic.h
//__STDC_NO_ATOMICS__
//staomic_store() atomic_ memory_ ATOMIC_
//
//atomic_flag
//memory_order
//memory_order_relaxed meomry_order_release memory_oerder_acquire
//memory_order_consume memory_order_acq_rel memory_order_seq_cst
//
//atomic_store_explicit() _explicit atomic_thread_fence()
//
//atomic_bool 		_Atomic_Bool
//atomic_char 		_Atomic char
//atomic_schar 		_Atomic signed char
//atomic_uchar		_Atomic unsigned char
//atomic_short		_Atomic short
//atomic_unshort	_Atomic unsinged short
//atomic_int		_Atomic int
//atomic_uint		_Atomic unsinged int
//aotmic_long		_Atomic long
//atomic_ulong		_Atomic unsigned long
//atomic_llong		_Atomic long long
//atomic_ullong		_Atomic unsigned long long
//atomic_char16_t	_Atomic char16_t
//atomic_char32_t	_Atomic char32_t
//atomic_wchar_t	_Atomic wchar_t
//atomic_int_least8_t	_Atomic char8_t
//atomic_unit_least8_t  _Atomic char8_t
//atomic_int_least16_t  _Atomic int_least16_t
//atomic_unit_least16_t _Atomic uint_least16_t
//atomic_int_leaset32_t _Atomic int_least32_t
//atomic_unit_leaset32_t _Atomic unit_least32_t
//atomic_int_least64_t	_Atomic int_least64_t
//atomic_uint_least64_t _Atomic uint_least64_t
//atomic_int_fast8_t	_Atomc int_fast8_t
//atomic_uint_fast8_t	_Atomic uint_fast8_t
//atomic_int_fast16_t	_Atomic int_fast16_t
//atomic_uint_fast16_t	_Atomic uint_fast16_t
//atomic_int_fast32_t	_Atomic int_fast32_t
//atomic_uint_fast32_t	_Atomic uint_fast32_t
//atomic_int_fast64_t	_Atomic int_fast64_t
//atomic_uint_fast64_t	_Atomic uint_fast64_t
//atomic_intptr_t	_Atomic intptr_t
//atomic_uintptr_t	_Atomic uintptr_t
//atomic_size_t		_Atomic size_t
//atomic_ptrdiff_t	_Atomic ptrdiff_t
//atomic_intmax_t	_Atomic intmax_t
//atomic_uintmax_t	_Atomic uintmax_t

//stdatomic.h
//
//ATOMIC_BOOL_LOCK_FREE ATOMIC_SHORT_LOCK_FREE
//ATOMIC_CHAR_LOCK_FREE ATOMIC_INT_LOCK_FREE
//ATOMIC_CHAR16_T_LOCK_FREE ATOMIC_LONG_LOCK_FREE
//ATMOIC_CAHR32_T_LOCK_FREE ATOMIC_LLONG_LOCK_FREE
//ATOMIC_WCAHR_T_LOCK_FREE ATOMIC_PINTER_LOCK_FREE
//
//ATOMIC_FLAG_INIT
//ATOMIC_VAR(value)
//kill_dependency(y)

//stdbool.h
//bool
//true
//false
//__bool_true_false_are_defined

//stddef.h
//ptrdiff_t
//size_t
//wcahr_t
//max_align_t
//rsize_t
//
//NULL
//offsetof(structure_type, member)


//stdint.h
//int64.h
//
//intN_t INTN_MIN INTN_MAX UINTN_MAX
//int_leasetN_t INT_LEASETN_MIN INT_LEASTN_MAX UNIT_LEASTN_MAX
//intfastN_t INT_FASTN_MIN INT_FASTN_MAX UINT_FASTN_MAX
//intmax_t INTMAX_MIN INTMAX_MAX UINTMAX_MAX
//intptr_t INTPTR_MIN INTPTR_MAX UNINTPTR_MAX
//
//ptrdiff_t PTRDIFF_MIN PTRDIFF
//sig_atomic_t SIG_ATOMIC_MIN SIG_ATOMIC_MAX
//size_t N/A SIZE_MAX
//rsize_t N/A RSIZE_MAX<=SIZE_MAX
//wchar_t WCHAR_MIN WCHAR_MAX
//wint_t WINT_MIN WINT_MAX
//
//INTN_C(value), UINTN_C(value)
//INTMAX_C(value), UINTMAX_C(value)


//stdio.h
//FILE
//fpos_t
//_IOFBF, _IOLBF, _IONBF
//BUFSIZ
//EOF
//FILENAME_MAX
//FOPEN_MAX
//L_tmpnam
//SEEK_SET, SEEK_CUR, SEEK_END
//TMP_MAX
//L_tmpnam_s, TMP_MAX_S
//stdin, stdout, stderr


//stdlib.h
//div_t, ldiv_t, lldiv_t
//constraint_handler_t
//EXIT_FAILURE, EXIT_SUCCESS
//MB_CUR_MAX
//RAND_MAX


//stdnoreturn.h
//_Noreturn


//string.h
//memcpy() str,mem, wcs


//tgmath.h
//#include <tgmath.h>
//float f = 0.5F;
//double d = 1.5;
//double _Compelx z1 = -1.0;
//long double _Complex z2 = I;
//
//sqrt(f) sqrt(f)
//sqrt(d) sqrt(d)
//sqrt(z1) csqert(z1)
//sqrt(z2) csqrt(z2)
//
//carg() cimag() conj() cproj() creal

//threads.h
//thrd_t
//htrd_start_t
//mtx_t
//cnd_t
//tss_t
//tss_dtor_t
//once_flag
//
//thrd_success
//thrd_error
//thrd_busy
//thrd_nomem
//thrd_timeout
//
//mtx_plain
//mtx_timed
//mtx_plain|mtx_recursive
//mtx_timed|mtx_recursive
//
//thread_local
//ONCE_FLAG_INIT
//TSS_DTOR_ITERATIONS



//time.h
//clock_t
//time_t
//struct tm
//
//CLOCKS_PER_SEC



//uchar.h
//
//char16_t
//char32_t


//wchar.h
//
//mbstate_t
//wint_t
//
//WEOF



//wctype.h
//
//wctrans_t
//wctype_t
//
//WEOF






