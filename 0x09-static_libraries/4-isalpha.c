#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function for alphabet
 * @c: int var
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
