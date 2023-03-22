#include "main.h"

/**
 * print_alphabet_x10 - printing alphabets in nested
 * Return:0
 */

void print_alphabet_x10(void)
{
char m = 'a';
int i = 0;
while(i < 10 )
{
while (m <= 'z')
{
_putchar(m);
m++;
}
_putchar('\n');
i++;
m = 'a';
}
}
