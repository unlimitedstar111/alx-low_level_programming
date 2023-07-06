#include "main.h"

/**
 * _pow_recursion - function that returns the value of x reised to power y
 * @x: value to be raised
 * @y: power
 * Return: the result of power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	if (y == 0)
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

