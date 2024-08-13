#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion: print a string
 * @s1: string
 * Return: void.
 */

void _puts_recursion(char *s)
{
  if (*s == '\0')
  {
    _putchar('\n');
  }
  _putchar(*s);
  _puts_recursion(s + 1);
}
