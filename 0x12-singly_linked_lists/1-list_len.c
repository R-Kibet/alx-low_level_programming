#include "lists.h"

/**
 * list_len - prints element in linked list
 * @h: pointer to the link
 *
 * Return: numer of elements
 */

size_t list_len(const list_t *h)
{
	size_t list;

	for (list = 0; h != NULL; list++)
	{
		h = h->next;
	}
	return (list);
}
