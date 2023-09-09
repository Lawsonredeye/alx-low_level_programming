#include <stdio.h>

/**
 *  main- program that prints number of base 16
 *  and it would run on lowercase
 *  Return: return 0 and exit from the program
 */
int main(void)
{
	int bigBase;

	for (bigBase = 0; bigBase < 16; bigBase++)
		if (bigBase < 10)
		{
			putchar('0' + bigBase);
		} else
		{
			putchar('a' + (bigBase - 10));
		}
	putchar('\n');
	return (0);
}
