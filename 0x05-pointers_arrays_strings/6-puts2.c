#include "main.h"
#include <stdio.h>
/**
*puts2- reverse the string
*@str: the string
*/
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
if ((i % 2) == 0)
printf("%c", *(str + i));
i++;
}
printf("\n");
}
