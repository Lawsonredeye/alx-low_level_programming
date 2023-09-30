#include <stdio.h>
#include "main.h"

/**
 * helper - helper to the function is_prime_number
 * @num: input number variable
 * @divisor: the divisor constant
 * Return: returns 0
 */
int helper(int num, int divisor)
{
	if (num < 2)
	{
		return (0);
	}
	if (divisor * divisor > num)
	{
		return (1);
	}
	if (num % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (helper(num, divisor + 1));
	}
	return (0);
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number,
 * otherwise return 0
 * @n: var int num
 * Return: always 0
 */
int is_prime_number(int n)
{
	return (helper(n, 2));
}
