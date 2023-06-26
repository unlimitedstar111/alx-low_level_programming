#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be print
 * Return: on success 1
 * On error, -1 is returned, and errno is set apporiately
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
