#include "main.h"
#include <string.h>

/**
 * _strspn - determines how many char in a string are made
 * up of a specific set of char
 *
 * @s: pointer to the sstring
 * @accept: string to be viewd
 *
 * Return: the positio to which the char doesnt match
 */

unsigned int _strspn(char *s, char *accept)
{
	int pos = strspn(s, accept);

	return (pos);
}
