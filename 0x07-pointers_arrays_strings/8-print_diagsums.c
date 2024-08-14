#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - a a function that prints the sum of the two diagonals of a *      square matrix of integers.
 * @a: pointer to a string that we will sesarch in
 * Return: void;
 */
void print_diagsums(int *a, int size)
{
    int i, j;
    int left = 0, right = 0;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
            {
                left += *(a + i * size + j);
            }
            if (i + j == size - 1)
            {
                right += *(a + i * size + j);
            }
        }
    }
    printf("%d, %d\n", left, right);
}
