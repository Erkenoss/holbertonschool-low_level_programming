#include "lists.h"

/**
 * dlistint_len - print all the element of node
 *
 * @h: pointer of constant type list_t
 *
 * Return: The nbr element in a struct.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_element = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (count_element);

	while (ptr != NULL)
	{
		count_element++;
		ptr = ptr->next;
	}
	return (count_element);
}
