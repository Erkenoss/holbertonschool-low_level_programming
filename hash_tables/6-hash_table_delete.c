#include "hash_tables.h"

/**
 * hash_table_delete - delete an hash table
 *
 * @ht: hash table to delete
 *
 * Return: No return, void function
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cmp = 0;
	hash_node_t *next;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	while (cmp < ht->size)
	{
		temp = ht->array[cmp];

		while (temp != NULL)
		{
			next = temp->next;

			free(temp->value);
			free(temp->key);
			free(temp);

			temp = next;
		}
		cmp++;
	}
	free(ht->array);
	free(ht);
}
