#include "main.h"

/**
 * _calloc - allocats memory for an array
 *
 * @nmemb: memory for an array
 * @size: bytes of the array
 *
 * Return: pointer to address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * sizeof(size));

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
