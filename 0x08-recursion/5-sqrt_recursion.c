#include"main.h"

/**
 * _sqrt_recursion - function that returns natural square root
 * @n: number to calculate square root from
 * Return: result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root
 * of a number
 * @n: number to calculate square root from
 * @i: iterator
 * Return: result of square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (actual_sqrt_recursion(n, i - 1));
	}
	else if (i * i == n)
	{
		return (1);
	}
	else
	{
		return (actual_sqrt_recursion(n, i + 1));
	}
}
