#include <stdio.h>

/**
 * main - program excluding q and e
 * Return: return 0 in output
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
