#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: number 1
 * @b: number 2
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
