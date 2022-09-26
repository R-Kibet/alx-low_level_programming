#include "main.h"
#include <string.h>

/**
 * _strpbrk - finds st char in string that matches to
 * other character in another string
 *
 * @s: ponter to 1st string
 * @accept: pointer to 2nd string
 *
 * Return: characters that have been used in both
 */

char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
