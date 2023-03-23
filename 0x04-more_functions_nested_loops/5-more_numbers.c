#include "main.h"
#include<stdio.h>
/**
*more_numbers - prints 0 to 14
*Return: void
*/
void more_numbers(void)
{
int j = 0;
while (j < 10)
{
int i;
for (i = 0; i <= 14; i++)
{
printf("%d", i);
}
printf('\n');
j++;
}
}
