#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int i, count = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return count;
}
