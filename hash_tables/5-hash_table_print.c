#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0, j = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		for (; current_node; current_node = current_node->next)
		{
			if (j == 1)
				printf(", ");
			j = 1;
			printf("'%s': '%s'", current_node->key, current_node->value);
		}
	}
	printf("}\n");
}
