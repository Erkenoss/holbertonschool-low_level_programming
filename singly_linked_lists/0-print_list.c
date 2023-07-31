#include "lists.h"

/**
 * print_list - print all the element of node
 *
 * @h: pointer of constant type list_t
 *
 * Return: The size of the struct.
 */

void print_list(const list_t *h)
{
	const list_t *ptr = h;

	while (ptr != NULL && ptr->next != NULL)
		ptr = ptr->next;

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
		ptr = ptr->prev;
	}
}
