#include "main.h"

/**
 * times_table -  multiplication table
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				continue;
			}
			k = i * j;
			_putchar(',');
			_putchar(' ');
			if (k >= 10)
			{
				_putchar(k / 10 + 48);
				_putchar(k % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
