#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head node to be traversed
 * @n: data for the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; current->next != NULL; i++)
		current = current->next;
	new_node->n = n;
	new_node->prev = current;
	new_node->next = NULL;
	current->next = new_node;
	return (new_node);
}
