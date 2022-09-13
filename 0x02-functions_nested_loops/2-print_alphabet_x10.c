#include "main.h"

/**
 * print_alphabet_x10 - print out 10 lines a-z
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0 ; i < 10 ; i++)
	{
		for (a = 'a' ; a < 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar(i);
		_putchar('\n');
	}
}
