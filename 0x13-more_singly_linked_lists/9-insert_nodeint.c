#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that
 * inserts a new node at a given position.
 * @head: pointer pointing to the head node
 * @idx: where we would like the node to be added
 * @n: data of the node to be added
 * Return: the newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	unsigned int i;
	listint_t *temp;

	if (head == NULL || newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	temp = *head;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(newnode);
			return(NULL);
		}
		temp = temp->next;
	}
	if (temp == NULL) 
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
