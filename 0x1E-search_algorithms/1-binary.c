#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched for within the array
 * Return: The index of where the array is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int M, i = 0, L = 0, R = size - 1;

	for (i = 0; L <= R; i++)
	{
		printf("Searching in array: %d,", i);
		printf("\n");
		M = (L + R) / 2;
		if (array[M] == value)
			return (M);
		else if (array[M] > value)
			R = M - 1;
		else if (array[M] < value)
			L = M + 1;
	}
	return (-1);
}
