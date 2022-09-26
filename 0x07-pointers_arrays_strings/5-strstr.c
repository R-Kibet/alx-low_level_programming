#include "main.h"
#include <string.h>

/**
 * _strstr - finds st occurence in one string to another
 * finds first complete match
 *
 * @haystack: pointer to 1st string
 * @needle: pointer to 2nd string
 *
 * Return: complete match
 */

char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);
	return (haystack);
}
