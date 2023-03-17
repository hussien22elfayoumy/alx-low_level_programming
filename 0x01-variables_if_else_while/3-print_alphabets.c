#include <stdio.h>

/**
*main - Entry point
*Discriptin: 'program that prints the alphabet in lowercase and upparcase'
*Return: always 0
*/
int main(void)
{
	int i;
	int m;

	for (i = 97 ; i <= 122 ; i++)
	{
		putchar(i);
	}
	for (m = 65 ; m <= 90 ; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

