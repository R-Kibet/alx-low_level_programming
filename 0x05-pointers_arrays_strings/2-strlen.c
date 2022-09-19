#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry of the program
 *
 * @s: char *s
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
