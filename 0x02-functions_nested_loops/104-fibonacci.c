#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l, n;

	n = 98;
	j = 0;
	k = 1;

	for (i = 1 ; i <= n ; i++)
	{
		if (i == 98)
		{
			printf("%d, ", k);
		}
		else
		{
			printf("%d, ", k);
			l = j + k;
			j = k;
			k = l;
		}
	}
	printf("\n");
	return (0);
}
