#include "main.h"

/**
 * print_number - Start of program
 *
 * @n: int n
 */

void print_number(int n)
{
	int m, o, p;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	}
	o = m;
	p = 1;
	while (o > 9)
	{
		o /= 10;
		p *= 10;
	}
	for (; p >= 1; p /= 10)
	{
		_putchar(((m / p) % 10) + '0');
	}
}
