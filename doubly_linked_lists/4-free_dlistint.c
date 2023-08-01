#include "lists.h"

/**
 * free_dlistint - free all the node
 *
 * @head: start of the list
 *
 * Return: no return, void function
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	dlistint_t *new = NULL;

	temp = head;

	while (temp != NULL)
	{
		new = temp->next;
		free(temp);
		temp = new;
	}
}
