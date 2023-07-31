#include "lists.h"


/**
 * add_node - function which return the adress of the new element or if failed
 * @head: pointer of pointer of type list.
 * @str: string passed for create a new node.
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *actual = NULL;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
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
	return (actual);
}
