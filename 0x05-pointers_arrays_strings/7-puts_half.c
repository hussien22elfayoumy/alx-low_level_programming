#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int strlen, n, i;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	if (strlen % 2 == 0)
	{
		for (i = strlen / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (strlen % 2)
	{
		for (n = (strlen - 1) / 2; n < strlen - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
