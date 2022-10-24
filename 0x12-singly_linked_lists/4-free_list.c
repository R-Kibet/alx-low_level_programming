#include "lists.h"

/**
 * free_list - function that frees a list
 *
 * @head: pointer to the 1st node
 */

void free_list(list_t *head)
{
	list_t *curr, *temp;

	curr = head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	head = NULL;
}
