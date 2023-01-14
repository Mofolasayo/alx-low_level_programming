#include "main.h"

/**
 *print_square - prints a square using #
 *@size: an integer denoting the size of the square
 *Return: nothing
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 1; j < size; j++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}
}
