#include "hash_tables.h"

/**
 * hash_table_print - print the entire table and node into
 *
 * @ht: table to print
 *
 * Return: No return, void function
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count_cmp = 0;
	hash_node_t *current;
	char element = 1;

	if (ht == NULL)
		return;

	printf("{");

	while (count_cmp < ht->size)
	{
		current = ht->array[count_cmp];

		while (current != NULL)
		{
			if (element == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			element = 0;
			current = current->next;
		}
		count_cmp++;
	}
	printf("}\n");
}
