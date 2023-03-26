#include <stdio.h>
/* more headers goes there */

/**
*main- main function
*Return: 0
*/
int main(void)
{
int n, i, j, k;

for (n = 48; n <= 57; n++)
{
for (i = 48; i <= 57; i++)
{
for (k = 48; k <= 56; k++)
{
for (j = i+1; j <= 57; j++)
{
putchar(n);
putchar(i);
putchar(' ');
putchar(k);
putchar(j);
if (n < 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
	return (0);
}
