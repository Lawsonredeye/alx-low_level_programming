#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks for a digit
 * 0 through 9
 *
 * @c: holds the value to be stored
 *
 * Return: 1 if c is a digit
 * returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: return (0)
 */
int main(int argc, char *argv[])
{
	int i, j; int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
