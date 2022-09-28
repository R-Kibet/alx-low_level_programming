#include "main.h"

/**
 * s_len - check string length
 * @s: pointer to teh string
 * Desription: check task 2
 * Return: string length
 */

int s_len(char *s)
{
	if (*s != '\0')
	{
		return (1 + s_len(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_pal - check if its a palindrome
 *
 * @s: pointer to string
 * @i: input
 * @j: length of string
 *
 * Return: if string is a palindrome
 */

int is_pal(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + is_pal(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - prints if a string ia palindrom
 *
 * @s: poiner to the string
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_pal(s, 0, s_len(s) - 1));
}
