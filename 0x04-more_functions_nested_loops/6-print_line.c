#include "main.h"

/**
 * print_line - a function that draws a stragiht line.
 * @n: check point
 * Return: _
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
