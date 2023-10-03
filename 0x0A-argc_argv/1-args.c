#include <stdio.h>

/**
 * main - entry point for code execution
 * @argc: int var to main
 * @argv: char variable void
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("this is just to close the case\n");
	}
	return (0);
}
