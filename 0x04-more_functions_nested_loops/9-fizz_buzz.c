#include <stdio.h>

/**
 * main - Fizz Buzz
 * Return: always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
			putchar(' ');
			continue;
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
			putchar(' ');
			continue;
		}
		printf("%d", i);
		putchar(' ');
	}
	printf("\n");
	return (0);
}
