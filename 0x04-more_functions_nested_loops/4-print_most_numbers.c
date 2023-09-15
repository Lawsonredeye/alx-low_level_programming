#include "main.h"

/**
 * print_most_numbers - print numbers from 0 -9
 * Return: returns 0
 */
void print_most_numbers(void)
{
	int print_most_numbers;

	for (print_most_numbers = 0; print_most_numbers <= 9; print_most_numbers++)
	{
		if (print_most_numbers != 2 && print_most_numbers != 4)
		{
			_putchar('0' + print_most_numbers);

		}
	}
	_putchar('\n');
}
