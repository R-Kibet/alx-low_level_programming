#include "lists.h"

/**
 * sum_listint - sums all data
 * @head: pointer to st node
 *Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
