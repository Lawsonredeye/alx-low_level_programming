#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - this adds a new node to the end
 * @head: pointer node
 * @n: data to be assigned to the new node
 * Return: *head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode = malloc(sizeof(listint_t));
	listint_t *Qtemps;
	int i;

	endnode->n = n;
	endnode->next = NULL;
	if (*head == NULL)
	{
		(*head) = endnode;
	}
	else
	{
		Qtemps = *head;
		for (i = 0; Qtemps->next != NULL; i++)
		{
			Qtemps = Qtemps->next;
		}
		Qtemps->next = endnode;
	}
	return (Qtemps);
}
