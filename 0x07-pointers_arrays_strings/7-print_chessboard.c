#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to a string that we will sesarch in
 * Return: void;
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
