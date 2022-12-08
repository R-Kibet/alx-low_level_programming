#include "lists.h"

/**
 * get_dnodeint_at_index -ge node at index
 * @head: pointer to head node
 * @index: int of index
 * Return: the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int count;

	count = 0;
	curr = head;

	if (!head)
		return (NULL);



	while (count++ != index && curr)
	{
		curr = curr->next;
	}
	return (curr);
}
