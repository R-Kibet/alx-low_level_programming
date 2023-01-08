#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(ht));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
