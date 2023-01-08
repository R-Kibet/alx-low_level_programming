#include "hash_tables.h"

/**
 * hash_table_get - retrieves value from key
 * @ht: hash table
 * @key: key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned int i;

	if (!ht || !key || !(*key))
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	new = ht->array[i];

	while (new)
	{
		if (!strcmp(key, new->key))
			return (new->value);
		new = new->next;
	}
	return (NULL);
}
