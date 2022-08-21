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
	unsigned long int i;

	if (key == NULL)
	return (0);

	/*get the position of the element on the table*/
	index = key_index((unsigned char *)key, ht->size);

	/*runs through the array a max of 'size' iterations*/
	for (i = 0; i < ht->size; ht->array[index] = ht->array[index]->next)
	{
		/*checks for the node to exist or is empty*/
		if (ht->array[index] == NULL) /*if the node doesn't exists*/
		{
			ht->array[index] = malloc(sizeof(hash_node_t));
			if (ht == NULL)
				return (0);

			ht->array[index]->key = strdup(key);
			ht->array[index]->value = strdup(value);
			ht->array[index]->next = NULL;
			return (1);
		}
		else if (ht->array[index]) /*if the node alredy exists*/
		{
			if (strcmp(ht->array[index]->key, key) == 0) /*check if the key matches*/
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
			}
				ht->array[index] = ht->array[index]->next;

			return (1);
		}
	}

	return (1);
}
