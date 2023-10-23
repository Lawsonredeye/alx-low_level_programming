#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - adds a new node to the beginning
 * of the head node.
 * @head: pointer to the head to the node
 * @n: the value of the new node
 * Return: *head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add = malloc(sizeof(listint_t));
	if(add == NULL)
	{
		printf("Empty Node");
		return (NULL);
	}
	add->n = n;
	add->next = (*head)->next;
	*head = add;
	return (*head);
}
