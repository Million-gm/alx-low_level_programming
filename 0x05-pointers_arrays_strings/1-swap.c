#include "main.h"
/**
*swap_int- it waps two integers
*@a: reference to the first number
*@b: reference to the first number
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
