#include "hash_tables.h"

/**
 * hash_table_get - retreives the value associated with the key
 * @ht: hash table
 * @key: key
 * Return: pointer to string value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];

	if (current_node)
	{
		for(; current_node; current_node = current_node->next)
		{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		}
	}

	return (NULL);
}