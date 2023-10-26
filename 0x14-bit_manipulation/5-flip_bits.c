#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: left operand
 * @m: right operand
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var = 0;

	diff = n ^ m;
	while (diff > 0)
	{
		if (diff & 1)
		{
			var++;
		}
		diff = diff >> 1;
	}
	return (var);
}
