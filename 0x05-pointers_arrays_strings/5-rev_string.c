#include "main.h"
/**
*rev_string- reverse the string
*@s: the string
*/
void rev_string(char *s)
{
int i = 0;
int j = 0;
while (*(s + i) != '\0')
{
i++;
}
i--;

j = i + 1;
char c[j];
while (i >= 0)
{
c[j] = *(s + i);
j++;
i--;
}
*s = c;
}
