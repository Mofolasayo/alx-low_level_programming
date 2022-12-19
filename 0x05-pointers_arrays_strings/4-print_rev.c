#include "main.h"

/**
 *_strlen -returns the length of a string
 *@s: a pointer to a string
 *Return: i (length of the string)
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}


/**
 *print_rev - prints a reversed version of string
 *@s: a pointer to a string
 *Return: nothing
 */

void print_rev(char *s)
{
int i;
for (i = (_strlen(str) - 1); i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
