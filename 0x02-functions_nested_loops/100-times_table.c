#include "main.h"
/**
 * print_times_table - prints the times table with
 * parameter
 * @g: parameter
 * Return: returns nothing
 */
void print_times_table(int g)
{
	int digit, mult, result;
	if (g <= 15 && g >= 0)
{

	for (digit = 0; digit <= g; digit++)
{
	_putchar('0');
	for (mult = 1; mult <= g; mult++)
{
	_putchar(',');
	_putchar(' ');
	result = digit * mult;
	if (result <= 99)
	_putchar(' ');

	if (result <= 9)
	_putchar(' ');
	if (result >= 100)
{
	_putchar((result / 100) + '0');
	_putchar((result / 10) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
	_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
