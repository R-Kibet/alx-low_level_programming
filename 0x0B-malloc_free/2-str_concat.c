#include "main.h"

/**
 * str_concat - function that concatenate two strings
 *
 * @s1: character 1
 * @s2: character 2
 *
 * Return: concat of 2 strings
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, n, k;
	char *prt;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = strlen(s1);
	j = strlen(s2);
	k = i + j;

	prt = malloc(sizeof(char) * (k + 1));

	if (prt == NULL)
	{
		free(prt);
		return (NULL);
	}
	for (n = 0 ; n < i ; n++)
	{
		prt[n] = s1[n];
	}
	for (n = 0; n <= j; n++)
	{
		prt[n + i] = s2[n];
	}
	prt[k] = '\0';
	return (prt);
}
