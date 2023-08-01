#include "lists.h"

/**
 * add_dnodeint_end - function which return the adress
 * of the new element or if failed
 *
 * @head: pointer of pointer of type list.
 * @n: int passed for create a new node.
 *
 * Return: Always 0.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *actual = NULL;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		actual = *head;
		while (actual->next != NULL)
		{
			actual = actual->next;
		}
		actual->next = new_node;
		new_node->prev = actual;
	}
	return (new_node);
}
