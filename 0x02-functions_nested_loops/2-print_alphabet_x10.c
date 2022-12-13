#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 *Return: nothing
 */

void print_alphabet_x10(void)
{
int i;
i = 0;
while (i < 10)
{
char j;
for (j = 97; j <= 122; j++)
{
_putchar(j);
}
i++;
_putchar('\n');
}
}
