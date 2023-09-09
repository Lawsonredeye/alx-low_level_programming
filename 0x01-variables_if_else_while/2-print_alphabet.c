#include <stdio.h>

/**
 *  main - this file is for printing alphabet in lower case from a-z
 *  Return: return 0 and stop the program
 */

int main(void)
{
char myalphabet;

	for (myalphabet = 'a'; myalphabet <= 'z'; myalphabet++)
		putchar(myalphabet);

	putchar('\n');

	return (0);
}
