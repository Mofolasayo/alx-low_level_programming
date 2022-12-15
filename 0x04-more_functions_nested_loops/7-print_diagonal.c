#include "main.h"

/**
 *print_diagonal - prints a diagonal line
 *@n: an integer representing the number of diagonal lines
 *Return: nothing
 */

void print_diagonal(int n)
{
if (n <= 0){
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++){
_putchar('\\');
_putchar('\n');
}
}  
}
