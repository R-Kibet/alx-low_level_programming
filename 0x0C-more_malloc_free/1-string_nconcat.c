#include "main.h"

/**
 * string_nconcat - func concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: int assigned
 *
 * Return: pointer address of mem
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, m;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0' ; i++)
	{
		continue;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		continue;
	}
	if (n >= j)
		n = j;

	k = i + n;

	ptr = malloc(sizeof(char) * (k + 1));

	if (ptr == NULL)
		return (NULL);
	for (m = 0 ; m < i ; m++)
	{
		ptr[m] = s1[m];
	}
	for (m = 0; m <= n; m++)
	{
		ptr[m + i] = s2[m];
	}
	ptr[k] = '\0';
	return (ptr);
}
