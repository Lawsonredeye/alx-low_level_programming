#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - function that creates
 * an array of integers.
 * @min: minimum element number
 * @max: maximum element number
 * Return: duo
 */
int *array_range(int min, int max)
{
	int *duo;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	duo = malloc(sizeof(*duo) * (max - min + 1));

	if (duo == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		duo[i] = min + i;
	}
	return (duo);
}
