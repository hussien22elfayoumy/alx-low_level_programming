#include "main.h"

/**
*_isupper - a function that checks for uppercase character.
*Return: 1 if c is uppercase otherwise 0.
*@c: is the char to be checked.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
