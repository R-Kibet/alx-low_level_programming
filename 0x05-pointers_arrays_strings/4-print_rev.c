#include "main.h"
#include <string.h>

/**
 * print_rev - Entry point
 *
 * @s: char *s
 */

void print_rev(char *s)
{
	int i, len, k;

	len = strlen(s);
	k = 0;

	for (i = 0 ; s[i] == '\0' ; ++i)
	{
		len = i;
	}
	for (; len >= k ; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
