#include<stdio.h>
/**
*main- prime factor
*Return: 0
*/
int main(void)
{
long i, k;
int c;
k = 0;
printf("%ld", k);
i = 612852475143;
while ((i % 2) == 0)
{
i = i / 2;
k = 2;
}
printf("%ld", k);
for (c = 0; c <= i; c += 2)
{
while ((i % c) == 0)
{
if (k < i)
k = i;
printf("%ld", k);
i = i / c;
}
}
printf("%ld", k);
return (0);
}
