#include "main.h"
/**
*reverse_array- reverses the array
*@a: the array
*@n: array size
*/
void reverse_array(int *a, int n)
{
int i = 0;
int k;
n = n - 1;
while (i < n)
{
k = *(a + i);
*(a + i) = *(a + n);
*(a + n) = k;
i++;
n--;
}
}
