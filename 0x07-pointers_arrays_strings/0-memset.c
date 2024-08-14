#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string followd by new line
 * @s: contains a string
 * @b: contains a charachter
 * @n: contains a unsigned integer
 * Return: void.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
