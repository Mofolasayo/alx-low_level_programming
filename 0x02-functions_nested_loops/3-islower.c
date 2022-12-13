#include "main.h"

/**
 *_islower - checks for lowercase characters
 *@c: an integer
 *Return: nothing
 */

int _islower(int c)
{
char i = c;
if (i >= 97 && i <= 122)
{
return (1);
}
else
{
return (0);
}
}
