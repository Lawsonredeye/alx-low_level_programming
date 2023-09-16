#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the parameer that holds the value
 * Return: return 0 for success
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
