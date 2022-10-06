#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocate memory or null if it fails
 */
int *array_range(int min, int max)
{
	int i, d;
	int *a;

	if (min > max)
		return (NULL);
	d = max - min + 1;
	a = malloc(sizeof(int) * d);
	if (a == NULL)
	return (NULL);
	for (i = 0; i < d; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
