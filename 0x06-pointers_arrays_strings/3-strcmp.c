#include "main.h"
/**
*_strcmp- copies src to dest
*@s1: the first string to compare
*@s2: the second string to compare
*Return: difference value of the strings
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
{
j = *(s1 + i) - *(s2 + i);
i++;
if (j != 0)
break;
}
return (j);
}
