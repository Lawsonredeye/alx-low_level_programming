#include "lists.h"
#include <stdio.h>

/**
* free_dlistint - function that frees a dlistint_t list
* @head: node to be freed
* Return: Nothing!!
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freeman;
	int i;

	for (i = 0; head != NULL; i++)
	{
		freeman = head;
		head = head->next;
		free(freeman);
	}
}
