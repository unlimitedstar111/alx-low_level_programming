#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
