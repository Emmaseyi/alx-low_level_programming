#include "main.h"

/**
 * factorial - int factorial(int n)
 * @n: number to be used
 *
 * Return: the factorial of the number
 */

int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	i = factorial(n - 1);
	return (n * i);
}
