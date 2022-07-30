#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve a value from the hash_table
 *
 * @ht: pointer to the hash_table
 * @key: the key to retrieve its value
 * Return: the value of the key, else NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index(((const unsigned char *)key), ht->size);
	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
