#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - Entry point of the program
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, r;

	for (i = 0; s1[i] != '\0'; i++)
	{
		r = s1[i] - s2[i];

		if (r < 0)
		{
			return (r);
		}
		else if (r > 0)
		{
			return (r);
		}
	}
	return (0);
}
