#include "main.h"

/**
 * str_concat - returns a pointer to a 2 dimensional array of integers
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int index, index_concat = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
	return (NULL);

	for (index = 0; s1[index]; index++)
		s[index_concat++] = s1[index];

	for (index = 0; s2[index]; index++)
		s[index_concat++] = s2[index];
	return (s);

}
