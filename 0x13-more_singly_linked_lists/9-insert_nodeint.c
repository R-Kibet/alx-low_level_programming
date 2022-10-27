#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: pointer to !st node
 * @idx: where new node should be added
 * @n: data
 * Return: new insertion
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	temp = *head;

	if (head == NULL)
		return (NULL);
	if (idx)
	{
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
