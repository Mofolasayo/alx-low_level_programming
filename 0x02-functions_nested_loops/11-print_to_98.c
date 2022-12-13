#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints all natural number from n to 98
 *@n: a parameter of type int
 *Return: nothing
 */

void print_to_98(int n)
{
for (n = n; n <= 98; n ++)
{
printf("%d, ", n);
}
}
