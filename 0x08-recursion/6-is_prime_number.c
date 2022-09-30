#include "main.h"

/**
 * is_prime_number - returns the 1 if n is prime
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int d = 1;

	if (d >= n)
		return (0);
	if (n % d == 0)
		return (1);

	return (is_prime_number(n % (d + 1)));
}
