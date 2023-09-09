#include <stdio.h>

/**
 * main - command that Prints the alphabet
 *  without q and e
 * Return: return 0 and end the program
 */
int main(void)
{
	char words;

	for (words = 'a'; words <= 'z'; words++)
	{
		if (words != 'e' && words != 'q')
			putchar(words);
	}

	putchar('\n');
	return (0);
}
