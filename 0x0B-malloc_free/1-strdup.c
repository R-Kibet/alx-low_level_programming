#include "main.h"

/**
 * _strdup - return a pointer to a new space in memory
 *
 * @str: string
 *
 * Return: success
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
		continue;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j <= i ; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
