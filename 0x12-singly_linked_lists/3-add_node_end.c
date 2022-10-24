#include "lists.h"

/**
 * add_node_end - add new node at end of list
 *
 * @head: pointer to the 1st node
 * @str: pointer to string
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	size_t i;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);

	for (i = 0; str[i]; i++)
		continue;

	node->len = i;
	node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (*head);
}
