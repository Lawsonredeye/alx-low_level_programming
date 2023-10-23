#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t print_listint(const listint_t *h)
{
	int count = 0, i;
	const listint_t *numcount = malloc(sizeof(listint_t));
	numcount = h;
	for (i = 0; numcount != NULL; i++)
	{
		count++;
		printf("%d\n", numcount->n);
		numcount = numcount->next;
	}
	return (count);
}
