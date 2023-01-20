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
 *_puts - imitiates function puts by printing a string followed by a new line
 *@str: a pointer to a string
 *Return: nothing
 */

void _puts(char *str)
{
int i;
for (i = 0; i < _strlen(str); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}


/*a better way to implement this code
void _puts(char *str){
    int i = 0;
    while(str[i] != '\0'){
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
*/
