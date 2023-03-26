#include <stdio.h>
/* more headers goes there */

/**
*main- main function
*Return: 0
*/
int main(void)
{
int n;

for (n = 97; n <= 122; n++)
{
if (n == 101 || n == 113)
continue;
putchar(n);
}
putchar('\n');
	return (0);
}
