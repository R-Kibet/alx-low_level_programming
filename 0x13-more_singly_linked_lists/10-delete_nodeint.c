#include "lists.h"

/**
 * delete_nodeint_at_index - delete at a certain index
 * @head: pointer to 1st node
 * @index: node to be deleted
 * Return: 1 / -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
	unsigned int i = 0;

	temp = *head;

	if (*head == NULL || (temp->next == NULL && index != 0))
		return (-1);
	if (index)
	{
		while (i < index - 1)
		{
			temp = temp->next;
			i++;
		}
	}
	del = temp->next;
	if (index)
	{
		temp->next = del->next;
		free(del);
	}
	else
	{
		free(temp);
		*head = del;
	}
	return (1);
}
