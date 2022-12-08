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
	dlistint_t *temp, *tp, *st;
	unsigned int i = 0

	temp = malloc(sizeof(dlistint_t));
	temp->n = n;
	tp = *h;
	if (!*h)
	{
		return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!tp->next)
	{
		return (add_dnodeint_end(h, n));
	}
	while (i != idx)
	{
		tp = tp->next;
		i++;
	}
	st = tp->next;
	tp->next = temp;
	temp->prev = tp;
	temp->next = st;
	st->prev = temp;

	return (temp);
}
