#include "main.h"
#include <string.h>

/**
 * _memset - Entry point of program
 *
 * @s: memory address
 * @b: contains  value itself
 * @n: number of bytes for which to set the value
 *
 * Return: success
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
