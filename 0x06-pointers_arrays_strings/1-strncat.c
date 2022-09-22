#include "main.h"
#include <string.h>

/**
 * _strncat - Entry pint of the program
 *
 * @dest: destination
 * @src: source
 * @n: integer for pponter
 *
 * Return: success
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
