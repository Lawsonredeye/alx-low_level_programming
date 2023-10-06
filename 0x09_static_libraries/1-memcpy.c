#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination char type var
 * @src: source char type var
 * @n: unsigned char type var
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
