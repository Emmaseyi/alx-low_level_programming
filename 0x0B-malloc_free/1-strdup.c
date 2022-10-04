#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: copied string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *s;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	return (NULL);

	for (index = 0; str[index]; index++)
	{
		s[index] = str[index];
	}
	s[len] = '\0';

	return (s);
}
