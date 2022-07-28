#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 *
 * @size: the array/hash_table size
 * Return: a hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = malloc(sizeof(hash_table_t));
	size_t i;

	if (hashTable == NULL)
	{
		return (NULL);
	}

	hashTable->array = malloc(size * sizeof(hash_node_t));
	hashTable->size = size;

	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hashTable->array[i] = 0;
	}
	return (hashTable);
}
