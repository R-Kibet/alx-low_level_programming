#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l, m;
	/**
	 * k - first
	 * l - secnd
	 * m - next num
	 */
	 j = 50;
	 k = 1;
	 l = 2;

	for (i = 0 ; i < j ; i++)
	{
		if (1 == 49)
		{
			printf("%d", k);
		}
		else
		{
			printf("%d, ", k);
			m = k + l;
			k = l;
			l = m;
		}
	}
	printf("\n");
	return (0);
}
