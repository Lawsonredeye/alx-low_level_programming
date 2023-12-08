#include <stdio.h>
#include "lists.h"

/**
*  delete_dnodeint_at_index - deletes the node at index
*  index of a dlistint_t linked list.
*  @head: list to be searched
*  @index: point which we want to delete
*  Return: 1 to show success
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *del_node;

	if (*head == NULL)
		return (-1);
	del_node = *head;
	for (i = 0; del_node != NULL; i++)
	{
		if (i == index)
		{
			if (del_node == *head)
				*head = del_node->next;
			if (del_node->prev != NULL)
				del_node->prev->next = del_node->next;
			if (del_node->next != NULL)
				del_node->next->prev = del_node->prev;
			free(del_node);
			return (1);
		}
		del_node = del_node->next;
	}
	return (-1);
}
