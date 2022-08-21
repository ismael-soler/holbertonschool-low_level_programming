#include "hash_tables.h"

/**
 * key_index - returns the index at which the pair should be stored
 * @key: key
 * @size: size of the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = (hash_djb2(key)) % size;

	return (index);
}
