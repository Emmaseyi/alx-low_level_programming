#include "main.h"

/**
 * _strncat -concatenates two strings but add input number of bytes
 * @dest: String to be appended upon
 * @src: String to be completed at the end of @dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
