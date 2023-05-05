#include "main.h"

/**
* print_binary - prints the binary equiv of decimal num
* @n: num to print in binary
*/

void print_binary(unsigned long int n)
{
int j, counter = 0;
unsigned long int c;

for (j = 63; j >= 0; j--)
{
c = n >> j;

if (c & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
if (!counter)
_putchar('0');
}
