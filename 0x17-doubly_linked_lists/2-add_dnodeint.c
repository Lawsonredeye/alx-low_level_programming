#include <stdio.h>
#include "lists.h"

/**
 * _add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: head node to be linked with
 * @n: data value of the new_node
 * Return: a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_d new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	new_node->n = n;
	new_mode->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->next = new_node;
	*head = new_node;
	return (*head);
}
