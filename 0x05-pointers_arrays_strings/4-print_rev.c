#include "main.h"
/**
*print_rev- prints in reverse order
*@s: the string
*/
void print_rev(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
while (i >= 0)
{
printf("%c", *(s + i));
i--;
}
printf("\n");
}
