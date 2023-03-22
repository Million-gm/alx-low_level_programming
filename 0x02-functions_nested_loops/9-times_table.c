#include "main.h"
#include <stdio.h>
/**
 * times_table - prints time table
 *
 */
void times_table(void)
{
int c,m,r;
for(c =0; c < 10; c++)
{
for(m =0; m < 10; m++)
{
r = c * m;
printf("%d, "r");
}
_putchar('\n');
}
}
