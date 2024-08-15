#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: contains a string that will be searched
 * @c: contains a character to be found
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
