#include <stdio.h>

/**
 * main - entry point for code execution
 * @argc: int var to main
 * @argv: char variable void
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
