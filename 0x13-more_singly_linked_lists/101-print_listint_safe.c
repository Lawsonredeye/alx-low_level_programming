#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint_safe - function that prints a
 * listint_t linked list.
 * @head: head node
 * Return: number of node on the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, count = 0;
	const listint_t *dnode, *slow, *fast;

	if (head == NULL)
	{
		exit(98);
	}
	dnode = head;
	slow = head;
	fast = head;
	if (fast == NULL)
	{
		exit(98);
	}
	for (i = 0; slow != NULL && fast != NULL; i++)
	{
		count++;
		printf("[%p] %d\n", (void *)dnode->next, dnode->n);
		dnode = dnode->next;
		if (fast->next == NULL || fast->next->next == NULL)
			break;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			break;
		}
	}

	return (count);
}
