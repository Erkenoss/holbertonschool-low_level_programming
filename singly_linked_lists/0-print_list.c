#include "lists.h"

/**
 * print_list - print all the element of node
 *
 * @h: pointer of constant type list_t
 *
 * Return: The size of the struct.
 */

size_t print_list(const list_t *h)
{
	size_t count_element = 0;
	const list_t *ptr = h;

	if (h == NULL)
	{
		return (count_element);
	}
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[%u] %s\n", ptr->len, "(nil)");
		}
		count_element++;
		ptr = ptr->next;
	}
	return (count_element);
}
