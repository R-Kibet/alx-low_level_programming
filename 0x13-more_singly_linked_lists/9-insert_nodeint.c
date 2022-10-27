#include "lists.h"

/**
 * nsert_nodeint_at_index - insert node at given index
 * @head: pointer to !st node
 * @idx: where new node should be added
 * @n: data
 * Return: new insertion
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
