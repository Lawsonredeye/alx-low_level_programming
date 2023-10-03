#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: int var to main
 * @argv: char variable void
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int sum = a * b;

		printf("%d\n", sum);
	}
	return (0);
}
