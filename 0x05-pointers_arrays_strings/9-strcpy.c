#include "main.h"
#include<stdio.h>
/**
*_strcpy-copies from src to dest the string
*@src: the string source
*@dest: the string destination
*return: the characthers in dest
*/
char *_strcpy(char *dest, char *src){
int i = 0;
do
{
*(dest + i) = *(src + i);
i++;
}while (*(src + i) != '\0');
return (dest);
}
