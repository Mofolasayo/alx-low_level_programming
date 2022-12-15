#include "main.h"

/**
 *_isdigit - checks if a number is between 0 and 9
 *@c: an integer
 *Return: 1 (success)
 */

int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
return (0);
}
