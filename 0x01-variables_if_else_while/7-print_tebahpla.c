#include <stdio.h>

/**
 *  main - reversing the alphabet
 *  Return: return 0 and end the program
 */
int main(void)
{
	char keyNum;

	for (keyNum = 'z'; keyNum >= 'a'; keyNum--)
		putchar(keyNum);
	putchar('\n');
	return (0);
}
