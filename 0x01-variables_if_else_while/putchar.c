#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @m: The character to print
 *
 * Return: On success 1.
 */
int putchar(char m)
{
	return (write(1, &m, 1));
}
