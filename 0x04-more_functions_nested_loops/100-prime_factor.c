#include<stdio.h>
/**
*main- prime factor
*Return: 0
*/
int main(void)
{
long long i, k, c;
k = 0;
i = 612852475143;
while ((i % 2) == 0)
{
i = i / 2;
k = 2;
}
for (c = 0; c <= sqrt(i); c += 2)
{
while ((i % c) == 0)
{
if (k < i)
k = i;
i = i / c;
}
}
printf("%llu", k);
return (0);
}
