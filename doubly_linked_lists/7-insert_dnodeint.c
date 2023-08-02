#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node to a pos
 *
 * @h: start of the list
 * @idx: pos we need for put a node
 * @n: int in the struct
 *
 * Return: a pointer on the new node or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temp = *h;

	while (temp->next != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
