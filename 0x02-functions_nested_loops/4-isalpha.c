#include "main.h"
/**
*_isalpha- checks if character is letter
*@c: character ascii num to be checked
*Return: 0 if not letter, 1 if letter
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);
else
return (0);
}
