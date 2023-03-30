#include "main.h"
#include <stdio.h>
/**
*reverse_array- reverses array
*@a: the array
*@n: array size
*/
void reverse_array(int *a, int n)
{
int i = 0;
int k;
k = n + 1;
while (i < n)
{
*(a + k) = *(a + i);
k++;
i++;
}
i--;
k = n + 1;
while (i >= 0)
{
*(a + i) = *(a + k);
k++;
i--;
}
while (k >= n + 1)
{
*(a + k) = '\0';
k--;
}
}
