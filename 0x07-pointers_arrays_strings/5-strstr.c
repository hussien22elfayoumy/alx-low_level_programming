#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that searches a string for any of a set of bytes.
 * @haystack: pointer to a string that we will sesarch in
 * @needle: pointer to  a string that we will search for
 * Return: Returns pointer to string if found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
	{
		return haystack;
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		for (i = 0; needle[i]; i++)
		{
			while (*h != '\0' && *n != '\0' && *h == *n)
			{
				h++;
				n++;
			}

			if (*n == '\0')
			{
				return haystack;
			}
		}
		haystack++;
	}
	return (NULL);
}
