#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: pointer to the node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;

	while (head)
	{
		fr  = head;
		head = head->next;
		free(fr);
	}
}

