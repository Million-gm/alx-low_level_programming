#include "main.h"
/**
*_isdigit- checks if the letter is uppercase
*@c: character code to be checked
*Return: 1 if digit, 0 if no digit
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
