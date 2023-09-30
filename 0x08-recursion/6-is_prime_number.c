#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * helper - function to find square
 * @x: int to variable
 * @y: int to variable
 * Return: helper
 */
int helper(int x, int y)
{
	if (y > sqrt(x))
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (helper(x, y + 1));
	}
}

/**
 *  * is_prime_number - returns 1 if the
 *   * input integer is a prime number
 * @n: int var
 * Return: its prime
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (1);
	}
	if (n < 2 || n == 0)
	{
		return (0);
	}
	return (helper(n, 2));
}
