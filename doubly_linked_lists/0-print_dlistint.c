#include "lists.h"

/**
 * print_dlistint - print all the element of node
 *
 * @h: pointer of constant type list_t
 *
 * Return: The nbr of node.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (count_node);

	while (ptr != NULL && ptr->next != NULL)
		ptr = ptr->next;

	while (ptr != NULL)
	{
		if (ptr->n != 0)
		{
			printf("%d\n", ptr->n);
		}
		else
		{
			printf("%d\n", ptr->n);
		}
		count_node++;
		ptr = ptr->prev;
	}
	return (count_node);
}
