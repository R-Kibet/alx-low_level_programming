#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to next node
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0 ; h ; i++)
	{
		h = h->next;
	}
	return (i);
}
