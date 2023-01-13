#include <stdio.h>

/**
 *multiples - prints the sum of multiples of 3 and 5 below 1024
 *Return: nothing
 */

void multiples(void)
{
int i, sum;
sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum = sum + i;
}
}
printf("%d\n", sum);
}

/**
 *main - entry point
 *Return: always 0 (success)
 */

int main(void)
{
multiples();
return (0);
}
