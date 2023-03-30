#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
	int i;
  int m;

	char undecoded[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (undecoded[m] != '\0')
		{
			if (str[i] == undecoded[m])
			{
				str[i] = encoded[m];
				break;
			}
			m++;
		}
		i++;
	}
	return (str);
}
