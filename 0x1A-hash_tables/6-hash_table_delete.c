#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hastable
 * Return: void, just free everything
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *nxt;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			nxt = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = nxt;
		}
	}

	free(ht->array);
	free(ht);
}
