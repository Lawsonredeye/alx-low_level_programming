#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  function that allocates memory
 * for an array, using malloc
 * @nmemb: number of element
 * @size: size of the element
 * Return: loc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *loc = malloc(nmemb * size);
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (loc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		loc[i] = 0;
	}
	return (loc);
}
