#include "main.h"

/**
 * print_most_numbers - print numbers form 0-9 not 2 - 4.
 * Return: numbert from 0 - 9 not 2-4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
		_putchar(i + '0');
	}
	_putchar('\n');
}
