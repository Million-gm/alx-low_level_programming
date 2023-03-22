#include "main.h"
/**
*_islower- checks if character is lowercase
*@c: character ascii no to be checked
*Return: 0 if uppercase, 1 if lowercase
*/

int _islower(int c)
{
if(c>=97 && c<=122)
return 1;
else
return 0;
}
