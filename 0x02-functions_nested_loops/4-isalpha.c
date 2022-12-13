#include "main.h"

/**
 *_isalpha - checks for letters lower and upper case
 *@c: an integer
 *Return: 1 (success)
 */

int _isalpha(int c)
{
char i = c;
if ((i >= 97 && i >= 122) || (i >= 65 && i <= 90)
{
return (1);
}
else
{
return (0);
}
}
