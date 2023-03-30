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
printf("before copiying \t");
printf("k=%d\t", k);
printf("i=%d\n", i);
while (i <= n)
{
printf("copiying \n");
*(a + k) = *(a + i);
k++;
i++;
}
k = n + 1;
printf("after copiying \t");
printf("k=%d\t", k);
printf("i=%d\n", i);
while (i >= 0)
{
*(a + i) = *(a + k);
k++;
i--;
}
  printf("after copiying last \t");
printf("k=%d\t", k);
printf("i=%d\n", i);
/*while (k >= n)
{
*(a + k) = '\0';
k--;
}*/
}
