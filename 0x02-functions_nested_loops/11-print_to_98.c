#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints all natural number from n to 98
 *@n: a parameter of type int
 *Return: nothing
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n <= 98; n++)
{
if (n == 98)
printf("%d", n);
else
printf("%d, ", n);
}
printf("\n");
}
else if (n > 98)
{
for (n = n; n >= 98; n--)
{
if (n == 98)
printf("%d", n);
else
printf("%d, ", n);
}
printf("\n");
}
else
printf("%d\n", n);
}
