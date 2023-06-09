#include "main.h"
/**
*_strncpy- copies src to dest
*@dest: the copied string destination
*@src: the source string for concatination
*@n: bytes from src
*Return: concatinated string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int k = n+1;
while (*(src + n) == '\0')
{
if (n <= 0)
break;
n--;
}
while (j < n && *(src + j))
{
*(dest + j) = *(src + j);
j++;
}
for (i = j; i < k; i++)
*(dest + i) = '\0';

return (dest);
}
