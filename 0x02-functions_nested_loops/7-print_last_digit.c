#include "main.h"
#include<limits.h>
/**
*print_last_digit- prints last digit
*@c: character ascii no to be checked
*Return:last digit of c
*/

int print_last_digit(int c)
{
if (c < 0)
c = c * -1;
if (c==INT_MIN)
{
c= -( c % 10);
_putchar(c + '0');
return (c);
}
c = c % 10;
_putchar('0' + c);
return (c);
}
