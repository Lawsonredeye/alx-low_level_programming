#include <stdio.h>
#include "main.h"

/**
 * guess - function that finds the square root
 * @i: int var to guess
 * @g: int var to guess
 * Return: guess (g, i + i)
 */
int guess(int i, int g)
{
	if (i * i == g)
	{
		return (i);
	}
	else if (i * i > g)
	{
		return (-1);
	}
	if (i * i != g && i * i < g)
	{
		return (guess(i + 1, g));
	}
}

/**
 * _sqrt_recursion - function that calls guess
 * @n: int var to sqrt
 * Return: guess (n, i)
 */
int _sqrt_recursion(int n)
{
	int result = guess(1, n);

	if (result == -1)
	{
		return (result);
	}
	if (n == 0)
	{
		return (0);
	}
	if (result != -1)
	{
		return (result);
	}
	return (-1);
}
