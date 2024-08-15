#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: contains a string
 * Return: the lenght of the string.
 */

int count = 0;

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	count++;
	_strlen_recursion(s + 1);
	return count;
}
