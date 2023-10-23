#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: main head of the node
 * Return: count i.e the number of element
 */
size_t listint_len(const listint_t *h)
{
	int count = 0, i;
	const listint_t *listnode = malloc(sizeof(listint_t));

	if (h == NULL)
	{
		printf("Node is empty\n");
	}
	listnode = h;

	for (i = 0; listnode != NULL; i++)
	{
		count++;
		listnode = listnode->next;
	}
	return (count);
}
