#include <stdio.h>

/**
 * main - prints prints the name of the file it was
 * compiled from, followed by a new line
 * Return: Always 0.
 */
int main(void)
{
	printf(__FILE__);
	printf("\n");
	return (0);
}
