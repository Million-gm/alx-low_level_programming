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
if (*(c + i) == ' ')
{
if (*(c + i + 1) >= 97 && *(c + i + 1) <= 122 && *(c + i + 1) != '\0')
*(c + i + 1) = *(c + i + 1) - 32;
}
i++;
}

return (c);
}
