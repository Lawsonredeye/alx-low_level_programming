#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int myAlphabet, my_ilterate;

	for (my_ilterate = 1; my_ilterate <= 10; my_ilterate++)
	{
		for (myAlphabet = 97; myAlphabet <= 122; myAlphabet++)
		{
			_putchar(myAlphabet);
		}
		 _putchar('\n');
	}
}
