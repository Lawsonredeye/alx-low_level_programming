#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a listint_t linked list.
 * @head: pointer to the head node
 * @index: where the node to be deleted is
 * Return: 1 for success or -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temps, *qnode;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temps = (*head)->next;
		free(*head);
		*head = temps;
		return (1);
	}
	temps = *head;
	if (temps == NULL)
		return (-1);
	for (i = 0; i < index - 1; i++)
	{
		temps = temps->next;
	}
	if (temps->next == NULL)
	{
		return (-1);
	}
	qnode = temps->next;
	temps->next = qnode->next;
	free(qnode);
	return (1);
}
