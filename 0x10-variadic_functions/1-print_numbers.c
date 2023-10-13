#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: char separtor for each num
 * @n: nums to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nums;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, int);
		printf("%d", nums);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}