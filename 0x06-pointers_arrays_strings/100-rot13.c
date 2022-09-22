#include "main.h"

/**
 * rot13 -Entry point
 * @s: string
 *
 * Return: success
 */

char *rot13(char *s)
{
	int i = 0, j;

	char y[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char z[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 51 ; j++)
		{
			if (y[j] == s[i])
			{
				s[i] = z[j];
			}
		}
	}
	return (s);
}
