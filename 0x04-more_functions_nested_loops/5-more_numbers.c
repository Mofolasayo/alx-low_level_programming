#include "main.h"

/**
 *more_numbers - prints numbers 0 to 14 ten times
 *Return: nothing
 */

void more_numbers(void)
{
char n, j;
int i = 0;
while (i < 10)
{
for (n = 0; n <= 14; n++)
{
j = n;
if (n > 9)
{
_putchar('1');
j = n % 10;
}
_putchar('0' + j);
}
_putchar('\n');
i++;
}
}
