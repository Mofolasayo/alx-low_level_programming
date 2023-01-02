#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: pointer to a string
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
 *_strncat - concatenates two strings using at most n bytes from src
 *@dest: the destination string
 *@src: the source string
 *@n: number of bytes from src
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
j = _strlen(dest);
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
return (dest);
}
