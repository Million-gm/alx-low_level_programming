#include "main.h"
/**
*more_numbers- prints 0 to 14 repeatedly
*Return: void
*/
void more_numbers(void)
{
int j = 0;
while (j < 10)
{
int i;
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
j++;
}
}
