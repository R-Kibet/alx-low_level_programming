#include "main.h"
#include <string.h>

/**
 * print_rev - Entry point
 *
 * @s: char *s
 */

void print_rev(char *s)
{
	int i, k;

	i = 0;
	k = 0;
	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	for (i--; i >= k ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
