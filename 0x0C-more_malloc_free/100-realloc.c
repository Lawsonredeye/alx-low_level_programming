#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previous mem
 * @old_size: size allocated to ptr
 * @new_size: size allocated to new mem block
 * Return: new mem block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *myrealloc = malloc(new_size);

	if (myrealloc == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (myrealloc);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		free(ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	myrealloc = memcpy(myrealloc, ptr, new_size);
	return (myrealloc);
}
