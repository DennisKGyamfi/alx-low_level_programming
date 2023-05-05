#include "main.h"

/**
* flip_bits - checks the num of bits to change
* to get from one num to another
* @n: first num
* @m: second num
*
* Return: num of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, cnt = 0;
unsigned long int curr;
unsigned long int excl = n ^ m;

for (j = 63; j >= 0; j--)
{
curr = excl >> j;
if (curr & 1)
cnt++;
}

return (cnt);
}
