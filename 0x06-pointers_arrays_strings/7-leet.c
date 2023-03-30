#include "main.h"
/**
*leet- replaces charachters with numbers
*@c: the letters
*Return: uppercase of string c
*/
char *leet(char *c)
{
int i = 0;
int m;
char s[] = {"AEOTLaeotl"};
char sn[] = {"4307143071"};
while (*(c + i) != '\0')
{
m = 0;
while (m < 10)
{
if (*(c + i) == s[m])
{
*(c + i) = sn[m]
}
}
i++;
}

return (c);
}
