#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - Entry of the program
 *
 * @dest: destination
 * @src: source
 *
 * Return: suceess
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
