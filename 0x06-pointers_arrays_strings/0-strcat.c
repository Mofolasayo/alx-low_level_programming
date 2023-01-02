#include "main.h"

/**
 *_strcat - concatenates two strings overwriting '\0'
 *@dest: a pointer to an array of characters
 *@src: a pointer to another array of characters
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
j = _strlen(dest);
while (dest[i] != '\0')
{
dest[j] = src[i];
i++;
j++;
}
return (dest);
}
