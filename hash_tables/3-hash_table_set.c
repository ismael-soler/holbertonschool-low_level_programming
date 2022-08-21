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

	if (key == NULL)
	return (0);

	index = key_index((unsigned char *)key, ht->size);
	ht->array[index]->key = strdup(key);
	if (value)
	ht->array[index]->value = strdup(value);

	return (1);
}
