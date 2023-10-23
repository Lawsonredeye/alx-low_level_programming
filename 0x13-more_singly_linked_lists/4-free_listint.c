#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees listint_t
 * @head: pointer to all node
 * Return: void
 */
void free_listint(listint_t *head)
{
	int i;
	listint_t *dump;

	dump = head;
	for (i = 0; head != NULL; i++)
	{
		dump = head;
		head = head->next;
		free(dump);
	}
}
