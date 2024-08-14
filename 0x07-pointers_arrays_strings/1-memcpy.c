#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: contains a string memory area
 * @src: contains a string memory area that will bo copied to dest
 * @n: contains a unsigned integer number of compies
 * Return: a pointer to memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int i = 0;

    for (i = 0; i < (int)n; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
}
