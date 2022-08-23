#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node = NULL, *next_node = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (current_node = ht->array[i]; current_node; current_node = next_node)
		{
			next_node = current_node->next;
			free(current_node->value);
			free(current_node->key);
			free(current_node);
		}
	}
	free(ht->array);
	free(ht);
}
