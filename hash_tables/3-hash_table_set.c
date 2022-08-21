#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hashtable
* @ht: hash table to add or update the key/value
* @key: key, cannot be an empty string
* @value: value associated with the key
* Return: 1 on success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *current_node = NULL, *new_node = NULL;

	if (key == NULL)
		return (0);

	/*get the position of the element on the table*/
	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];

	/*runs through the array looking for a key match*/
	for (; current_node; current_node = current_node->next)
	{
		if (strcmp(current_node->key, key) == 0) /*checks if the key matches*/
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	ht->array[index] = new_node;
	new_node->next = current_node;

	return (1);
}