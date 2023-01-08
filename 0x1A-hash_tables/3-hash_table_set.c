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
	hash_node_t *new, *act;
	unsigned long int i;
	char *cp;

	if (!ht || !key || !(*key) || value == NULL)
		return (0);

	cp = strdup(value);
	if (cp == NULL)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	act = ht->array[i];

	while (act)
	{
		if (!strcmp(key, act->key))
		{
			free(act->value);
			act->value = cp;
			return (1);
		}
		act = act->next;
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
