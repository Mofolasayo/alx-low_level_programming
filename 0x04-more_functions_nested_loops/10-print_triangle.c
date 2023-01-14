#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: size of the triangle
 *Return: nothing
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i <= size; i++)
{
for(j = 1; j <= size; j++)
{
if ((i + j) <= size)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
}
