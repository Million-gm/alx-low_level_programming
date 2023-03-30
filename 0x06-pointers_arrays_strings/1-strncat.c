#include "main.h"
/**
*_strncat- concatinates two strings
*@dest: the concatinated string destination
*@src: the source string for concatination
*@n: bytes from src
*Return: concatinated string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (*(src + n) == '\0')
{
if (n <= 0)
break;
n--;
}
while (*(dest + i) != '\0')
{
i++;
}
while (j <= n)
{
*(dest + i) = *(src + j);
j++;
i++;
}
return (dest);
}
