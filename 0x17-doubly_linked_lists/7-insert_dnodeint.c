#include "lists.h"
#include <stdio.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position.
 * @h: link to be traversed
 * @idx: index to be traversed
 * @n: data of the new node to be indexed
 * Return: the new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *current;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		current = *h;
		for (i = 0; current != NULL; i++)
		{
			if (i == idx - 1)
			{
				new_node->prev = current;
				new_node->next = current->next;
				if (current->next != NULL)
					current->next->prev = new_node;
				current->next = new_node;
				return (new_node);
			}
			current = current->next;
		}
		if (i == idx)
		{
			current = *h;
			while (current->next != NULL)
			{
				current = current->next;
			}
			new_node->prev = current;
			new_node->next = NULL;
			current->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
