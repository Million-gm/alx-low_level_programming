#include "main.h"
/**
*_atoi- convert a string to an integer
*@s: the string
*Return: the integer value of s
*/
int _atoi(char *s)
{
int i;
int m, p;
i = 0;
m = 0;
p = -1;
while (s[i] != '\0')
{
if (s[i] == '-')
p *= -1;
if (s[i] > 47 && s[i] < 58)
{
if (m < 0)
m = (m * 10) - (s[i] - '0');
else
m = (s[i] - '0') * -1;
if (s[i + 1] < 48 || s[i + 1] > 57)
break;
}
i++;
}
if (p < 0)
m =m * -1;
return (m);
}
