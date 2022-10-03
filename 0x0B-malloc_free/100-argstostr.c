#include "main.h"

/**
 * argstostr - concatenate all arguments of the program
 *
 * @ac: int ac
 * @av: pointer to the string
 *
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int c, i, j, k;
	char *ptr;

	c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0'; j++)
		{
			c++;
		}
		c++;
	}

	ptr = malloc(sizeof(char *) * (c + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			ptr[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			ptr[k] = av[i][j];
	}
	ptr[k] = '\0';

	return (ptr);
}
