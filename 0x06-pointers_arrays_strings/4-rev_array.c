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
printf("the counters are \ti=%d\tk=%d\n", i, k);
k++;
i--;
}
printf("the counters at last are \ti=%d\tk=%d\n", i, k);
}
