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
	int mid, k, Low = 0, High = size - 1;

	while (Low <= High)
	{
		printf("Searching in array:");
		for (k = Low; k <= High; k++)
		{
			printf(" %d", array[k]);
			if (k != High)
				printf(",");
		}
		printf("\n");

		mid = Low + (High - Low) / 2;

		if (array[mid] < value)
			Low = mid + 1;
		else if (array[mid] > value)
			High = mid - 1;
		else
			return mid;
	}

	return -1;
}
