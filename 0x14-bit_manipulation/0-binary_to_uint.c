#include "main.h"

/**
 * binary_to_uint - function that converts binary
 * to unsigned int
 * @b: string with values to be converted
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, nums = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		nums = nums * 2;
		if (b[i] == '1')
		{
			nums = nums + 1;
		}
	}
	return (nums);
}
