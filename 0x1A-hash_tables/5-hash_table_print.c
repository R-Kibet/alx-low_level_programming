#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int i;
	unsigned char c = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c == 1)
			{
				printf(", ");
			}
			new = ht->array[i];
			while (new)
			{
				printf("'%s': '%s'", new->key, new->value);
				new = new->next;
				if (new)
					printf(", ");
			}
			c = 1;
		}
	}
	printf("}\n");
}
