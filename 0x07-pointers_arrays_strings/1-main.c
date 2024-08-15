#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
  {
    if (i % 10)
    {
      printf(" ");
    }
    if (!(i % 10) && i)
    {
      printf("\n");
    }
    printf("0x%02x", buffer[i]);
    i++;
  }
  printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	return 0;
=======
  char buffer[98] = {0};
  char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

  simple_print_buffer(buffer, 98);
  _memcpy(buffer + 50, buffer2, 10);
  printf("-------------------------------------------------\n");
  simple_print_buffer(buffer, 98);
  return (0);
>>>>>>> d73b3a6eda4412bc29dcc5b006c4304ae2fd0068
}
