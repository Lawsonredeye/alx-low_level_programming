#include "main.h"

/**
 * print_alphabet - prints the alphabet, in
 * lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int stand;

	for (stand = 97; stand <= 122; stand++)
	{
		_putchar(stand);
	}
		_putchar('\n');
}
