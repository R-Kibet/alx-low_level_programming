#include "lists.h"

/**
 * insert_dnodeint_at_index - insert at index
 * @h: pointer to node
 * @idx: position
 * @n: data
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	temp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (!tmp)
		{
			return (NULL);
		}
	}
	if (!tmp->next)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
