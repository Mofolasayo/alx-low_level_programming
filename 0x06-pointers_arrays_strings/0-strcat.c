#include "main.h"
/**
 *_strlen - return the length of a string
 *@s: a pointer to a string of characters
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
 *_strcat - concatenates two strings overwriting '\0'
 *@dest: a pointer to an array of characters
 *@src: a pointer to another array of characters
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = _strlen(dest);
while (dest[i] != '\0')
{
dest[j] = src[i];
i++;
j++;
}
return (dest);
}
