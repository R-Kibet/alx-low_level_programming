#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht:hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new, *temp;
	hash_table_t *head;
	unsigned long int i;

	head = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			new = ht->array[i];
			while (new)
			{
				temp = new->next;
				free(new->key);
				free(new->value);
				free(new);
				new = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
