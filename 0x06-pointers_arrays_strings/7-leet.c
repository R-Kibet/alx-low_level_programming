#include "main.h"

/**
 * leet - Entry point
 * @s: input string
 *
 * Return: success
 */

char *leet(char *s)
{
	int i, k;

	char y[] = "aAeEoOtTlL";
	char z[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (y[k] == s[i])
			{
				s[i] = z[k];
			}
		}
	}
	return (s);
}
