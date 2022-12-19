#include "main.h"

/**
 *_puts - imitiates the puts function by printing a string followed by a new line
 *@str: a pointer to a string
 *Return: nothing
 */

void _puts(char *str)
{
  int i;
  for (i = 0; i < _strlen(str); i++)
    {
      _putchar(str[i]);
    }
  _putchar('\n');
}
