#include "lists.h"

/**
 * list_len - print all the element of node
 *
 * @h: pointer of constant type list_t
 *
 * Return: The size of the struct.
 */

size_t list_len(const list_t *h)
{
	size_t count_element = 0;
	const list_t *ptr = h;

	if (h == NULL)
		return (count_element);

	while (ptr != NULL)
	{
		count_element++;
		ptr = ptr->next;
	}
	return (count_element);
}
