#include <stdio.h>

/**
 * main - create a program that prints alphabets in lowercase and uppercase
 *Return: returns 0 to show success and then exit program
 */
int main(void)
{
	char words;

	for (words = 'a'; words <= 'z'; words++)
		putchar(words);
	for (words = 'A'; words <= 'Z'; words++)
		putchar(words);
	putchar('\n');
	return (0);
}
