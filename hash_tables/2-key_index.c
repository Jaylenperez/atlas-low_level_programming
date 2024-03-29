#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - calculates the index of a key in the hash table
 * @key: the key to find the index for
 * @size: the size of the hash table's array
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);

}
