#include "main.h"
#include<stdio.h>
/**
*puts_half-prints half the string
*@str: the string
*/
void puts_half(char *str)
{
int i = 1;
int c = 0;
while (*(str + i) != '\0')
{
i++;
}
if (i % 2 ==  0)
{
c = i / 2;
}
else
{
c = i / 2;
c++;
}
while (*(str + c) != '\0')
{
printf("%c", *(str + c));
c++;
}
printf("\n");
}
