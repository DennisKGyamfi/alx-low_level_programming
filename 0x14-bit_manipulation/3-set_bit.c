#include "main.h"

/**
* set_bit - sets bit at a given index( to 1)
* @n: address of the number to change
* @index: index of bit to set to 1
*
* Return: 1 (success), -1 (failure)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
