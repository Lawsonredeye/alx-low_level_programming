#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: link to be traversed
 * Return: the number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i, count = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
