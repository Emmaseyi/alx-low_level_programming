#include "main.h"
/**
 * jack_bauer - function that printdls minutes, and hour for the day of jack bauer
 * starting fron 00:00 to 23:49
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int minutes_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	minutes_remainder = minutes % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0')
	_putchar(  );
	_putchar(minutes / 10 + '0');
	_putchar(minutes_remainder + ' 0');
	minutes++;
	_putchar(   );
	}
	hours++;
	minutes = 0;
}
}
