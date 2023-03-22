#include "main.h"
/**
*print_last_digit- prints last digit
*@c: character ascii no to be checked
*Return:last digit of c
*/

int print_last_digit(int c)
{
c = c % 10;
_putchar('0'+c);
return (c);
}
