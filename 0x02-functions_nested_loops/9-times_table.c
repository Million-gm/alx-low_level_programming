#include "main.h"
#include <stdio.h>
/**
 * times_table - prints time table
 *
 */
void times_table(void)
{
int c, m, r;
for (c = 0; c < 10; c++)
{
for (m = 0; m < 10; m++)
{
r = c * m;
if (m == 0)
_putchar('0' + r);
if (r < 10 && m != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + r);
}
else if (r >= 10)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (r / 10));
_putchar('0' + (r % 10));
}
}
_putchar('\n');
}
}
