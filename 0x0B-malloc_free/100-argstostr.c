#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates
 * all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: result
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int total_len = 0;
	int i, j;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++;
	}

	char *result = malloc(total_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	int pos = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[pos++] = av[i][j];
		}
		result[pos++] = '\n';
	}
	result[pos] = '\0';
	return (result);
}
