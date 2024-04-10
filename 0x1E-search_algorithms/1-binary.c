#include "search_algos.h"
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