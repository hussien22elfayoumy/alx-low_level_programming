#include "main.h"

/**
*_isdigit - a function that checks for uppercase character.
*Return: 1 if c is uppercase otherwise 0.
*@c: is the char to be checked.
*/
int _isdigit(int c)
{
	if (c >= 0 && c != 'a')
		return (1);
	else
		return (0);
}
