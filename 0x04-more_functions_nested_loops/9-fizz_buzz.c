#include <stdio.h>

/**
 *fizzbuzz - prints numbers from 1 - 100 
 *  multiples of three prints fizz
 *  multiples of 5 prints buzz
 *  multiples of both prints out fizzbuzz
 *Return: nothing
 */

void fizzbuzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
else
printf("\n");
}
}

/**
 *main -entry point
 *Return: 0 (success)
 */

int main(void)
{
fizzbuzz();
return (0);
}
