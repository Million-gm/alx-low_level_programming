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
for (i = n; i > 0; i--)
{
_putchar(' '); 
}  
_putchar('\\');
}
_putchar('\n');
}
