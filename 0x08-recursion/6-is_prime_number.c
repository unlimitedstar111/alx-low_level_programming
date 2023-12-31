#include"main.h"

/**
 * is_prime_number - says if an integer is aprime number or not
 * @n: number to be evaluated
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/*
 * actual_prime - calculates if a number is prime recursively
 * @n: number to be evaluated
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % 1 == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, i - 1));
	}
}
