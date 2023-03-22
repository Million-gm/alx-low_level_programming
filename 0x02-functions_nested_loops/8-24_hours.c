#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int c, m;
for (c = 0; c < 24; c++)
{
for (m = 0; m< 60;m++)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
