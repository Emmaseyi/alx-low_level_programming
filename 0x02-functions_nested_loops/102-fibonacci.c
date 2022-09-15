#include <stdio.h>
/**
 * main - prints out first 50
 * fibonacci suit numbers
 * Return: 0
 */
int main(void)
{
	int d;
	unsigned long f1 = 0, f2 = 1, f3;

	for (d = 0; d < 50; d++)
	{
		f3 = f1 + f2;
	printf("%lu", f3);
	f1 = f2;
	f2 = f3;

	if (d == 49)
	printf("\n");
	else
	printf(", ");

	}
	return (0);
}
