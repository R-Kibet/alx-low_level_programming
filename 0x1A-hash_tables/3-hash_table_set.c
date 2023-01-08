#include "hash_tables.h"

/**
 * hash_table_set - add element to the hash table
 * @ht: hash table to add to
 * @key: key
 * @value: value associated with key
 * Return: 1 / 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int i, j;
	char *cp;

	if (!ht || !key || !(*key) || value == NULL)
		return (0);

	cp = strdup(value);
	if (cp == NULL)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = cp;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		free(cp);
	return (0);

	new->key = strdup(key);
	if (new->key == NULL)
		free(new);
	return (0);

	new->value = cp;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
