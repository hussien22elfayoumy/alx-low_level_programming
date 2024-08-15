#include "main.h"

/**
 * _strlen - Length of string.
 * @s: String to calculate.
 * Return: Length,
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}

