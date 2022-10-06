#include "main.h"

/**
 * _realloc - realloates memory block
 *
 * @ptr: pointer to memory previosly alloc
 * @old_size: old size
 * @new_size: new size
 *
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (ptr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	return (ptr);
}
