#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input
 * to 98, in order to be separated by a comma followed
 * by a space.
 * @b: The number to begin counting at.
 */
void print_to_98(int b)
{

	if (b >= 98)
	{
		while (b > 98)
		printf("%d, ", b--);
	printf("%d\n", b);
	}

	else
	{
		while (b < 98)
			printf("%d, ", b++);
		printf("%d\n", b);
	}
}
