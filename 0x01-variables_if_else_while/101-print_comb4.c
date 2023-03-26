#include <stdio.h>
/* more headers goes there */

/**
*main- main function
*Return: 0
*/
int main(void)
{
int n, i, j;

for (n = 48; n <= 50; n++)
{
for (i = n + 1; i <= 56; n++)
{
for (j = i + 1; j <= 57; n++)
{
putchar(n);
putchar(i);
putchar(j);
putchar(',');
putchar(' ');

}
}
}
putchar('\n');
	return (0);
}
