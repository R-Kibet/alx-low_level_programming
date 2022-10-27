#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to 1st node
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

	if (head)
	{
		curr = *head;

		while (curr)
		{
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
