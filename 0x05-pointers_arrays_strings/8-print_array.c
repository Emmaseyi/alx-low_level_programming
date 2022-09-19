#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int inc;

	int inc;
	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			print("%d", a[inc]);
		else
			print("%d", a[inc]);
	}
putchar(10);
}
