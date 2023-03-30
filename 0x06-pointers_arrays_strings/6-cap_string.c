#include "main.h"
/**
*cap_string- capitalizes every word
*@c: the letters
*Return: uppercase of string c
*/
char *cap_string(char *c)
{
int i = 0;
while (*(c + i) != '\0')
{
if (*(c + i) == ' ' || *(c + i) == '\n')
{
if (*(c + i + 1) >= 97 && *(c + i + 1) <= 122 && *(c + i + 1) != '\0')
*(c + i + 1) = *(c + i + 1) - 32;
}
else if (i == 0 && *(c + i) >= 97 && *(c + i ) <= 122)
{
*(c + i) = *(c + i) - 32;
}
i++;
}

return (c);
}
