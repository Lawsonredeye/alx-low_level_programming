#include <stdio.h>
#include "lists.h"

/**
 * _print_dlistint - function that prints all the elements
 * of a dlistint_t list.
 * @h: link to be traversed
 * Return: return count and the number of element
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i, count = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
