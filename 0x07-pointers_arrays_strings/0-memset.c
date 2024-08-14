#include "main.h"

/**
 * _puts_recursion - print a string followd by new line
 * @s: contains a string
 * @b: contains a charachter
 * @n: contains a unsigned integer
 * Return: a pointer to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return s;
}
