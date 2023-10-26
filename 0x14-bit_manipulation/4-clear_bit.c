#include "main.h"

/**
 * clear_bit - function that sets the value of
 * a bit to 0 at a given index
 * @n: number to be traversed
 * @index: index at which the value is
 * Return:the value of the bit at index index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
	}
	return (1);
}
