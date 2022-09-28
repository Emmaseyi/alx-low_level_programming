#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: number to be used
 *
 * Return: otherwise return 0
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if n is prime
 * @n: check number
 *@f: number to start from
 *
 * Return: otherwise return 0
 */
int is_prime(int n, int f)
{
	if (f <= 1)
		return (1);
	else if (n % f == 0)
		return (0);
	return (is_prime(n, f - 1));
}
