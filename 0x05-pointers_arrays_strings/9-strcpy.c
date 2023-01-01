#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointed to src including '\0' to the buffer
 *pointed to by dest
 *Return: dest
 *@dest: a char variable
 *@src: a char variable
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
