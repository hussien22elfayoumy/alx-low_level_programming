#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that gets the length of a prefix substring.
 * @s: contains a string
 * @accept: contains a string
 * Return: Returns the number of bytes in the initial segment of s.
 */
int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[i] == accept[i])
			{
				count++;
			}
		}
		s++;
	}
	return (count);
}
