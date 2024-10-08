#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a function returns the value of x raised to power of y.
 * @x: contains a base
 * @y: contains a power
 * Return: the pow(x, y).
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
