#include "main.h"

/**
 *print_alphabet - entry point
 *Describtion: a function that prints the alphabet, in lowercase
 *Return: noting
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
