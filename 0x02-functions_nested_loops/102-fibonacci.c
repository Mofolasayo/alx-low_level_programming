#include <stdio.h>

/**
 *fibonacci - prints the first 50 terms starting from 1
 *Return: nothing
 */

void fibonacci(void)
{
int i, term1, term2, nextTerm;
term1 = 1;
term2 = 2;
nextTerm = term1 + term2;
printf("%d, %d\n", t1, t2);
for (1 = 0; i <= 50; i++)
{
printf("%d", nextTerm);
if (i != 50)
{
printf(", ");
}
term1 = term2;
term2 = nextTerm;
nextTerm = t1 + t2;
}
}
