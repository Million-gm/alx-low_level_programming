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
if (i > 48)
j = i + 1;
else
j = i;
while (j <= 57)
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
j++;
}
}
}
}
putchar('\n');
	return (0);
}
