#include "main.h"
void printhash(int r);
void printsp(int r);
/**
*print_triangle - prints 0 to 9
*@size: size of the triangle
*Return: void
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = size; i > 0; i--)
{
for (j = 1; j <= size; j++)
{
printsp((size - j));
printhash(j);
}
  
_putchar('\n');
}
}
}
/**
*printsp - prints 0 to 9
*@r: number of space
*Return: void
*/
void printsp(int r)
{
while (r > 0)
{
_putchar(' ');
r--;
}
}
/**
*printhash - prints 0 to 9
*@r: number of #
*Return: void
*/  
void printhash(int r)
{
while (r > 0)
{
_putchar('#');
r--;
}
}
