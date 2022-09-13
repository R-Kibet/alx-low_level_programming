#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long i, j, k, l, n;

	n = 91;
	j = 1;
	k = 1;

	for (i = 1 ; i <= n ; i++)
	{
		if (i == 98)
		{
			printf("%lu, ", k);
		}
		else
		{
			printf("%lu, ", k);
			l = j + k;
			j = k;
			k = l;
		}
	}
	printf("\n");
	return (0);
}
