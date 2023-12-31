#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function that adds element to the hash table
 * @ht: hash table
 * @key: key to be hash
 * @value: value associated with key
 * Return: 1 if it succeed, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *p;
	if (key == NULL || value == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	else
	{
		p = malloc(sizeof(hash_node_t));
		if (p == NULL)
			return (0);
		p->key = malloc((strlen(key) + 1) * sizeof(char));
		p->value = malloc((strlen(value) + 1) * sizeof(char));
		if (p->key == NULL || p->value == NULL)
		{
			free(p);
			return (0);
		}
		if (strdup(key) == NULL || strdup(value) == NULL)
		{
			free(p);
			return (0);
		}
		p->key = strdup(key);
		p->value = strdup(value);
		if (p->key == NULL || p->value == NULL)
		{
			free(p);
			return (0);
		}
		index = hash_djb2((unsigned char *)p->key);

		if (ht->array[index] == NULL)
			ht->array[index] = p;
		else
		{
			p->next = ht->array[index];
			ht->array[index] = p;
		}
	}
	return (1);
}
