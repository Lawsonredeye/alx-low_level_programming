#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of recieving variable
 * @height: height of column
 * Return: a
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int k;
	int **a = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		printf("not allocated");
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			printf("Error");
			for (k = 0; k < i; k++)
			{
				free (a[k]);
			}
			free (a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
