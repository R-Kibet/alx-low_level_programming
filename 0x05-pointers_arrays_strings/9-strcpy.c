#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Entry point
 *
 * @dest: char *dest
 * @src: char *src
 *
 * Return: success
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
