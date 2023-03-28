#include "main.h"
#include<stdio.h>
/**
*_strcpy-copies from src to dest the string
*@src: the string source
*@dest: the string destination
*Return: the characthers in dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i+1] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
