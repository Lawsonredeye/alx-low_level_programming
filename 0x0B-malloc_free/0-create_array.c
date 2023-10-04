#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: counts the size of an array
 * @c: char pointer to function
 * Return: j
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j = malloc(sizeof(char) * size);

	if (j == 0)
	{
		printf("Error");
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			j[i] = c;
		}
	}
	return (j);
}
