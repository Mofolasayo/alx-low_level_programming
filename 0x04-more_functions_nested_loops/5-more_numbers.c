#include "main.h"

/**
 *more_numbers - prints numbers 0 to 14 ten times
 *Return: nothing
 */

void more_numbers(void)
{
  int i;
  for (i = 0; i <= 10; i++)
    {
      int j;
      for (j = 0; j <= 14; j++)
	{
	  _putchar(j + '0');
	}
    }
  _putchar('\n');
}
