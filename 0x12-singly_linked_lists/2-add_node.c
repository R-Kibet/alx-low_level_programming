#include "lists.h"

/**
 * add_node - ad new node at the beginning
 *
 * @head:first node
 * @str: string pointer
 *
 * Return: address or NUUL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
	}
	*head = new;
	return (new);

}
