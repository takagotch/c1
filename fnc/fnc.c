//io
//stdio.h
rename(), reomve()
fopen(), freopen(), tmpfile(), fopen_s(), freopen_s(), tmpfile_s()
fclose()
tmpnam(), tmpnam_s()
feof(), ferror(), clearer()
ftell(), fgetpos()
rewind(), fseek(), fsetpos()
fflush()
setbuf(), setvbuf()

//wchar_t
//wchar.h
// stdio.h 			wcahr.h
				fwide()
fputc(),putc(), putchar()	fputwc(), putwc(), putwchar()
fgetc(), getc(), getchar()	fgetwc(), getwc(), getchar()
ungetc()			ungetwc()
fputs(), puts()			fputws()
fgets(), gets(), gets_s()	fgetws()
fwrite()
fread()
printf(), vprintf(), vprintf(), sprintf(), vsptintf(), snprintf(), vsnprintf()
				wprintf(), vwprintf(), fwprintf(), vfwprintf(), swprintf(), swprintf(), vswprintf()
scanf(), vscnaf(), fscanf(), vfscanf(), sscanf(), vsscanf()
				wscanf(), vwscanf(), fwscanf(), vfwcanf(), swscanf(), vswscanf()



//math
//stdlib.h
//intmax_t imax inttypes.h
//stdio.h			stdint.h
abs(), labs(), llabs()		inmabs()
div(), ldiv(), lldiv()		imaxdiv()
rand(), srand()




//math.h			stdint.h
sin(),cos(), tan(), asin(), acos(), atan()
				csin(), ccos(), ctan(), csin(), cacos(), catan()
sinh(), cosh(), tanh(), asinh(), acosh(), atanh()
				csinh(), ccosh(), ctanh(), casinh(), cacosh(), catanh()
exp()				cexp()
log()				clog()
pow(),sqrt()			cpow(), cqrt()
fabs()				cabs()
//complex.h
atan2()
exp2(), expm1(), frexp(), ldexp(), scalbn(), scalbIn()
log10(),log2(), log1p(), logb(), ilogb()
cbrt(), hypot()
erf(), erfc()
tgamma(), Igamma()
fmod(), remainder(), remquo()
modf()
ceil(), floor()
nextafter(), nexttoward()
trunc(), round(), lround(), llround(), nearbyint(), rint(), lrint(), llrint()
fdim()
fma()
fmin(), fmax()
copysign()
nan()

//
creal(), cimag()
carg()
conj()
cproj()

//tgmath.h
FP_ZERO FP_NORMAL FP_SUBNORMAL FP_INFINITE FP_NAN
fpclassify()
isfinite(), isinf(), isnan(), isnormal(), signbit()
//if(fpclassify(x) == FP_INFINITE)
//if(isinf(x))


//NAN, FE_INVALUD
//math.h
>   	isgreater(x,y)
>=  	isgreaterequal(x,y)
<	isless(x,y)
<=	islessequal(x,y)
< || >	islessgreater(x,y)
test	isunordered(x,y)


#pragma STDC FP_CONTRACT on_off_switch
#pragma STDC CX_LIMITED_RANGE on_off_switch


#pragma STDC FENV_ACCESS ON

//FE_DIVBYZERO FE_INEXACT FE_INVALID FE_OVERFLOW FE_UNDERFLOW
fetestexcept()
feclearexcept()
feraiseexcept()
fegetexceptflag()
fesetexceptflag()

FE_DOWNWARD FE_TOWARDZERO FE_TONEAREST FE_UPWARD
fegetround()
fesetround()

fegetenv()
fesetenv()


feholdexcept()
feupdateenv()


//math_errhandling
//errno

//sqrt() math.h
//MATH_ERRNO 0
//math_errhandling & MATH_ERRNO 0
//errno EDOM amth_errhandling & MATH_ERREXCEPT
//FE_INVALID

//HUGE_VAL float long double HUGE_VALF HUGE_VALL
//math_errhandling  MATH_ERRNO true
//errno ERANGE
//math_errhandling & MATH_ERREXCEPT true
//FE_OVERFLOW FE_DIVBYZERO
//DBL_MIN FLT_MIN LDBL_MI
//math_errhandling & MATH_ERRNO true
//errno ERANGE
//math_errhandling & MATH_ERREXCEPT true
//FE_UNDERFLOW


//wctype.h
//wchar_t
//isdigit(), isxdigit() LC_CTYPE setlocale()
//ctype.h		wctype.h
isalpa()	iswalpha()
islower()	iswlower()
isupper()	iswupper()
isdigit()	iswdigit()
isalnum()	iswalnum()
isprint()	iswprint()
isgraph()	iswgraph()
isspace()	iswspace()
isblank()	iswblank()
ispunct()	iswpunct()
iscntrl()	iswcntrl()


wctype()
iswctype()
//iswalph(wc)
//iswctype(wc, wctype("alpha"))


//ctype.h		wctype.h
tolower()		towlower()
toupper()		towupper


wctrans()
towctrans()
//towupper(wc);
//towctrans(wc, wctrans("toupper"));


//string.h
//wchar.h wcs
//wchar_t, char16, char32_t
//'\0'
//string.h			wchar.h
strlen(), strnlen_s()		wcslen(), wcsnlen_s()
strcpu(), strncpu(), strcpy_s(), strncpy_s()
				wcspy(), wcsncpy(), wcscpy_s(), wcsncpy_s()
