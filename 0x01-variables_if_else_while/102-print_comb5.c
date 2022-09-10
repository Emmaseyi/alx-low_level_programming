#include <stdio.h>
/**
* main - program that prints all possible different combinations of Two Two digits
*
* Description: using the main function
* this program prints "all possible different combinations of Two Two digits"
* Return: 0
*/
int main(void)
{
int a = 0;
int b;
int c;

while (a <= 099)
{
b = (a / 10 + '0');
c = (a % 10 + '0');
if (b < c)
{
putchar(b);
putchar(c);
if (a != 089)
{
putchar(',');
putchar(' ');
}
}
a++;
}
putchar('\n');
return (0);
}
