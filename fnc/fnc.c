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












