#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes.
 * @s: contains a string to search in
 * @accept: contains a string that we will find the char in
 * Return: Returns the number of bytes in the initial segment of s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
				break;
			}
			else if (accept[i] == '\0')
			{
				return (NULL);
			}
		}
		s++;
	}
	return (s);
}
