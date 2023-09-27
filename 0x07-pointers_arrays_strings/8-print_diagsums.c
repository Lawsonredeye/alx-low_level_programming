#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two digonal of a square.
 * @a: type int
 * @size: type int
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int y, val, sum, sum2;

	y = 0;
	val = 0;
	sum = 0;
	sum2 = 0;
	while (y < (size * size))
	{
		val = a[y];
		sum = sum + val;
		y = y + size + 1;
	}
	y = size - 1;
	while (y < ((size * size) - 1))
	{
		val = a[y];
		sum2 = sum2 + val;
		y = y + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
