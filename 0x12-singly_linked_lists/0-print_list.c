#include "lists.h"

/**
 * print_list - print elements in list
 *
 * @h: pointer to nxt node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t list;

	list = 0;

	for (list = 0; h != NULL ; list++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (list);
}
