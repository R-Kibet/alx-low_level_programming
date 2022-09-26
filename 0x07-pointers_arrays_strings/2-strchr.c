#include "main.h"
#include <string.h>

/**
 * _strchr - finds first occurence of char in a string
 *
 * @s:pointer to thr string
 * @c: character to be return
 *
 * Return: pointer to original string
 */

char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
