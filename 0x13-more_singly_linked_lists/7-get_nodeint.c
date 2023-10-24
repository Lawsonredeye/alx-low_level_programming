#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list.
 * @head: head node
 * @index: index node to be returned
 * Return: the nth indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temps;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		temps = head;
		for (i = 0; i < index && temps != NULL; i++)
		{
			temps = temps->next;
		}
		return (temps);
	}
}
