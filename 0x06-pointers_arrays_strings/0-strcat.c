#include "main.h"
/**
*_strcat- concatinates two strings
*@dest: the concatinated string destination
*@src: the source string for concatination
*Return: concatinated string dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
j++;
i++;
}
return (dest);
}
