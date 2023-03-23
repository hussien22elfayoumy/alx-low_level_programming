#include "main.h"

/**
 * main - a functions that prints the numbers from 0 - 9.
 * Return: 0 - 9 followed by new line
*/
void print_numbers(void)
{
	int i;
	i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');

}
