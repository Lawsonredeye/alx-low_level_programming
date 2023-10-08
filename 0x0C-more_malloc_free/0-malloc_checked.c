#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked -  function that allocates
 * memory using malloc
 * @b: returns the pointer from j
 * Return: j
 */
void *malloc_checked(unsigned int b)
{
	void *j = malloc(b);

	if (j == NULL)
	{
		exit (98);
	}
	return (j);
}
