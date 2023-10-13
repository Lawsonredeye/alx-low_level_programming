#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: char separtor for each num
 * @n: nums to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *change;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		change = va_arg(arg, char*);
		if (change != NULL)
		{
			printf("%s", change);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
