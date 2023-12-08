#include "lists.h"
#include <stdio.h>

/**
*  sum_dlistint -  returns the sum of all the data
*  (n) of a dlistint_t linked list.
*  @head: link to be traversed
*  Return: sum of all the data in a linked list
*/
int sum_dlistint(dlistint_t *head)
{
	int i, total = 0;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
