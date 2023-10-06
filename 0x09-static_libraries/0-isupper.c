#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the parameer that holds the value
 * Return: return 1 for upper case,
 * return 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
