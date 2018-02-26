//exit(), _Exit(), quick_exit(), at_quick_exit(), raise(), abort()

#include <assert.h>
void assert(int expression);

//program: file:line: function: Assertion 'expression' failed.

int units_in_stock = 10;
int units_shipped = 9;

units_shipped++;
units_in_stock--;

units_in_stock -= units_shipped;
assert(units_in_stock >= 0);



