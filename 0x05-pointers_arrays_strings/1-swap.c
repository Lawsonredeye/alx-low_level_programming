#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: agrument 1
 * @b: argument 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
