#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry point of the program
 *
 * @c: int c
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
