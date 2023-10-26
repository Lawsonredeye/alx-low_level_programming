#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index.
 * @n: number to be traversed
 * @index: index at which the value is
 * Return:the value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);
	else
		temp = ((n >> index) & 1);
	return (temp);
}
