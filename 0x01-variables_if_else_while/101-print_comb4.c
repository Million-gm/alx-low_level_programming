#include <stdio.h>
/* more headers goes there */

/**
*main- main function
*Return: 0
*/
int main(void)
{
int n, i, j;

for (n = 48; n <= 55; n++)
{
for (i = n + 1; i <= 56; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(n);
putchar(i);
putchar(j);
if (n < 55)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
	return (0);
}
