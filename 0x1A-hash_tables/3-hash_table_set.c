#include "hash_tables.h"

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
	p = malloc(sizeof(hash_node_t));
	if (p == NULL)
		return (0);
	p->key = strdup(key);
	if (p->key == NULL)
	{
		free(p);
		return (0);
	}
	p->value = strdup(value);
	if (p->value == NULL)
	{
		free(p->key);
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
	return (1);
}
