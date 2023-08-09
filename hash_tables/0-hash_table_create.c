#include "hash_tables.h"

/**
 * hash_table_create - create an hash table
 *
 * @size: size of the array created
 *
 * Return: pointer on the hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int cmp_size = 0;
	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	
	if (new_table == NULL)
	       return (NULL);	
	
	new_table->size = size;
	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return(NULL);
	}
	while (cmp_size < size)
	{
		new_table->array[cmp_size] = NULL;
		cmp_size++;
	}
	return (new_table);
}
