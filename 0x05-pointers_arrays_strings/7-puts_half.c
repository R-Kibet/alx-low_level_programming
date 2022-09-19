#include "main.h"
#include <string.h>

/**
 * puts_half -Entry point
 *
 * @str: char *str
 */

void puts_half(char *str)
{
	int i, j, n;

	j = strlen(str);
	n = (j / 2);


	for (i = 0 ; i <= j ; i++)
	{
		if (i >= n)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
