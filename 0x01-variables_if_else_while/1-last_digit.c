#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main- main function
*Return: 0
*/
int main(void)
{
int n, i;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
i = n % 10;
printf("Last digit of %d  is ", n);
printf("%d and ", i);
if (i < 6 && i != 0)
{
printf("is less than 6 and not 0\n");
}
else if (i > 5)
{
printf("is greater than 5\n");
}
else
{
printf("is 0\n");
}
	return (0);
}
