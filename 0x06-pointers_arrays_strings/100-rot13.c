#include "main.h"
/**
 * rot13 - rotates a string by 13
 * @str: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
int i = 0;
int m;
char undecoded[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (str[i] != '\0')
{
m = 0;
while (undecoded[m] != '\0')
{
if (str[i] == undecoded[m])
{
str[i] = encoded[m];
break;
}
m++;
}
i++;
}
return (str);
}
