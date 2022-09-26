#include "main.h"
#include <string.h>

/**
 * _memcpy - copy block of data from 1 mem address to
 * another
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n:number of ytes to copy
 *
 * Return: success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
