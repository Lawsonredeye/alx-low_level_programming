#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses
 * a listint_t linked list.
 * @head: pointer to the head node
 * Return: the copy of the previous pointer node
 */
listint_t *reverse_listint(listint_t **head)
{
	int i;
	listint_t *front, *back = NULL, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = *head;
	for (i = 0; current != NULL; i++)
	{
		front = current->next;
		current->next = back;
		back = current;
		current = front;
	}
	return (back);
}