strcat(), strncat(), strcat_s(), strncat_s()
				wcscat(), wcsncat(), wcscat_s(), wcsncat_s()
strcmp(), strncmp(), strcoll()	wcscmp(), wcsncmp(), wcscoll()
strxfrm()			wcsxfrm()
strchr(), strrchr()		wcschr(), wcsrchr()
strstr()			wcsstr()
strcpn(), strpbrk()		wcscpn(), wcsbrk()
strspn()			wcsspn()
strtok(), strtok_s()		wcstok(), wcstok_s()

//wchar_t, char16_t, char32_t
//stdlib.h
//MB_CUR_MAX
//stdlib.h		wchar.h			uchar.h
mblen()			mbrlen()
mbrowc()		mbrtowc()		mbrtoc16(), mbrtoc32()
wctomb(),wctomb_s()	wcrtomb(), wcrtomb_s()	c16rtomb(), c32rtomb()
mbstowcs(), mbstowcs_s()mbsrtowcs(), mbsrtowcs_s()
wcstombs(), wcstombs_s()wcsrtombs(), wcsrtombs_s()
			btowc(), wctob()
			mbsinit()


//stdlib.h		wchar.h			inttypes.h
atoi()			
atol(), strtol()	wcstol()  //int
strtoul()		wcstoul()  //long
atoll(), strtoll()	wcstoll()  //unsigned long
strtoull()		wcstoull()  //unsigned long long
						strtoimax(), wcstoimax() //intmax_t
						strtoumax(), wcstoumax() //unitmax_t
strotf()		wcstof()
atof(), strtod()	wcstod()
strtold()		wcstold()



//stdio.h 			wchar.h
sscanf(), vsscanf()		swscanf(), vswscanf()
sprintf(), snprintf()		swprintf(), vswprintf()
vsprintf(), vsnprintf()
//_s



qsort(), qsort_s()
bsearch(), bsearch_s()

//string.h		wchar.h
memcpy(), memcpy_s()	wmemcpy(), wmwmcpy_s()
mwmmove(), memmove_s()	wmemmove(), wmwmmove_s()
memcmp()		wmemcmp()
memchr()		wmemchr()
mwmset(), memset_s()	wmemset(), wmemset_s()


malloc()
calloc()
realloc()
free()

//time.h time()
//struct tm gmtime()
clock()
time()
difftime()
gmtime(), gmtime_s()
localtime(), localtime_s()
mktime()
ctime(), ctime_s(), asctime(), asctime_s(), strftime(), wcsftime()
//strftime() printf() LC_TIME
//wcsftime() strftime() time.h wchar.h

//time()
//time_t ctime(); gmtime(),localtime()
//struct tm mktime(); asctime(), strtime(), wcsftime()

//stdlib.h
getenv(), getenv_s()
system()
atexit(), at_quick_exit()
exit(), __Exit(), quick_exit()
abort()

//signal.h
signal()
raise()

//locale.h
setlocale()
localeconv()
//strcoll(), wcscoll()
//strftime(), wcsftime()

//setjmp.h
longjmp()	setjmp()
setjmp()	longjmp()

//__STDC_NO_THREADS__
//__STDC_NO_ATOMICS__

//threads.h
//call_once(), mutex
call_once()

thrd_ceate()
thrd_current()
thrd_equal()
thrd_sleep()
thrd_yield()
thrd_exit()
thrd_join()
thrd_detach()

//mutex
mutex	mtx_init()
mutex	mtx_lock()
mutex	mtx_timedlock()
mutex 	mtx_trylock()
mutex	mtx_destroy()

cnd_init()
cnd_signal()
cnd_broadcast()
cnd_wait()
cnd_timedwait()
cnd_destroy()

tss_create()
tss_set()
tss_get()
tss_delete()

//stdatomic.h
//ATOMIC_VAR_INIT
//_ATOMIC_type_LOCK_FREE
//atomic_init()
//atomic_is_lock_free()
atomic_load(), atomic_load_explicit()
atomic_store(), atomic_store_explicit()
atomic_exchange(), atomic_exchange_explicit()
atomic_compare_exchange_strong(),
atomic_compare_exchange_strong_explicit(),
atomic_compare_exchange_strong_weak(),
atomic_compare_exchange_weak_explicit()
atomic_fetch_add(), atomic_fetch_add_explicit(),
atomic_fetch_sub(), atomic_fetch_sub_explicit(),
atomic_fetch_or(), atomic_fetch_xor_explicit(),
atomic_fetch_and(), atomic_fetch_and_explicit(0

atomic_flag_clear(), atomic_flag_clear_explicit()
atomic_falg_test_and_set(), atomic_flag_test_and_explicit()

atomic_thread_fence()
atomic_signal_fenct()


//errno.h
perror()	stdio.h //errno stderr
strerror()	string.h //string.h
strerror_s()	string.h //errno
strerrorlen_s()	string.h //errno

//assert()
//assert.h
//abort() free()
#include <stdlib.h>
#include <assert.h>
char* buffers[64] = { NULL };
int i;
assert(i >= 0 && i < 64);
assert(buffer[i] != NULL);
free(buffer[i]);


#define NDEBUG
#include <assert.h>
//_Static_assert



if(remove("test1") != 0)
{
  perror("Couldn't delete 'test1'");
}
fprintf(stderr, "Couldn't delete 'test1': %s\n", sterror(errno));
//strerror()
//strerror_s()


