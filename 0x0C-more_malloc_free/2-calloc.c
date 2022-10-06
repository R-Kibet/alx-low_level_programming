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
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * sizeof(size));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
