#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: a 2D array to be freed
 * @height: int var
 * Return: nothing because its void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
