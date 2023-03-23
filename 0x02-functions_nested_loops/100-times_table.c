#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints time table
 *@n: nuber of time table range
 */
void print_times_table(int n)
{
int c, m, r;
for (c = 0; c <= n; c++)
{
for (m = 0; m <= n; m++)
{
r = c * m;
if (m == 0)
_putchar('0' + r);
if (r < 10 && m != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + r);
}
else if (r >= 10 && r < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + (r / 10));
_putchar('0' + (r % 10));
}
else if(r >= 100)
{
int mid;
mid %= 10;
mid /= 10;
mid %= 10;
_putchar(',');
_putchar(' ');
_putchar('0' + (r / 10));
_putchar('0' + mid);
_putchar('0' + (r % 10));
}
}
_putchar('\n');
}
}
