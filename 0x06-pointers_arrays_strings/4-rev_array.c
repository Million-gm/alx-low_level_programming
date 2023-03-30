#include "main.h"
/**
*reverse_array- reverses array
*@a: the array
*@n: array size
*/
void reverse_array(int *a, int n)
{
int i = 0;
int k = n;
while (*(a + i) != '\0')
{
*(a + k) = *(a + i);
k++;
i++;
}
k = n;
while (i >= 0)
{
*(a + i) = *(a + k);
k++;
i--;
}
while (k >= n)
{
*(a + k) = '\0';
k--;
}
return (a);
}
