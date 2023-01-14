#include <stdio.h>

/**
 *fizzbuzz - prints numbers from 1 - 100 while checking for the multiples of 3 and 5
 *Return: nothing
 */

void fizzbuzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
printf("%d ", i);
}
}
