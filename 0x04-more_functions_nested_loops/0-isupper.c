#include "main.h"
/**
*_isuppe- checks if the letter is uppercase
*@c: character code to be checked
*Return: 1 if uppercase, 0 if lowercase
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
