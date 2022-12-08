#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining
 * @head: pointer to head node
 * @n: integer
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp || !head)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	if (*head)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
