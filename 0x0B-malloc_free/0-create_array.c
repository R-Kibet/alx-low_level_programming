#include "main.h"

/**
 * create_array - create array of char and initializes
 *
 * @size: unsinged int/only positive
 * @c: char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char *) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
