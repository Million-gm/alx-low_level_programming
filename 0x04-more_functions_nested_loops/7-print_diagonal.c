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
for (j = n; j > 0; j--)
{
for (i = 0; i < n; i--)
{
_putchar(' '); 
}  
_putchar('\\');
}
_putchar('\n');
}
}
