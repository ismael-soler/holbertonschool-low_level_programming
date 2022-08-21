#include "main.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table
	int = 0;

	table = malloc (sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(table->size * sizeof(hash_node_t));
	for (i = 0l i < table->size; i++)
		table->items[i] = NULL;

	return (table);

}
