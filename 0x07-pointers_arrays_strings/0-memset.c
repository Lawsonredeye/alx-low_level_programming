#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: data type char
 * @b: data type char
 * @n: data type unsigned int
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
