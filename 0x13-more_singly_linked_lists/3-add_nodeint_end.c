#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * @head: pointer to first node
 * @n: input number
 * Return: address to new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *temp;
	size_t i;

	end = malloc(sizeof(listint_t));

	if (end == NULL)
	{
		free(end);
		return (NULL);
	}
	end->n = n;

	for (i = 0 ; n < 0; i++)
		continue;

	end->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = end;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = end;
	}
	return (*head);
}
