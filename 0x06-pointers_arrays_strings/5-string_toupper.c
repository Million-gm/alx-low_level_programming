#include "main.h"
/**
*string_toupper- copies src to dest
*@c: the letters
*Return: uppercase of string c
*/
char *string_toupper(char *c)
{
int i = 0;
while (*(c + i) != '\0')
{
if (*(c + i) >= 65 && *(c + i) <= 90)
continue;
if (*(c + i) >= 123 && *(c + i) <= 95)
continue;
if (*(c + i) >= 96 && *(c + i) <= 96)
*(c + i) += 31;
i++;
}

return (c);
}
