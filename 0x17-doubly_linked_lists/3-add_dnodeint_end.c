#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head pointer
 * @n: data
 * Return: node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	temp = malloc(sizeof(dlistint_t));
	tp  = *head;

	if (!head || !temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (!*head)
	{
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	while (tp->next)
	{
		tp = tp->next;
	}
	tp->next = temp;
	temp->prev = tp;
	return (temp);
}
