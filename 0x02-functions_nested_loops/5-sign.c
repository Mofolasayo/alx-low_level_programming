#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: a parameter
 *Return: 1 for positive number, 0 for zero, and -1 for negative number.
 */

int print_sign(int n)
{
if (n < 0)
{
return (-1);
}
else if (n > 0)
{
return (1);
}
else
{
return (0);
}
}
