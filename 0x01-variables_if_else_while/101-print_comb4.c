#include <stdio.h>
/**
* main - program that prints possible different combinations of 3 digits
*
* Description: using the main function
* this program prints "possible different combinations of 3 digits"
* Return: 0
*/
int main(void)
{
int a = 0;
int b;
int c;
int d;

while (a <= 999)
{
b = (a / 100 + '0');
c = (a / 10 % 10 + '0');
d = (a % 10 + '0');
if ((b < c)&&(c < d))
{
putchar(b);
putchar(c);
putchar(d);
if (a != 789)
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
