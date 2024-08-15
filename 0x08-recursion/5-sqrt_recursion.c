#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - a function that returns the natural number.
 * @n: contains a number
 * @i: contains integer
 * Return: the pow(x, y).
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - a function that returns natural square root of a number.
 * @n: contains a number
 * Return: square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
