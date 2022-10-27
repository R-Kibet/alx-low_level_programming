#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: pointer to the 1st list
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	prev = NULL;
	curr = NULL;

	curr = (*head)->next;

	while (curr->next)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}
	if (curr)
		curr->next = prev;
	return (*head);
}
