#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: String to be appended upon
 * @src: String to be completed at the end of @dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
