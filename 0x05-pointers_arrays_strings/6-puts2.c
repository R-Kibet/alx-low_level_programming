#include"main.h"
#include <string.h>
/**
 * puts2 - Entry of the program
 *
 * @str: char *str
 */

void puts2(char *str)
{
	int i, j;

	j = strlen(str);

	for (i = 0 ; i <= j ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
