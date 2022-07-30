#include "hash_tables.h"

/**
 * hash_table_set - function to add a new key to the hash_table
 * @ht: pointer to the hashTable
 * @key: the new key to be added
 * @value: the value for the new key
 * Return: 1 on success, else 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *temp;
	unsigned long int idx;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
			strlen(key) == 0)
		return (0);

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (0);
	}
	if (key == NULL)
		return (0);

	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = NULL;

	idx = key_index(((const unsigned char *)key), ht->size);
	if (ht->array[idx] == NULL)
		ht->array[idx] = newNode;
	else
		temp = ht->array[idx];
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (1);
}
