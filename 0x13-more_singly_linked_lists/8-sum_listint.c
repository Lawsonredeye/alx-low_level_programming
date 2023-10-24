#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: head node to be traverse
 * Return: the sum of the entire data
 */
int sum_listint(listint_t *head)
{
	listint_t *temps;
	int sum = 0;
	int i;

	if (head == NULL)
	{
		return (0);
	}
	temps = head;
	for (i = 0; temps != NULL; i++)
	{
		sum += temps->n;
		temps = temps->next;
	}
	return (sum);
}
