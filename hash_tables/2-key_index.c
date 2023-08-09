#include "hash_tables.h"

/**
 * key_index - give the index of a key
 *
 * @key: give gave to the _djb2
 * @size: size of the array
 *
 * Return: The index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	return (index % size);
}
