#include "lists.h"

/**
 * sum_dlistint - add n when iteration
 *
 * @head: the start of the list
 *
 * Return: the sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
