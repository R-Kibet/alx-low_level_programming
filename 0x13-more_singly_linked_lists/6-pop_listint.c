#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: pointer to first node
 * Return: deleted 1st node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int j;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		j = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (j);
}
