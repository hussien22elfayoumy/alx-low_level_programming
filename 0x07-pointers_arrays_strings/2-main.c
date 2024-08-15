#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;

<<<<<<< HEAD
	return 0;
=======
	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
>>>>>>> d73b3a6eda4412bc29dcc5b006c4304ae2fd0068
}
