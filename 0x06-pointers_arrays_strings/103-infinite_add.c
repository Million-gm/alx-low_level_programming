#include "main.h"

/**
 * array_reverse - reverse's the array
 * @n: integer params
 * Return: 0
 */

void array_reverse(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - adds n1 and n2 together
 * @n1: first number to add
 * @n2: second number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k = 0, i = 0, j = 0, digits = 0;
	int a = 0, b = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || k == 1)
	{
		if (i < 0)
			a = 0;
		else
			a = *(n1 + i) - '0';
		if (j < 0)
			b = 0;
		else
			b = *(n2 + j) - '0';
		temp = a + b + k;
		if (temp >= 10)
			k = 1;
		else
			k = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	array_reverse(r);
	return (r);
}
