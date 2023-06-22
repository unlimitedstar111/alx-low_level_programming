#include "main.h"

/**
 * print_sign - a function that prints a sign of a number
 *@n: the integer to be checked
 * Return: 1 for positive, -1 for negative and 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{_putchar(45);
	return (-1);
	}
	else
	{_putchar(48);
	}
	return (0);
}
