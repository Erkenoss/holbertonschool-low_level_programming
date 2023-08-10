#include "hash_tables.h"

/**
 * hash_table_get - search the value
 * associated to the key
 *
 * @ht: pointer on the hash table
 * @key: key associated for research
 *
 * Return: the value associated to the key
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current;

	if (ht == NULL)
		return (NULL);

	if (key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		else
		{
			current = current->next;
		}
	}

	return (NULL);
}
