#include <stdio.h>

/**
 *main - Entry point
 *Describtion: 'all the letters except q and e'
 *Return: always 0
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
