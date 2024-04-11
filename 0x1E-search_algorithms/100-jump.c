#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched for within the array
 * Return: The index of where the array is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    int block = 0;
    int i = 0, j;
    int sizes = (int)size;

    while (block < sizes)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            printf("Value found between indexes [%d] and [%d]\n", (int)(block - sqrt(sizes)), i);
            return (i);
        }
        i = block;
        if (array[i] > value)
        {
            for (j = i; i > value; j--)
            {
                if (array[j] == value)
                {
                    printf("Value found between indexes [%d] and [%d]\n", (int)(block - sqrt(sizes)), i);
                    return (j);
                }
            }
        }
        block += sqrt(sizes);
    }
    return (-1);
}
