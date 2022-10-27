#include "lists.h"

/**
 * get_nodeint_at_index - return specified node
 * @head: pointer to !st node
 * @index: index of node
 * Return: return index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;

	if (head == NULL)
		return (NULL);
	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (temp);

}
