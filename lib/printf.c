//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

static void print_line(double x)
{
  int n1;
  int n2;
  printf("x = %5.2f exp(x) = %n%10.5%n\n", x, &n1, exp(x), &n2);
  assert(n2-n1 <= 10);
}

//fprintf(),sprintf(),snprintf()
//wprintf(),fwprint(),swprintf()
//printf(),vprintf(),vfprintf(),vsnprintf()
//printf(),vwprint(), vfwprint(), vswprint()
//scanf(), sscanf(), fscanf()
//

