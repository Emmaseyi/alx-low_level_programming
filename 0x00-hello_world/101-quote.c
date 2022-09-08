
#include <stdio.h>
#include <unistd.h>

/**
* main - print quote
*
* Description: print Dora's quote
* Return: 1
*/
int main(void)
{
write(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n", 59);
return (1);
}
