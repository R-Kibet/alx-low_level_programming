#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long i, j, k, l, m;
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
		if (i == 49)
		{
			printf("%lu", k);
		}
		else
		{
			printf("%lu, ", k);
			m = k + l;
			k = l;
			l = m;
		}
	}
	printf("\n");
	return (0);
}
