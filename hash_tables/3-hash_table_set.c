#include "hash_tables.h"

/**
 * hash_table_set - add element on index
 *
 * @ht: hash table to add
 * @key: is the key to use
 * @value: associated to the key
 *
 * Return: 1 if successful, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
		
	if (key == NULL || key[0] == '\0')
		return (0);

	if (new_node == NULL)
		return (0);

	index = key_index((const unsigned char*)key, ht->size);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
