#include "main.h"

/**
 * print_triangle - Start of the program
 *
 * @size: int size
 */
void print_triangle(int size)
{
	int i, j;

	if (size <=0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 1; j < (size - i) ; j++)
			{
				_putchar(' ');
			}
			for (j-- ; j < size ; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		
	}

}
