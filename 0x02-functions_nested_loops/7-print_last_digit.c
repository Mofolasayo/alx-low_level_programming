#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: int
 *Return: n;
 */

int print_last_digit(int n)
{
n = n % 10;
_putchar(n);
return (n);
}
