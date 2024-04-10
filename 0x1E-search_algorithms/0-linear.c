#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
 * linear_search - function that perfroms linear search by taking in value
 * an array pointer and the size of the array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched for within the array
 * Return: The index of where the array is located or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%d] = [%d]", i, array[i]);
	}
	return (-1);
}
