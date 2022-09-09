#include <stdio.h>
/**
* main - print if the number is positive, zero or negative
*
* Description: using the main function
* this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
* Return: 0
*/
int main(void)
{
int h;

for (h = 48; h <= 5 ; h++)
{
putchar(h);
if (h != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
