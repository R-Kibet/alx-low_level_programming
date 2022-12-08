#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head pointer
 * @index: position to delete
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = *head;
	if (!head || !temp)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; temp; i++)
	{
		if (i == index)
		{
			if (temp->next)
			{
				(temp->prev)->next = temp->next;
				(temp->next)->prev = temp->prev;
				free(temp);
				return (1);
			}
			else
			{
				(temp->prev)->next = NULL;
				free(temp);
				return (1);
			}
		}
		temp = temp->next;
	}

	return (-1);
}
