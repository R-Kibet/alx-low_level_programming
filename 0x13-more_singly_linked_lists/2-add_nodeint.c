#include "lists.h"

/**
 * add_nodeint - add new node ata the beginig of list
 * @head: pointer to first node
 * @n: integer
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
	}
	*head = new;
	return (new);
}
