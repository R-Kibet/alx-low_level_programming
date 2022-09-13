#include "main.h"

/**
 * print_last_digit - prints last digits of a number
 *
 * @i: int i
 *
 * Return: 0
 */

int print_last_digit(int i)
{
	/**
	 *  main operation i % 10
	 *  but check first if it less tahn 0
	 */

	int j;

	j = i % 10;

	if (j < 0)
	{
		j = j * (-1);
	}
	_putchar(j + '0');
	return (j);
}
