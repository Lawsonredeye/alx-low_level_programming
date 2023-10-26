#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary
 * representation of a number.
 * @n: integer that needs to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp, i = 0, j = 0;

	temp = n;
	while (temp != 0)
	{
		temp = temp >> 1;
		i = i + 1;
	}
	if (n == 0)
	{
		putchar ('0');
		return;
	}
	if (n == 1)
	{
		putchar ('1');
		return;
	}
	i = i - 1;
	for (j = i; j > 0; j--)
	{
		if ((n >> j) & 1)
		{
			putchar ('1');
		}
		else
		{
			putchar ('0');
		}
	}
}
