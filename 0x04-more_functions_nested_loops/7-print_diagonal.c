#include "main.h"

/**
 * print_diagonal - check the code
 *@n: number of diagonals
 * Return: void.
 */
void print_diagonal(int n)
{
if (n != 0)
{
int i;
int j;
for (j = 0; j <= n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(' '); 
}  
_putchar('\\');
if (j != n)
_putchar('\n');
}
}
_putchar('\n');
}
