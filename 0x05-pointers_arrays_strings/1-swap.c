#include "main.h"

/**
 *swap_int - swaps the value of *a and *b
 *@a: pointer to an integer
 *@b: second pointer to an integer
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
