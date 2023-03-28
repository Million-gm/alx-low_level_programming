#include "main.h"
/**
*_strlen- calculates length of the string
*@s: the string
*Return: size of the charachter
*/
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
