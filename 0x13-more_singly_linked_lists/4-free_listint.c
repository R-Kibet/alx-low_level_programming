#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to 1st node
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
