#include "lists.h"

/**
 * add_dnodeint- function which return the adress
 * of the new element or if failed
 * @head: pointer of pointer of type list.
 * @n: int passed in the node.
 *
 * Return: Always 0.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (*head);
}
