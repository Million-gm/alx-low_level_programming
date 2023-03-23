#include "main.h"

/**
 * print_diagonal - check the code
 *@n: number of \'s
 * Return: Always 0.
 */
void print_diagonal(int n)
{
if (n !=0)
{
int i, j;
for (i = n; i > 0; i--)
{

_putchar(' '); 
}  
_putchar('\\');
}
_putchar('\n');
}
