#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 * cap_string - Entry point of program
 *
 * @a: character
 *
 * Return: succces
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[0] >= 'a' && a[0] <= 'z')
		{
			a[0] = a[0] - 32;
		}
		if (a[i] == ' ' || a[i] == '.' || a[i] == '\t' || a[i] == '\n' || a[i] == ','
			|| a[i] == ';' || a[i] == '!' || a[i] == '?')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
		i++;
	}
	return (a);
}
