#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key to be hashed
 * @size: size of the array of the hash table
 * Return: index of the key value to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
