#include "main.h"
#include <string.h>

/**
 * _strncpy - Entry point of the program
 *
 * @dest: destination
 * @src: source
 * @n: int n
 *
 * Return: success
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
