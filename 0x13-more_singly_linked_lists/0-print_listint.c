#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - function that adds a new node
 * at the end of a listint_t list.
 * @h: current head node
 * Return: count
 */
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
