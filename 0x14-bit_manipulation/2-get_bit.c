#include "main.h"

/**
* get_bit - returns value of bit at an index in a decimal numb
* @n: number to search
* @index: index of bit
*
* Return: value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bit;

if (index > 63)
return (-1);

bit = (n >> index) & 1;

return (bit);
}
