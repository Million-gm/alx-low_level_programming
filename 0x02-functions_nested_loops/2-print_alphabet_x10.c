#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
char m = 'a';
int i=0;
while(i<10)
{
while (m <= 'z')
{
_putchar(m);
m++;
}
_putchar('\n');
i++;
}
}
