#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the
 * sum of all its parameters
 * @n: inputted numbers
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, num, sum = 0;
	va_list y;

	va_start(y, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(y, int);
		sum += num;
	}
	return (sum);
}
