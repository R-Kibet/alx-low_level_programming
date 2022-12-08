#include "lists.h"

/**
 * print_dlistint - print all elements in a dlinkd list
 * @h: pointer to the head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
return (i);
}
