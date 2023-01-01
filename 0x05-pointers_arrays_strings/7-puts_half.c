#include "main.h"


/**
 *_strlen - return the length of a string
 *@s: pointer to a char
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
 *puts_half - prints the second half of a string
 *@str: a pointer
 *Return: nothing
 */

void puts_half(char *str)
{
if (_strlen(str) % 2 == 0)
{
int i;
for (i = (_strlen(str) / 2); i < _strlen(str); i++)
{
_putchar(str[i]);
}
}
else if (_strlen(str) % 2 != 0)
{
int i;
for (i = (_strlen(str) - 1) / 2; i < _strlen(str) ; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
