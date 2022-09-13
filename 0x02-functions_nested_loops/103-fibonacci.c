#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long i, k, l, m, n;

	k = 0;
	l = 1;
	n = 0;

	for (i = 0 ; i < 50 ; i++)
	{
		m = k + l;
		k = l;
		l = m;
		if (m % 2 == 0 && m < 4000000)
		{
			n += m;
		}

	}
	printf("%lu\n", n);
	return (0);
}
