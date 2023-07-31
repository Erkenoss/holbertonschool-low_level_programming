#include "lists.h"

/**
 * print_list - print all the element of node
 *
 * @list_t *h: pointer of constant type list_t
 *
 * Return: The size of the struct.
 */

size_t print_list(const list_t *h)
{
	size_t count_element = 0;
	int index_str = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
	{
		printf("[0] (nil)");
		return (count_element);
	}
	while (ptr != NULL)
	{
		printf("[%u] %s\n", ptr->len ,ptr->str);
		index_str++;
		count_element++;
		ptr = ptr->next;
	}
	return (count_element);
}
