#include "main.h"

/**
 * print_diagonal - check the code
 *@n: number of diagonals
 * Return: void.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
if (n > 0)
{
int i;
int j;
for (j = 1; j <= n; j++)
{
for (i = 1; i <= j; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
