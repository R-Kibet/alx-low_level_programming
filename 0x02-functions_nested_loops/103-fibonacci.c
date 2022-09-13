#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long i, j, k, l, m, n;

	j = 50;
	k = 1;
	l = 2;
	n = 0;

	for (i = 0 ; i < j ; i++)
	{
		m = k + l;
		j = k;
		k = m;

		if ((m % 2 == 0) && (m < 4000000))
		{
			n += m;
		}

	}
	printf("%lu\n", n);
	return (0);
}
