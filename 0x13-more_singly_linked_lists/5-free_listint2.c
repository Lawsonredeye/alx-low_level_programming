#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer pointing to the head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
    int i;
    listint_t *dump;

    dump = *head;
    for (i = 0; *head != NULL; i++)
    {
        dump = *head;
        *head = (*head)->next;
        free(dump);
    }
}
