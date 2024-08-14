#include "main.h"

/**
 * _memset - fill the memory
 * @s: contains a string
 * @b: contains a charachter
 * @n: contains a unsigned integer
 * Return: a pointer to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return s;
}
