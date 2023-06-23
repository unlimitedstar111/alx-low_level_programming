#include "main.h"

/**
 * _isdigit - A function that checks for a digit
 * @c: the integer to be checked
 * Return: 1 for digit and 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
