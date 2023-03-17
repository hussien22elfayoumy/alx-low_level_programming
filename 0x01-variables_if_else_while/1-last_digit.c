#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Discription: 'get the last digit number'
 *Return: always 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%d is greater then\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d is 0\n", last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("%d is less then 6 and not 0\n", last_digit);
	}
	return (0);
}

