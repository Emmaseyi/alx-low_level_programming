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
	int i, len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	{
		s[i] = str[index];
	}
	s[len] = '\0';

	return (array);
}
