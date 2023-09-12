#include "main.h"

/**
 * main - this is used to ease the stress
 * of writing longer codes with a function
 * Return: return 0 for success
 */
void print_alphabet(void)
{
	int stand;

	for (int stand = 97; stand <= 122; stand++)
		_putchar(stand);
}
int main(void)
{
	print_alphabet();
    return (0);
}
