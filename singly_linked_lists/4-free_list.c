#include "lists.h"

/**
 * free_list - free all the node
 *
 * @head: start of the list
 *
 * Return: no return, void function
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;
	list_t *new = NULL;

	temp = head;

	while (temp != NULL)
	{
		new = temp->next;
		free(temp->str);
		free(temp);
		temp = new;
	}
}
