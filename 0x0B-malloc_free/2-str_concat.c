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
	unsigned int i, j, st1, st2;
	char *prt;

	st1 = strlen(s1);
	st2 = strlen(s2);
	j = st1 + st2;

	prt = malloc(sizeof(char *) * (j + 1));
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0 ; i < st1 ; i++)
	{
		prt[i] = s1[i];
	}
	for (i = 0; i < st2 ; i++)
	{
		prt[i + st1] = s2[i];
	}
	prt[j] = '\0';
	return (prt);
}
