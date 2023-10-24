#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the head node
 * Return: the data of the old node
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		i = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (i);
	}
}
