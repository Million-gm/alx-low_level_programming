#include "main.h"
#include<stdio.h>
/**
*print_array-prints the array data
*@a: the string
*@n: the string
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", *(a + i));
if (i < (n - 1))
{
printf(", ");
}
i++;
}
printf("\n");
}
