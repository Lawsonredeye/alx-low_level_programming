#include <stdio.h>
#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node
* of a dlistint_t linked list.
* @head: link being traversed
* @index: where the node is located
* Return: the nth node when found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *finder;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			finder = head;
			return (finder);
		}
		head = head->next;
	}
	return (NULL);
}
