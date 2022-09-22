#include "main.h"

/**
 * rot13 -Entry point
 * @s: string
 *
 * Return: success
 */

char *rot13(char *s)
{
	int i, j;

	char y[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char z[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (s[i] == y[j])
			{
				s[i] = z[j];
				break;
			}
		}
	}
	return (s);
}
