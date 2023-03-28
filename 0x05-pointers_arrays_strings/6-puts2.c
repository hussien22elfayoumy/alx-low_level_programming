#include "main.h"

/**
 * puts2 - print half of string
 * @str: pointer to string
*/
void puts2(char *str)
{
	int strlen, i;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	for (i = 0; i < strlen; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
