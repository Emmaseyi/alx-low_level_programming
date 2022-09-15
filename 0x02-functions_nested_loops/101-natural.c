#include <stdio.h>
/**
 * main - prints count of multiples
 * of 3 or 5 must be below 1024
 * Return: 0
 */
int main(void)
{
	int f, sum = 0;

	for (f = 0; f < 1024; f++)
	{
		if ((f % 3) == 0 || (f % 5) == 0)
		sum += f;
	}
	printf("%d\n", sum);
	return (0);
}
