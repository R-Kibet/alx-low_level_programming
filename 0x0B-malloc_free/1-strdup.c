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

	j = 0;
	ptr = malloc(sizeof(char *) * (j + 1));

	if (str == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		ptr[i] = str[i];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
