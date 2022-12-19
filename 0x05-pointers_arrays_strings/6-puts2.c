#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: pointer to a string
 *Return: i (length of string)
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
 *puts2 - prints every other character of a string
 *@str: a pointer to a string
 *Return: nothing
 */

void puts2(char *str)
{
int i;
for (i = 0; i < _strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
