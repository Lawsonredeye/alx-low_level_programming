#include "main.h"
#include <stdio.h>

/**
 * rev_string - print a string, in reverse
 * @s: char pointer variable
 * Return: 0 always
 */
void rev_string(char *s)
{
	int y, z;
	int l;

	for (y = 0; s[y] != 0; y++)
	{
	}
	z = 0;
	y = y - 1;

	while (z < y)
	{
		l = y;
		s[y] = s[z];
		s[z] = l;
		z++;
		y--;
	}
}
