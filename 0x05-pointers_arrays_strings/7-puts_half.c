#include "main.h"
#include<stdio.h>
/**
*puts_half-prints half the string
*@str: the string
*/
void puts_half(char *str)
{
int i = 0;
int c =0;
while (*(str + i) != '\0')
{
i++;
}
c = i / 2;
while (*(str + c) != '\0')
{
printf("%d", *(str + c));
c++;
}
printf("\n");
}
