#include "lists.h"

/**
 * print_listint - print all elements
 * @h: pointer to the list
 * Return: all elemens of list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0 ; h ; i++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}
	return (i);
}
