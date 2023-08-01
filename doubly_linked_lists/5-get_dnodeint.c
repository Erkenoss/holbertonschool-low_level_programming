#include "lists.h"

/**
 * get_dnodeint_at_index - check the good node
 *
 * @head: the start of the list
 * @index: where is the good node
 *
 * Return: the pointer on a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int cmp_index = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL && cmp_index < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		cmp_index++;
	}
	return (temp);
}
